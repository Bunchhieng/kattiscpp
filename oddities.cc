#include <iostream>

using namespace std;

int main(void) {
	int n, num;
	cin >> n;
	while (n >= 1 && n <= 20) {
		cin >> num;
		if (num >= -10 && num <= 10) {
			if (num % 2 == 0) {
				cout << num << " is even" << endl;
			} else {
				cout << num << " is odd" << endl;
			}
		}
		n--;
	}
	return 0;
}
