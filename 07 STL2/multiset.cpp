#include <set>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	multiset<int> conjunto;
	set<int>::iterator it;
	conjunto.insert(7);
	conjunto.insert(7); //haverá dois 7s no conjunto
	conjunto.insert(1);
	conjunto.insert(1); //haverá dois 1s no conjunto
	conjunto.insert(5);
	conjunto.insert(3);
	it = conjunto.find(7);
	conjunto.erase(it); //remove apenas o 7 do iterador, o outro permanece
	conjunto.erase(1); //remove todos os 1s
	for(auto it : conjunto)
		cout << it << endl;

	return 0;

}
