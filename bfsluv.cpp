#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>graph[N];
int vis[N];
int level[N];

void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while(!q.empty()){
        int current_vertex=q.front();
        q.pop();
        cout<<current_vertex<<" ";
        for(int child:graph[current_vertex]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
               // level[child]=level[current_vertex]+1;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bfs(1);
    // for(int i=1;i<=n;i++){
    //     cout<<i<<" : "<<level[i]<<endl;
    // }
}