#include <iostream>
using namespace std;
int stack[50];
int top = -1;
// Function to push an element onto the stack
void push(int value) {
        top++;
        stack[top] = value;
        cout << value << " pushed to stack." << endl;
}
// Function to pop an element from the stack
void pop() {
        cout << stack[top] << " popped from stack." << endl;
        top--;
}
// Function to peek the top element of the stack
void peek() {
   cout << "Top element is " << stack[top] << endl;
}
// Function to display all elements of the stack
void display() {
    cout << "Stack elements are: ";
    for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
    }
    cout << endl;
}
int main() {
    int choice, value;
    do {
        // Display menu
        cout << "\nStack Operations Menu: \n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}

