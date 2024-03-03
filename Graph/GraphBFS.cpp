#include<iostream>
#include<vector>
#include<queue>
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
    cout<<endl;
    queue<int>Q;
    vector<int>status(V,0);
    Q.push(0);
    status[0]=1;
    while(Q.size()!=0)
    {
        int x = Q.front();
        cout<<x<<",";
        Q.pop();
        for(int k=0; k<Adj[x].size(); k++)
        {
            if(status[Adj[x][k]]==0)
            {
                status[Adj[x][k]]=1;
                Q.push(Adj[x][k]);
            }
        }
    }
    return 0;
}