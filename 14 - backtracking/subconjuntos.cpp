#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

vector<int> numeros = {1, 2, 5};
vector<int> subconjunto;

void f(int i) {
	if(i == 3) {
		for(int i = 0; i < subconjunto.size(); i++) {
			cout << subconjunto[i] << " ";
		}
		cout << endl;
	} else {
		//sem o numeros[i]
		f(i+1);

		//com o numeros[i]
		subconjunto.push_back(numeros[i]);
		f(i+1);
		subconjunto.pop_back();
	}
}

int main() {

	f(0);
	return 0;

}
