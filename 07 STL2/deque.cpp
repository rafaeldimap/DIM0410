#include <deque>
#include <iostream>

using namespace std;

int main() {

	deque<int> filaDT; //fila duplamente terminada

	filaDT.push_back(3);
	filaDT.push_back(1);
	filaDT.push_back(9);
	filaDT.push_back(5);
	filaDT.push_front(2);
	filaDT.push_front(6);
	filaDT.push_front(4);
	filaDT.push_front(8);
	filaDT.pop_back();
	filaDT.pop_front();
	for(auto i : filaDT) {
		cout << i << " ";
	}
	cout << endl;
	for(int i = 0; i < filaDT.size(); i++)
		cout << "filaDT[" << i << "] = " << filaDT[i] << endl;

	return 0;

}
