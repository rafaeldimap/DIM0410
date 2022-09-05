
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v = {4, 7, 3, 2, 5, 9};

	cout << "O último elemento de v: " << v.back() << endl;
	cout << "O primeiro elemento de v: " << v.front() << endl;

	return 0;

}
