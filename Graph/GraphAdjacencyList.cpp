#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i, a, b, j, V, E;
    cout<<"Enter the number of vertices: ";
    cin>>V;
    cout<<"Enter the number of edges: ";
    cin>>E;
    vector<int>Adj[V];
    for(i=1; i<=E; i++)
    {
        cout<<"Enter the end-points of edge "<<i<<": ";
        cin>>a>>b;
        Adj[a].push_back(b);
        Adj[b].push_back(a);
    }
    for(i=0; i<V; i++)
    {
        cout<<i<<":";
        for(j=0; j<Adj[i].size(); j++)
        {
            cout<<Adj[i][j]<<",";
        }
        cout<<endl;
    }
    return 0;
}