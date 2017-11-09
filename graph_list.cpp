//Di-Graph Implementation using adjacency lists
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int key;
	node* next;
};
struct graph
{
	node *vertex;
};
void generateGraph(graph &G,int V,int e)
{
	for (int i = 0; i < V; ++i)
	{
		G.vertex[i].key=i;
	}
	int u,v;
	for (int i = 0; i < e; ++i)
	{
		cin>>u>>v;    // u -> v  
		node *temp;
		temp=new node;
		temp->key=v;
		temp->next=G.vertex[u].next;
		G.vertex[u].next=temp;
	}
}
void printGraph(graph &G,int v)
{
	node *t;
	for (int i = 0; i < v; ++i)
	{
		cout<<i<<" -> ";
		t=G.vertex[i].next;
		while(t!=NULL)
		{
			cout<<t->key<<" ";
			t=t->next;
		}
		cout<<endl;
	}
}
int main()
{
	int v,e;	//v is number of vertex and e is number of edges
	cin>>v>>e;
	graph G;
	G.vertex=new node[v];
	generateGraph(G,v,e);
	printGraph(G,v);
}