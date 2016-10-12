#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(void) {
	int n, num, total = 0;

	cin >> n;
	while (n > 0) {
		cin >> num;
		int first = num / 10;
		int last = num % 10;
		total += pow(first, last);
		n--;
	}
	cout << total << endl;

	return 0;
}
