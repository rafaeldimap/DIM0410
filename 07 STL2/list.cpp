#include <list>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	list<int> l;
	l.push_back(5);
	l.push_back(7);
	l.push_front(3);
	l.push_front(1);
	list<int>::iterator it;
	it = l.begin();
	it++;
	l.erase(it);
	for(list<int>::iterator i = l.begin(); i != l.end(); i++)
		cout << *i << endl;

	return 0;

}
