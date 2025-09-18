#include <iostream>
using namespace std;
#define SIZE 5

class Stack {
    int arr[SIZE];
    int top;
public:
    Stack() { top = -1; }

    void push(int value) {
        if (isFull()) cout << "Stack Overflow!\n";
        else {
            arr[++top] = value;
            cout << value << " pushed.\n";
        }
    }

    void pop() {
        if (isEmpty()) cout << "Stack Underflow!\n";
        else cout << arr[top--] << " popped.\n";
    }

    void peek() {
        if (isEmpty()) cout << "Stack is Empty!\n";
        else cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if (isEmpty()) cout << "Stack is Empty!\n";
        else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == SIZE - 1; }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Check Empty\n6. Check Full\n7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> value; s.push(value); break;
            case 2: s.pop(); break;
            case 3: s.peek(); break;
            case 4: s.display(); break;
            case 5: cout << (s.isEmpty() ? "Stack is Empty\n" : "Stack is not Empty\n"); break;
            case 6: cout << (s.isFull() ? "Stack is Full\n" : "Stack is not Full\n"); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid
