#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

vector<bool> linha(8, false);
vector<int> rainha(8);
int cont = 0;

//atenção: confere a resposta apenas ao final da recursão
//para uma melhor solução, confira a disponível no Cap 5 do livro CSES
void f(int k) {
	if(k == 8) {
		bool algumaAtaca = false;
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < i; j++) {
				if(rainha[i] == rainha[j])
					algumaAtaca = true;
				int xi = i;
				int yi = rainha[i];
				int xj = j;
				int yj = rainha[j];
				if(xi+yi == xj+yj)
					algumaAtaca = true;
				if(xi-yi == xj-yj)
					algumaAtaca = true;
			}
		}
		if(!algumaAtaca) {
			cont++;
			for(int i = 0; i < 8; i++) {
				cout << rainha[i] << " ";
			}
			cout << endl;
		}
	} else {
		for(int i = 0; i < 8; i++) {
			rainha[k] = i;
			f(k+1);
		}
	}
}

int main() {

	f(0);
	cout << "Total: " << cont << endl;
	return 0;

}
