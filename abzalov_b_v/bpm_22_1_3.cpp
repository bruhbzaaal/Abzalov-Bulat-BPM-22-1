#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
	std::vector <char> glas(5);
	glas[0] = 'a';
	glas[1] = 'o';
	glas[2] = 'u';
	glas[3] = 'i';
	glas[4] = 'e';

	std::string word;
	std::cin >> word;
	int flag_1 = 0;
	int flag_2 = 0;
	int flag = 0;

	int s = word.size();
	
	for (int i = 1; i < s; ++i) {
		for (int k = 0; k < 5; ++k) {
			if (word[i - 1] == glas[k]) {
				flag_1 = 1;
			}
			if (word[i] == glas[k]) {
				flag_2 = 1;
			}
		}
		if (flag_1 == 0 && word[i - 1] != 'n' && flag_2 == 0) {
			flag = -1;
		}
		flag_1 = 0;
		flag_2 = 0;
	}

	if (flag == -1) {
		std::cout << "NO";
	}
	else {
		std::cout << "YES";
	}
	return 0;
}
