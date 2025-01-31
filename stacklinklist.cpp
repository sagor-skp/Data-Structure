#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *top=NULL;

void push(int data){
   struct node *newnode=new node;
    newnode->data=data;
    newnode->next=top;
    top=newnode;
}

int pop(){
    if(top==NULL){
        cout<<"Stack is underflow"<<endl;
    }
    else{
       struct node *tmp;
       tmp=top;
       top=top->next;
       int poped=tmp->data;
       return poped;
    }
    
}
void display(){
   struct node *ptr;
    ptr=top;
    if(top==NULL){
        cout<<"Stack is empty";
    }
    else{
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
}

int peak(){
     if(top==NULL){
        cout<<"Stack is empty";
    }
    else{
        return top->data;
    }
}
int main()
{
    //node *top=NULL;
    while(true){
         cout << "1. PUSH ELEMENT IN STACK :" << endl;
        cout << "2. POP ELEMENT IN STACK  :" << endl;
        cout << "3. PEEK ELEMENT IN STACK :" << endl;
        cout << "4. EXIT" << endl;
        cout << "ENTER CHOOSE AN OPTION : ";
        int ch;
        cin >> ch;

        switch(ch){
            case 1:
            cout<<" Enter push element data :";
            int x;
            cin>>x;
            push(x);
            system("CLS");
            display();
            break;
            case 2:
            int pp;
            pp=pop();
            system("CLS");
            cout<<"poped elemengt is:"<<pp<<endl;
            display();
            break;
            case 3:
            int pek;
            pek=peak();
            system("CLS");
            cout<<"peaked elemengt is:"<<pek<<endl;
            
            display();
            break;

            case 4:
            system("CLS");
            exit(0);

            default:
            cout<<"invalid coice "<<endl;
            
        }
    }
    return 0;
}