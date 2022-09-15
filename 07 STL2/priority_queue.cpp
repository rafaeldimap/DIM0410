#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	priority_queue<int, vector<int>> fila;

	fila.push(5);
	fila.push(3);
	fila.push(9);
	fila.push(7);
	fila.push(3);
	fila.push(3);

	while(!fila.empty()) {
		cout << fila.top() << " ";
		fila.pop();
	}
	cout << endl;


	return 0;

}
