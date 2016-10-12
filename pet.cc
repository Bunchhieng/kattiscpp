#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int a, b, c, d, ind, total, max = 0;
	vector<int> con;
	vector<int>::iterator it;

	for(size_t i = 0; i < 5; i++) {
		cin >> a >> b >> c >> d;
		total = a + b + c + d;
		con.push_back(total);		
	}
	
	for(size_t j = 0; j < con.size(); j++) {
		if (con[j] > max) {
			max = con[j];
			// first approach
			ind = j;
		}
	}

	// second approach
	it = find(con.begin(), con.end(), max);
	int pos = distance(con.begin(), it);
	cout << pos + 1 << " " << max << endl;
	return 0;
}
