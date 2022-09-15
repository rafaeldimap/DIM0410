#include <stack>
#include <iostream>

using namespace std;

int main() {

	stack<int> pilha;

	pilha.push(3);
	pilha.push(1);
	pilha.push(9);
	pilha.push(7);
	pilha.push(9);
	while(!pilha.empty()) {
		cout << pilha.top() << " ";
		pilha.pop();
	}
	cout << endl;


	return 0;

}
