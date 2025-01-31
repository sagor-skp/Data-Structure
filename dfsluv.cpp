#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int>g[N];
bool visited[N];

void dfs(int vertex){
    //take action vertex after enterint the vertex
    cout<<vertex<<endl;
    visited[vertex]=true;
    for(int child:g[vertex]){
        //take action on child before entering the child
        //cout<<" per "<<vertex<<" child "<<child<<endl;
        if(visited[child]){
            continue;
        }
        dfs(child);
        //take action on child after exciding child node
    }

}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    cout<<"DFS traversal: ";
    dfs(1);//vertex
    return 0;
}