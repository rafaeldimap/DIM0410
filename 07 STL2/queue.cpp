#include <queue>
#include <iostream>

using namespace std;

int main() {

	queue<int> fila;

	fila.push(3);
	fila.push(1);
	fila.push(9);
	fila.push(7);
	fila.push(9);
	while(!fila.empty()) {
		cout << fila.front() << " ";
		fila.pop();
	}
	cout << endl;

	return 0;

}
