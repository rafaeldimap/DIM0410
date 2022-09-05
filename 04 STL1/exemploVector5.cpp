
#include <iostream>
#include <vector>

using namespace std;

void info(vector<int> &v) {
	cout << "Vector, size = " << v.size() << ", capacity = " << v.capacity() << endl;
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

int main() {

	vector<int> v = {4, 7, 3, 2, 5, 9};
	info(v);

	int x;
	do {
		cin >> x;
		v.push_back(x);
		info(v);
	} while(x != 0);

	v.shrink_to_fit();
	info(v);

	return 0;

}
