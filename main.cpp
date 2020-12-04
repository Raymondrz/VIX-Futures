/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int T;
	while (cin >> T) {
		priority_queue<int>heap;
		int tot = 0;

		for (int i = 0; i < T; ++i) {
			char op;
			cin >> op;
            switch(op) {
            case "a":
                int value;
				cin >> value;
				heap.push(value);
				tot += value;
                break;
            case "p":
                tot -= heap.top();
				heap.pop();
                break;
            case "r":
                cout << tot << endl;

            }
		}

		heap = {};
		sum = 0;
	}

	return 0;
}