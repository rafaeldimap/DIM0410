#include <iostream>
#include <vector>

using namespace std;

template <class T>
T maior(T a, T b) {
	return a > b ? a : b;
}

int main() {


	int ai = 3, bi = 4;
	string as = "primeiro", bs = "segundo";

	cout << maior<int>(ai, bi) << endl;
	cout << maior<string>(as, bs) << endl;

	return 0;

}
