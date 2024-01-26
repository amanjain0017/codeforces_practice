#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	map<char, int> count;

	for (int i = 0; i < s.size(); i++) {
		count[s[i]]++;
	}

	int result = min(count['B'], min(count['u']/2, min(count['l'], min(count['b'], min(count['a']/2, min(count['s'], count['r']))))));

	cout << result << endl;

	return 0;
}