#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string tentativa = "aaaaa";
vector<int> used(256, 0);
int cont = 0;

//gera todas as strings de 5 letras
//pode usar até 2 vezes cada letra
void f(int posicao) {
	if(posicao == 5) {
		cout << tentativa << endl;
		cont++;
	} else {
		for(char i = 'a'; i <= 'z'; i++) {
			if(used[i] < 2) {
				tentativa[posicao] = i;
				used[i]++;
				f(posicao+1);
				used[i]--;
			}
		}
	}
}

int main() {

	f(0);
	cout << "Total : " << cont << endl;
	return 0;

}
