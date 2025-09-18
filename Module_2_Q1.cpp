#include <iostream>
using namespace std;

#define SIZE 5   

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;  
    }

    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop(); 

    return 0;
}
