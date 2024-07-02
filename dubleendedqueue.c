#include<stdio.h>
#define n 5
int deque[n];
int f=-1;
int r=-1;

void enquefront(int x){//efront mane age add kora
    if((f==0&&r==n-1)&& f==r+1){
        printf("queue is full ");
    }
    else if(f==-1 && r==-1){
        f=r=0;
        deque[f]=x;
    }
    else if(f==0){
        f=n-1;
        deque[f]=x;
    }
    else{
        f--;
         deque[f]=x;
    }
}

void enquerear(int x){//erear mane pore add kora
    if((f==0&&r==n-1)&& f==r+1){
        printf("queue is full");
    }
    else if(f==-1 && r==-1){
        f=r=0;
        deque[r]=x;
    }
    else if(r==n-1){
        r=0;
        deque[r]=x;
    }
    else{
        r++;
        deque[r]=x;
    }
}

void display(){
    int i=f;
    if(f==-1 && r==-1){
       printf("Queue is empty");
    }
    else{
       while(i!=r){
         printf("%d ",deque[i]);
         i=(i+1)%n;
       } 
       printf("%d ",deque[r]);
    }
}

void gerfront(){
    if(f==-1 && r==-1){
       printf("Queue is empty");
    } 
    else{
        printf("%d",deque[f]);
    }
}

void gerfrear(){
    if(f==-1 && r==-1){
       printf("Queue is empty");
    } 
    else{
        printf("%d",deque[r]);
    }
}

void dequefront(){
    if(f==-1 && r==-1){
       printf("Queue is empty");
    } 
    else if(f==r){
        f=r=-1;
    }
    else if(f==n-1){
        printf("The deque element is %d\n",deque[f]);
        f=0;
    }
    else{
        printf("The deque element is %d\n",deque[f]);
        f++;
    }
}

void dequerear(){
    if(f==-1 && r==-1){
       printf("Queue is empty");
    }
    else if(f==r){
        f=r=-1;
    }
    else if(r==0){
         //printf("The deque element is %d",deque[r]);
        r=n-1;
    }
    else{
        r--;
    }
}

int main(){
    enquefront(2);
    enquefront(5);
    enquerear(-1);
    enquerear(0);
    enquefront(7);
    // enquefront(5);
    display();
    printf("\n");
    dequefront();
    dequerear();
     display();
    printf("\n");
}