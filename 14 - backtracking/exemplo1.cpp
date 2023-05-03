#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string palavra = "aaa";
vector<string> dicionario;

//gera todas as strings de 3 letras (a ou b)
void f(int i) {
	if(i == 3) {
		dicionario.push_back(palavra);
	} else {
		palavra[i] = 'a';
		f(i+1);
		palavra[i] = 'b';
		f(i+1);
	}
}

int main() {

	f(0);
	return 0;

}
