#include <iostream>
using namespace std;

#define n 6

int stack_arr[n];
int top = -1;

void push() {
    int x;
    cout << "Enter data: ";
    cin >> x;
    if (top == n - 1) {
        cout << "Stack overflow" << endl;
    } else {
        top++;
        stack_arr[top] = x;
    }
}

void pop() {
    if (top == -1) {
        cout << "Underflow stack" << endl;
    } else {
        int item = stack_arr[top];
        top--;
        cout << "Popped element: " << item << endl;
    }
}

void topelement(){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        cout<<stack_arr[top]<<endl;
    }
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        cout<<stack_arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int ch;
    do {
        cout << "1. Push in stack" << endl;
        cout << "2. Pop from stack" << endl;
        cout << "3. find top" << endl;
        cout<<"4.display element"<<endl;
        cout << "-1. Exit" << endl;
        
        cin >> ch;
        switch (ch) {
            case 1:
                push();
                display();
                break;
            case 2:
                pop();
                display();
                break;
            case 3:
                topelement();
                break;
            case 4:
                display();
                break;

            case -1:
                cout << "Exiting program" << endl;
                break;
            default:
                cout << "Invalid option. Please choose 1, 2, or -1." << endl;
        }
    } while (ch != -1);

    return 0;
}

