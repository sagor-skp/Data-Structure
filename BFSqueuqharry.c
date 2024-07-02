#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int* arr;//that use to dynamically allocate memory
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

void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("This queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val; 
    }
}

int dequeue(struct queue *q){
    int a=-1;
    if(isempty(q)){
        printf("Queue is empty");
    }
    else{
        q->f++;
        a=q->arr[q->f];

    }
    return a;
}
int main(){
    struct queue q;
    q.size=400;
    q.f=q.r=-1;//-1
    q.arr=(int*)malloc(q.size*sizeof(int));

   

    //enque
   int node;
   int i=0;//sourch node
   int visited[7]={0,0,0,0,0,0,0};
   int a[7][7]={
     {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
   };
   printf("%d",i);
   visited[i]=1;//mark sourch node visited
   enqueue(&q,i);//enque i for exploration
   while(!isempty(&q)){
      int node=dequeue(&q);
      // At each iteration, we will take out 
      //the first element out of the queue
      // using the utility function dequeue 
      //and suppose that element is u. Then,
      // we visit all the vertices which are 
      //directly connected to u and are already not visited.
      for(int j=0;j<7;j++){
        if(a[node][j]==1 && visited[j]==0){
            printf("%d",j);//which element not visited
            visited[j]=1;
            enqueue(&q,j);
            //Now, every time we find edges node & j 
            //connected (that is cell a[node][j] equal 
            //to 1) and the node j unvisited, we mark it
            // visited, and enqueue this newly visited node
            // j in the queue. We'll print these nodes while
            // we visit them to determine the BFS traversal 
            //order of the graph.
        }
      }
   }
    


}