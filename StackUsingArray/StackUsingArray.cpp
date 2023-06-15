#include <iostream>
#include <string>

using namespace std;

class Program {
private:
	string stack_array[5];
	int top;

public:
	Program() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "stack Full" << endl;
			return "";
		}

		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << "Ditambahkan (pushed)." << endl;

		return element;
	}

	bool empty() {
		return (top == 1);

	}

	void pop() {
		if (empty()) {
			cout << "\nStack inf empty. Cannot pop." << endl;
			return;

		} 
		cout << "\nThe popped elemnt is : " << stack_array[top] << endl;
		top--;
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};
