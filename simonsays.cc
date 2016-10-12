#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int n;
	string str, simonsays = "Simon says ";
	vector<string> ss;
	cin >> n;

	while (n >= 0) {
		getline(cin, str);
		ss.push_back(str);
		n--;
	}

	for(size_t i = 0; i < ss.size(); ++i) {
		if(ss[i].find(simonsays) != string::npos) {
			cout << ss[i].substr(simonsays.length(), ss[i].length()-1) << endl; 
		}
	}

	return 0;
}
