#include <iostream>
#include <string> 
 
int main() {
	int t;
	std::cin >> t;
	for (int l = 0; l < t; ++l) {
		int a, b;
		std::cin >> b >> a;
		std::string c;
		std::cin >> c;
		int n;
		int A = 0, B = 0, k = 1;
		n = c.size();
		for (int i = 0; i < n; ++i) {
			if (c[i] == '1') {
			    A += 1;
			}
			else if (c[i] == '0') {
			    B += 1;
			}
		    if (c[i] == '?' && c[n - i - 1] != '?') {
				c[i] = c[n - i - 1];
				if (c[i] == '1') {
					A += 1;
				}
				else {
					B += 1;
				}
		    }
		}
		for (int i = 0; i < n; ++i) {
		    if (c[i] == '?' && c[n-i-1] == '?') {
		        if (i != n-i-1) {
		            if (A+2 <= a) {
		                c[i] = '1';
		                c[n-i-1] = '1';
		                A += 2;
		            }
		            else if (B+2 <= b) {
		                c[i] = '0';
		                c[n-i-1] = '0';
		                B += 2;
		            }
		        }
		        else {
		            if (A+1 <= a) {
		                c[i] = '1';
		                A += 1;
		            }
		            else if (B+1 <= b) {
		                c[i] = '0';
		                B += 1;
		            }
		        }
		    }
		}
		int flag = 1;
		for (int i = 0; i < n/2 + 1; ++i) {
		    if (c[i] != c[n - i - 1] || c[i] == '?')  {
				flag = 0;
				break;
			}
		}
		if (a == A && b == B && flag == 1) {
		    std::cout << c << std::endl;
		}
		else {
		    std::cout << -1 << std::endl;
		}
	}
}
