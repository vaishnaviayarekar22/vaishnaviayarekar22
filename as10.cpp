#include <iostream>
#include <string>
#define MAX 5
using namespace std;

template<typename T>
class Mystack 
{
private:
    T  new data[MAX];
    int top;
public:
    Mystack() 
    {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX - 1);
    }

    void push(T item) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << item << endl;
            return;
        }
        data[++top] = item;
        cout << "Pushed " << item << " successfully." << endl;
    }

    T pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Nothing to pop." << endl;
            return T();
        }
        T item = data[top--];
        cout << "Popped " << item << " successfully." << endl;
        return item;
    }
    ~Mystack()
    { 
     delete data[];
    }
};

int main() {
    int choice;
    Mystack<string> ss;
    Mystack<int> si;

do 
{
		
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

switch (choice) 
{
case 1: 
{
                int stackType;
                cout << "Enter which stack you want (1 for string, 2 for int): ";
                cin >> stackType;

                if (stackType == 1) {
                    string val;
                    cout << "Enter string to push: ";
                    cin >> val;
                    ss.push(val);
                } else if (stackType == 2) {
                    int val;
                    cout << "Enter integer to push: ";
                    cin >> val;
                    si.push(val);
                } else {
                    cout << "Invalid stack type!" << endl;
                }
                break;
}

case 2:
{
	int stackType;
	cout << "Enter which stack you want to pop from (1 for string, 2 for int): ";
		        cin >> stackType;

		        if (stackType == 1)
		            ss.pop();
		        else if (stackType == 2)
		            si.pop();
		        else
		            cout << "Invalid stack type!" << endl;
		        break;
}

case 3:
         cout << "Exiting program..." << endl;
                      break;

default:
      cout << "Invalid choice!" << endl;
}

} while (choice != 3);

    
}

