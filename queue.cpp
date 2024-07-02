#include <iostream>
using namespace std;

#define n 5
int queue1[n];
int front = -1;
int rear = -1;
void enqueue(){
    int x;
    cout<<"Enter value you want to enqueue"<<endl;
    cin>>x;
    if(rear==n-1){
        cout<<"overflow"<<endl;
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        queue1[rear]=x;
    }
    else{
        rear++;
        queue1[rear]=x;
    }
}

void dequeue(){
    if(front==-1&&rear==-1){
        cout<<"empty"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}

void display(){
    int i;
    if(front==-1&&rear==-1){
        cout<<"empty"<<endl;
    }
    else{
        for(i=front;i<rear+1;i++){
            cout<<queue1[i]<<" ";
        }
        cout<<endl;
    }
}

void peak(){
    if(front==-1&&rear==-1){
        cout<<"empty"<<endl;
    }
    else{
        cout<<queue1[front]<<endl;
    }
}
int main()
{
    int ch;
    do
    {
        cout << "1.for enqueue" << endl;
        cout << "2.for dequeue" << endl;
        cout << "3.show peak" << endl;
        cout << "4.DISPLAY ELEMENT" << endl;
        cout<<"-1 exict"<<endl;

        cin >> ch;
        switch (ch)
        {
        case 1:
            enqueue();
            display();
            break;
        case 2:
            dequeue();
            display();
            break;
        case 3:
            peak();
            break;
        case 4:
            display();
            break;
        case -1:
            cout << "Exictint program" << endl;
            break;
        default:
            cout << "invalid option" << endl;
        }

    } while (ch != -1);
}