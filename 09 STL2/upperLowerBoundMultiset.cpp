
#include <bits/stdc++.h>

using namespace std;

int main() {


	multiset<int> m = {10, 20, 30, 40, 50, 60};

	int x;

	do {
		cin >> x;
		auto low = m.lower_bound(x);
		auto up = m.upper_bound(x);

		if(low != m.end())
			cout << "lower_bound: " << *low << endl;
		else
			cout << "lower_bound: N/A" << endl;

		if(up != m.end())
			cout << "upper_bound: " << *up << endl;
		else
			cout << "upper_bound: N/A" << endl;
	} while(x != 0);

	return 0;

}
