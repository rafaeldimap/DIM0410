#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string palavra = "aaa";
vector<bool> used(256, false);

//gera todas as strings de 3 letras (a, b ou c) sem repetição
void f(int i) {
	if(i == 3) {
		cout << palavra << endl;
	} else {
		for(int letra = 'a'; letra <= 'c'; letra++) {
			if(!used[letra]) {
				used[letra] = true;
				palavra[i] = letra;
				f(i+1);
				used[letra] = false;
			}
		}
	}
}

int main() {

	f(0);
	return 0;

}
