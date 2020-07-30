//dfs
#include <iostream>
#include <queue>
using namespace std;

int A[5][5]={{0,0,0,0,0},
             {0,0,1,1,0},
             {0,1,0,1,0},
             {0,1,1,0,1},
             {0,0,0,1,0}};

int visited[5]={0};

void dfs(int i){
    if(visited[i]==0){
        cout<<i<<"  "; 
        visited[i]=1;
    }
    for(int j=1;j<5;j++){
        if(A[i][j]==1 && visited[j]==0){
            dfs(j);
        }
    }
}

int main() {
    dfs(3);
	return 0;
}
