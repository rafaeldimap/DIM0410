
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v1;
	//v2 é inicializado com 5 inteiros com valor 10
	vector<int> v2(5, 10);
	//v3 é inicializado com uma cópia de v2
	vector<int> v3(v2);

	vector<int> v4 = {4, 7, 3, 2};
	cout << v4.size() << endl;

	for(int i = 0; i < v4.size(); i++)
		cout << v4[i] << endl;

	return 0;

}
