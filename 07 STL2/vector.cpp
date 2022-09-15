
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);

	for(auto x : v)
		cout << x << endl;


	return 0;

}
