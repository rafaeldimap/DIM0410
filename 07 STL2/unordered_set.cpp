#include <unordered_set>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	unordered_set<int> conjunto;

	conjunto.insert(3);
	conjunto.insert(7);
	conjunto.insert(7);
	conjunto.insert(5);
	conjunto.insert(1);
	conjunto.insert(9);
	conjunto.insert(5);
	cout << "Antes da remoção: " << endl;
	for(auto x : conjunto)
		cout << x << endl;

	conjunto.erase(5); //tal qual o multiset, erase remove todas as instâncias
	conjunto.erase(conjunto.find(7));
	cout << "Depois das remoções: " << endl;
	for(auto x : conjunto)
		cout << x << endl;

	return 0;

}
