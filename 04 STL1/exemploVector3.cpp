
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v = {4, 7, 3, 2, 5, 9};

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;

	for(vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;

}
