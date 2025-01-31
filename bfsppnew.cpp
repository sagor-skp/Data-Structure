#include <iostream>
using namespace std;

#define n 100
int queue1[n];
int front = -1;
int rear = -1;
void enqueue(){
   
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
    // if(front==-1&&rear==-1){
    //     cout<<"empty"<<endl;
    // }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}

// void display(){
//     int i;
//     if(front==-1&&rear==-1){
//         cout<<"empty"<<endl;
//     }
//     else{
//         for(i=front;i<rear+1;i++){
//             cout<<queue1[i]<<" ";
//         }
//         cout<<endl;
//     }
// }

void isempty(){
    if(front==-1&&rear==-1){
        return 1;
    }
    return 0;
    
}
int main()
{

}


#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int*arr;
};
int isfull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
void enque(struct queue *q,int val){
    if(isfull(q)){
        printf("this queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
       // printf("Enqued element is:%d\n",val);

    }
}
int dequeue(struct queue *q){
    int a=-1;
    if(isempty(q)){
        printf("This queue is empty\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int main(){
    struct queue q;//create queue
    q.size=400;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));

    // enque(&q,12);
    // printf("Dequeuing element %d\n", dequeue(&q));

    int node;
    int i=0;
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
    printf("%d ",i);
    visited[i]=1;
    enque(&q,i);
    while(!isempty(&q)){
        int node=dequeue(&q);
        for(int j=0;j<7;j++){
            if(a[node][j]==1&&visited[j]==0){
                printf("%d ",j);
                visited[j]=1;
                enque(&q,j);
            }

        }
    }


}