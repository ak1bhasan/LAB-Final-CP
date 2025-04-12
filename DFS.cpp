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

    for(int i=0; i<=node; i++){
        visit[i]=false;
    }

    stack<int> s;  // DFS uses a stack instead of a queue
    s.push(start_node);
    visit[start_node] = true;

    cout << "DFS result: " << endl;

    while(!s.empty())
    {
        int top = s.top();
        s.pop();

        cout << top << endl;
        for(int i=0; i<adj[top].size(); i++)
        {
            if(!visit[adj[top][i]])
            {
                visit[adj[top][i]]=true;
                s.push(adj[top][i]);
            }
        }
    }
}
*/









/**
#include <bits/stdc++.h>
using namespace std;

int main() {
    int node, edge, start_node;

    cout << "Enter number of nodes: ";
    cin >> node;

    cout << "Enter number of edges: ";
    cin >> edge;

    vector<vector<int>> adj(node + 1);
    vector<bool> visit(node + 1, false);

    cout << "Enter the edges:" << endl;
    for (int i = 0; i < edge; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); // Since the graph is undirected
    }

    // Sort adjacency lists so smaller nodes are visited first
    for (int i = 1; i <= node; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    cout << "Enter the starting node: ";
    cin >> start_node;

    stack<int> s;
    s.push(start_node);
    visit[start_node] = true;

    cout << "DFS Result: " << endl;

    while (!s.empty()) {
        int current = s.top();
        s.pop();
        cout << current << endl;

        // Reverse iterate to ensure smallest node is visited first
        for (auto it = adj[current].rbegin(); it != adj[current].rend(); ++it) {
            if (!visit[*it]) {
                visit[*it] = true;
                s.push(*it);
            }
        }
    }
    return 0;
}
**/








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
    vector<bool> visit(node+1, false);

    cout << "Enter the edges: " << endl;

    for( int i = 0; i < edge; i++ ) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for( int i = 1; i <= node; i++ ) {
        sort( adj[i].begin(), adj[i].end() );
    }

    cout << "Enter the start node: ";
    cin >> start_node;

    stack<int> s;
    s.push(start_node);

    visit[start_node] = true;
    cout << "DFS Result:" << endl;

    while( !s.empty() ) {
        int current = s.top();
        s.pop();
        cout << current << endl;
        for( auto it = adj[current].rbegin(); it != adj[current].rend(); it++ ) {
            if( !visit[*it] ) {
                visit[*it] = true;
                s.push(*it);
            }
        }
    }
}
