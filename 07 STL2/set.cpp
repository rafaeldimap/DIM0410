#include <set>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	set<int> conjunto;
	set<int>::iterator it;
	conjunto.insert(7);
	conjunto.insert(7);
	conjunto.insert(1);
	conjunto.insert(5);
	conjunto.insert(3);
	it = conjunto.find(3);
	conjunto.erase(it);
	for(it = conjunto.begin(); it != conjunto.end(); it++)
		cout << *it << endl;

	return 0;

}
