#include <bits/stdc++.h>

using namespace std;

int main() {
	
	map<string, int> m;
	m["Ana"] = 10;
	m["Bianca"] = 15;

	cout << m["Bianca"] << endl;

	for(auto i : m)
		cout << i.first << " : " << i.second << endl;

	return 0;

}
