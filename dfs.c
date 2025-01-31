 #include<stdio.h>
#include<stdlib.h>
 int visited[7]={0,0,0,0,0,0,0};
 int a[7][7]={
        //j=colum
        {0,1,1,1,0,0,0},//node=row
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
   };
   void dfs(i){//i is node
      printf(" %d ",i);
       visited[i]=1;
      for(int j=0;j<7;j++){
          if(a[i][j]==1 && !visited[j]){//a[i][j]==1 connected edege
            dfs(j);//j connect na tai ai node call hobe
          }

      }
   }

int main()
{
    dfs(4);//node for search
    return 0;
}