//prim
#include <iostream> 
using namespace std;
#define I 32767

int A[8][8]={{I,I,I,I,I,I,I,I},
             {I,I,25,I,I,I,5,I},
             {I,25,I,12,I,I,I,6},
             {I,I,12,I,8,I,I,I},
             {I,I,I,8,I,16,I,14},
             {I,I,I,I,16,I,20,18},
             {I,5,I,I,I,20,I,I},
             {I,I,6,I,14,18,I,I}};

int near[8]={I,I,I,I,I,I,I,I};
int t[2][6];

int main() {
    int u,v,n=8,min=I,k;
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            if(min>A[i][j]){
                min=A[i][j];
                u=i;
                v=j;
            }
        }
    }
    //cout<<"min "<<min<<endl;
    //cout<<v<<endl;
    t[0][0]=u;
    t[1][0]=v;
    near[u]=near[v]=0;
    for(int i=1;i<8;i++){
        if(near[i]!=0){
            if(A[i][u]<A[i][v]){
                near[i]=u;
            }else{
                near[i]=v;
            }
        }
    }
    for(int i=1;i<6;i++){
        min=I;
        for(int j=1;j<8;j++){
            if(near[j]!=0 && A[j][near[j]]<min){
                min=A[j][near[j]];
                k=j;
            }
        }
        t[0][i]=k;
        t[1][i]=near[k];
        near[k]=0;
        for(int j=1;j<8;j++){
            if(near[j]!=0 && A[j][k]<A[j][near[j]]){
                near[j]=k;
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<t[0][i]<<"   "<<t[1][i]<<endl;
    }
	return 0;
}
