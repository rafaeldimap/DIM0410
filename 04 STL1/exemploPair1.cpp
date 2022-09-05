
#include <iostream>
#include <vector>

using namespace std;

int main() {

	std::pair<string, int> pessoa1("Amanda", 25);
	std::pair<string, int> pessoa2;

	pessoa2 = std::make_pair<string, int>("Bruno", 30);

	cout << "A idade de 1) " << pessoa1.first << " é " << pessoa1.second << endl;
	cout << "A idade de 2) " << pessoa2.first << " é " << pessoa2.second << endl;

	pessoa1.swap(pessoa2);

	cout << "Após o swap: " << endl;
	cout << "A idade de 1) " << pessoa1.first << " é " << pessoa1.second << endl;
	cout << "A idade de 2) " << pessoa2.first << " é " << pessoa2.second << endl;

	return 0;

}
