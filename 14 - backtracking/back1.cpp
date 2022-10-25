#include <bits/stdc++.h>

using namespace std;

char str[100];
int usada[256];

//gerar todas as combinações de 5 letras minúsculas
void gerar(int k) {
	if(k == 5) {
		cout << str << endl;
	} else {
		for(int c = 'a'; c <= 'z'; c++) {
			if(!usada[c]) {
				str[k] = c;
				usada[c] = 1;
				gerar(k+1);
				usada[c] = 0;
			}
		}
	}
}

int main() {

	str[5] = '\0';
	for(int i = 'a'; i <= 'z'; i++)
		usada[i] = 0;
	gerar(0);

	return 0;

}
