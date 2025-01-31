#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;

void enque(int data){
    struct node *newnode=new node;
    if(newnode==NULL){
        cout<<"Queue is full";
    }
    else{
        newnode->data=data;
        newnode->next=NULL;
        if(front==NULL&& rear==NULL){
            front=rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
    }
}
int dequeue(){
    int val=-1;
    struct node *temp;
    temp=front;

    if(front==NULL){
        cout<<"Queue is empty";
    }
    else{
        front=front->next;
        val=temp->data;
        delete(temp);
        //c free(temp);
    }
    return val;
}

void display(){
    struct node *ptr;
    if(front==NULL&& rear==NULL){
            cout<<"Queue is empty";
    }
    else{
        ptr=front;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;

    }
    
}


int main(){
    while(true){
        cout<<"1 to enque data "<<endl;
        cout<<"2 deque data in the queue"<<endl;
        cout<<"3 exit"<<endl;
        cout<<"Enter coice :"<<endl;
        int ch;
        cin>>ch;
        switch(ch){
            case 1:
            {
                cout<<" enter data :";
                int x;
                cin>>x;
                system("CLS");
                enque(x);
                display();
                break;
            }
            case 2:
            {
                int xx;
                xx=dequeue();
               // system("CLS");
                cout<<"dequed element:"<<xx<<endl;
                display();
                break;

            }
            case 3:
            { 
                 while(front!=nullptr){
                dequeue();
            }
            exit(0);

            }
            default:{
                cout<<"Invalid coice!"<<endl;
                break;
            }
           
        }

    }
}