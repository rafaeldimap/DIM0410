
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v = {4, 7, 3, 2, 5, 9};

	v.push_back(10);
	v.push_back(6);
	v.pop_back();

	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;

}
