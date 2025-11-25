#include<iostream>
using namespace std;
#define MAX 20
int main(){
int n,start;
int adj[MAX][MAX];
int visited[MAX];
int stack[MAX];
int top = -1;
cout<<"Enter no.of nodes:- ";
cin>>n;
cout<<"Enter adjacency matrix:- ";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>adj[i][j];
    }
}
cout<<"Enter the starting node: ";
char s;
cin>>s;
start=s-'A';
for(int i= 0;i<n; i++)
    visited[i]=0;
if(top==-1)
    top =0;
stack[++top]= start;
visited[start]=1;
cout<<"DFS traversal: ";
while (top!= -1)
{
    int node = stack[top--];
        cout << char(node + 'A') << " ";


        for (int i = n - 1; i >= 0; i--) {
            if (adj[node][i] == 1 && !visited[i]) {
                stack[++top] = i;
                visited[i] = 1;
            }
        }

}
return 0;
}
