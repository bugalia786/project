//bfs
#include <iostream>
#include <queue>
using namespace std;

int A[5][5]={{0,0,0,0,0},
             {0,0,1,1,0},
             {0,1,0,1,0},
             {0,1,1,0,1},
             {0,0,0,1,0}};

int visited[5]={0};

void bfs(int i){
    queue <int>q;
    int u;
    cout<<i<<"  ";
    visited[i]=1;
    q.push(i);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=1;i<5;i++){
            if(A[u][i]==1 && visited[i]==0){
                cout<<i<<"  ";
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

int main() {
    bfs(1);
	return 0;
}
