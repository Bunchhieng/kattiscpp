#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
	int h, v, val;
	float r;
	cin >> h >> v;
	r = (v*M_PI)/180;
	val = ceil(h/sin(r));
	cout << val << endl;
	return 0;
}
