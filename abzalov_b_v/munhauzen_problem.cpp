// CMakeProject.cpp: определяет точку входа для приложения.

#include "./Geom.hpp"
#include <iostream>
#include <fstream>

void PrintTbl(std::ostream& ostrm) {
	ostrm << "x1\ty1\tx2\ty2\n";
}

void PrintCoord(std::ostream& ostrm, double x1, double y1, double x2, double y2) {
	ostrm << x1 << '\t' << y1 << '\t' << x2 << '\t' << y2 << std::endl;
}
int main()
{
	Rdec2D gun_1{   10.0,   5.0 }; //координаты первой пушки
	Rdec2D gun_2{   100.0, 20.0 }; //координаты второй пушки
	Rdec2D speed_1{ 50.0,  50.0 }; //скорость первой пушки (м/с)
  Rdec2D speed_2{ 0.0, 0.0 }; //скорость второй пушки (м/с)
	
	double d_t = norm(gun_2 - gun_1) / 331; //задержка по времени между первым и вторым выстрелом (с)
	std::cout << "Time delta = " << d_t << std::endl;
	
	const double g = 9.8; //ускорение свободного падения на Земле (м/с**2)
	double t          = 0;  //время с выстрела из второй пушки
	double speed_limit = 100; // скаляр предельной скорости второй пушки (м/с)
	
	
	double time;
	std::cout << "Expected time of collision is ...";
	std::cin >> time; 
	

	double x1 = gun_1.x + speed_1.x * (t + d_t); //уравнение движения первого ядра по оси Х
	double y1 = gun_1.y + speed_1.y * (t + d_t) - g * pow((t + d_t), 2) * 0.5; //уравнение движения первого ядра по оси Y

	double x2 = gun_2.x + speed_2.x * t; //уравнение движения второго ядра по оси Х
	double y2 = gun_2.y + speed_2.y * t - g * t * t * 0.5; //уравнение движения второго ядра по оси х

	int flag = 1;
	int flag_1 = 1;
	int flag_2 = 1;
	double eps = 1.0; //погрешность столкновения снарядов

	for (int i = 1; i > 0; ++i) {
		t += 0.5;
		
		x1 = gun_1.x + speed_1.x * (t);
		y1 = gun_1.y + speed_1.y * (t) - g * pow((t), 2) * 0.5; 

		if (y1 <= 0) {
			std::cout << "Collision is impossible at this time - core 1 landed" << std::endl;
			break;
		}
		if (abs(time - t) < 0.5) {
			speed_2.x = (x1 - gun_2.x) / (time - d_t);
			speed_2.y = (y1 - gun_2.y + g * pow((t - d_t), 2)) / (t - d_t);
			if (norm(speed_2) > speed_limit) {
				std::cout << "Collision is impossible at this time - speed limit. Needed speed: " << norm(speed_2) << std::endl;
				break;
			}
			else {
				std::cout << "For collision at " << time << " s" << " - core 2 speed is " << speed_2;
				std::cout << " (in scalar: " << norm(speed_2) << " )" << std::endl;
				std::cout << "Collision in { " << x1 << " , " << y1 << " }" << std::endl;
				break;
			}
		}
	//	std::cout << std::endl;
	}
	std::ofstream of("table.tsv");
	of << "Coordinates of each core in this modulation:" << std::endl;
	//обнулим все показатели для моделирования
	t = 0;
	x1 = gun_1.x;
	y1 = gun_1.y;
	
	PrintTbl(of);
	while (flag == 1) {
		PrintCoord(of, x1, y1, x2, y2);
		if (y1 >= 0) {
			x1 = gun_1.x + speed_1.x * (t + d_t);
			y1 = gun_1.y + speed_1.y * (t + d_t) - g * pow((t + d_t), 2) * 0.5;
		}
		else {
			flag_1 = 0;
		}
		if (y2 >= 0) {
			x2 = gun_2.x + speed_2.x * t;
			y2 = gun_2.y + speed_2.y * t - g * t * t * 0.5;
		}
		else {
			flag_2 = 0;
		}
		if (flag_1 == 0 && flag_2 == 0) {
			flag = 0;
		}
		
		t += 0.2;
	}

}
