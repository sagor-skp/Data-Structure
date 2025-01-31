 #include<stdio.h>
#include<stdlib.h>
 int visited[7]={0,0,0,0,0,0,0};
 int a[7][7]={
        //j=colum
        {0,1,1,1,0,0,0},//node=row--i
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
   };

   void dfs(i){
    printf("%d ",i);
    visited[i]=1;
    for(int j=0;j<7;j++){
        if(a[i][j]==1&&!visited[j]){
            dfs(j);
        }
    }
   }

   int main(){
    dfs(4);
    return 0;
   }