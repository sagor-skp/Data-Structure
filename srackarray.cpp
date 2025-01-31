#include <bits/stdc++.h>
using namespace std;
#define n 6
int stack_ar[n];
int top = -1;

void push(){
    int x;
    cout << "Enter data: ";
    cin>>x;
    if(top==n-1){
        cout << "Stack overflow" << endl;
    }
    else {
        top++;
        stack_ar[top]=x;
    }
}
int pop(){
    if(top==-1){
         cout << "Stack empty" << endl;
    }
    else{
        int temp=stack_ar[top];
        top--;
        return temp;
        //cout << "Popped element: " << temp << endl;
    }
}

 void tope(){
    if(top==-1){
        cout << "Stack empty" << endl;
    }
    else{
        cout<<stack_ar[top];
    }

}
void display(){
    int i;
    for(int i=top;i>=0;i--){
        cout<<stack_ar[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int ch;
    do
    {
        cout << "1. Push in stack" << endl;
        cout << "2. Pop from stack" << endl;
        cout << "3. find top" << endl;
        cout << "4.display element" << endl;
        cout << "-1. Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            system("CLS");
            display();
            break;
        case 2:
            int x;
            x=pop();
            system("CLS");
            cout << "Popped element: " << x << endl;
            display();
            break;
        case 3:
            tope();
            break;
        case 4:
                display();
                break;

        case -1:
            cout << "Exceting program..";
            break;
        }
        
            
    }while (ch != -1);
    return 0;
}
// #include<bits/stdc++.h>
// #define MAX 1000
// using namespace std;
// int arr[MAX];
// int top=-1;
// //push element in stack
// void push(int data)
// {
//     if(top>=(MAX-1))
//     {
//         cout<<"Stack overflow";
//         return;
//     }
//     else
//     {
//         arr[++top]=data;
//     }
// }
// //pop element in stack
// int pop()
// {
//     if(top<0)
//     {
//         cout<<"Stack Underflow "<<endl;
//         return -1;
//     }
//     else
//     {
//         int poped=arr[top--];
//         return poped;
//     }
// }
// //display stack;
// void display()
// {
//   if(top<0)
//   {
//     cout<<"Stack is empty "<<endl;
//     return;
//   }  
//   else
//   {
//      cout<<"Stack is :";
//     for(int i=top;i>=0;--i)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//   }
// }
//Find peek element
// int peek()
// {
//   if(top<0)
//     {
//         cout<<"Stack Underflow "<<endl;
//         return -1;
//     }
//     else
//     {
//         int p=arr[top];
//         return p;
//     }  
// }
// int main()
// {
//     while(true)
//     {
//         cout<<"1. PUSH ELEMENT IN STACK :"<<endl;
//         cout<<"2. POP ELEMENT IN STACK  :"<<endl;
//         cout<<"3. PEEK ELEMENT IN STACK :"<<endl;
//         cout<<"4. EXIT : "<<endl;
//         cout<<"ENTER CHOOSE A OPTION : ";
//         int ch;
//         cin>>ch;
//         switch (ch)
//         {
//         case 1:
//             cout<<"Enter push element data : ";
//             int x;
//             cin>>x;
//             push(x);
//             system("CLS");
//             display();
//             break;
//         case 2:
//           int pp;
//           pp=pop();
//           system("CLS");
//           cout<<"Pop Element is "<<pp<<endl;
//           display();
//           break;
//         case 3:
//            int pek;
//            pek=peek();
//            system("CLS");
//            cout<<"Peek Element is "<<pek<<endl;
//            display();
//            break;
//         case 4:
//         exit(1);
//            default:
//            break;
//         }

//     }



//     return 0;
// }