//bfs
/**
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge, start_node;
    cout << "Enter number of nodes: ";
    cin >> node;
    cout << "Enter number of edges: ";
    cin >> edge;

    bool visit[node+1];
    vector<int> adj[node+1];  //array of vector

    cout << "Enter the edges: " << endl;

    for(int i=0; i<edge; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cout << "Enter the starting node: ";
    cin >> start_node;

    for(int i=1; i<=node; i++)
    {
        visit[i]=false;
    }

    queue<int>q;
    q.push(start_node);
    visit[start_node] = true;

    cout << "BFS result: " << endl;
    while(!q.empty())
    {
        int fr = q.front();
        q.pop();

        cout << fr << endl;
        for(int i=0; i<adj[fr].size(); i++)
        {
            if(!visit[adj[fr][i]])
            {
                visit[adj[fr][i]]=true;
                q.push(adj[fr][i]);
            }
        }
    }
}
**/











/**




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge, start_node;

    cout << "Enter number of nodes: ";
    cin >> node;

    cout << "Enter number of edges: ";
    cin >> edge;

    vector<vector<int>> adj(node+1);
    vector<bool> visit(node+1);

    cout << "Number the egdes:" << endl;

    for( int i = 0; i < edge; i++ ) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back( b );
        adj[b].push_back( a );
    }

    cout << "Enter the starting node: ";
    cin >> start_node;

    queue<int> q;
    q.push(start_node);

    visit[start_node] = true;
    cout << "BFS Result: " << endl;

    while( !q.empty() ) {
        int current = q.front();
        q.pop();
        cout << current << endl;

        for( auto neighbor : adj[current] ) {
            if( !visit[neighbor] ) {
                visit[neighbor] = true;
                q.push( neighbor );
            }
        }
    }
}



**/











#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge, start_node;

    cout << "Enter the number of nodes: ";
    cin >> node;

    cout << "Enter the number of edges: ";
    cin >> edge;

    vector<vector<int>> adj(node+1);
    vector<bool> visit(node+1, false);

    cout << "Enter the edges: " << endl;

    for( int i = 0; i < edge; i++ )
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cout << "Enter the starting node: ";
    cin >> start_node;

    queue<int> q;
    q.push(start_node);

    visit[start_node] = true;

    while( !q.empty() )
    {
        int current = q.front();
        q.pop();
        cout << current << endl;
        for( auto neighbor : adj[current] ) {
            if( !visit[neighbor] ) {
                visit[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

