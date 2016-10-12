#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int n, m;
	string s;
	vector<string> uniq;
	vector<int> num;
	cin >> n;
	while (n > 0) {
		cin >> m;
		while (m > 0) {
			cin >> s;
			if (find(uniq.begin(), uniq.end(), s) == uniq.end()) {
				uniq.push_back(s);
			}
			m--;
		}
		num.push_back(uniq.size());
		uniq.clear();
		n--;
	}
	for(unsigned i = 0; i < num.size(); ++i) {
		cout << num[i] << endl;
	}
	return 0;
}
