//Di-Graph Implementation using adjacency Matrix
#include<bits/stdc++.h>
using namespace std;
void generateGraph(int **G,int V,int e)
{
	int u,v;
	for (int i = 0; i < V; ++i)
	{
		for (int j = 0; j < V; ++j)
		{
			G[i][j]=0;
		}
	}
	for (int i = 0; i < e; ++i)
	{
		cin>>u>>v;    // u -> v  
		G[u][v]=1;
	}
}
void printGraph(int **G,int v)
{
	for (int i = 0; i < v; ++i)
	{
		cout<<i<<" -> ";
		for (int j = 0; j < v; ++j)
		{
			if(G[i][j]==1)
				cout<<j<<" ";
		}
		cout<<endl;
	}

}
int main()
{
	int v,e;	//v is number of vertex and e is number of edges
	cin>>v>>e;
	int **G;
	G=new int*[v];
	for (int i = 0; i < v; ++i)
	{
		G[i]=new int[v];
	}
	generateGraph(G,v,e);
	printGraph(G,v);
}
