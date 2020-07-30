#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first=NULL;
void create(int *A,int n){
    Node *last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    Node *t;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t; 
    }
}
void Insert (int x){
    Node *t,*p,*q=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;
    p=first;
    if(x<p->data){
        t->next=first;
        first=t;
        
    }else{
        while(p!=NULL && x<=p->data){
            q=p;
            p=p->next;
        }
        if(q->data!=x){ 
            if(p==NULL){
                t->next=NULL;
                q->next=t; 
            }else{ 
                t->next=p;
                q->next=t; 
            }
        }
    }
}
void display(){
    Node *p=first;
    while(p!=NULL){
        cout<<p->data<<"  ";
        p=p->next;
    }
    cout<<endl;
}

int main() {
	 int A[8]={3,4,6,8,10,13,15,19};
	 create(A,8);
	 display();
	 //Insert(first,7);
	 Insert( 7);
	 display();
	return 0;
}
