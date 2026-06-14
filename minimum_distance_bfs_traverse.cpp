#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

void BFS_MinDistance(vector<vector<int>> graph, vector<bool> &visited, int source, int destination)
{
    queue<int> queue_l;

    vector<int> distance(graph.size(), -1);
    vector<int> parent(graph.size(), -1);

    queue_l.push(source);
    visited[source] = true;
    distance[source] = 0;

    while(!queue_l.empty())
    {
        int current = queue_l.front();
        queue_l.pop();

        for(int i = 0; i < graph[current].size(); i++)
        {
            int neighbour = graph[current][i];

            if(!visited[neighbour])
            {
                queue_l.push(neighbour);
                visited[neighbour] = true;

                distance[neighbour] = distance[current] + 1;
                parent[neighbour] = current;
            }
        }
    }

    for(int i=0; i<distance.size(); i++)
    {
        cout<<distance[i]<<" ";
    }
    cout<<endl;

    stack<int> st;
    st.push(destination);

    int cur = destination;
    while(parent[cur] != -1)
    {
        st.push(parent[cur]);
        cur = parent[cur];
    }

    cout<<"Shortest path between "<<source<<" and "<<destination<<" is : ";
    while( !st.empty())
    {
        int temp = st.top();
        st.pop();
        cout<<temp<<" -> ";
    }

}

int main()
{
    int V, E;

    cout << "Enter total Vertex: ";
    cin >> V;

    cout << "Enter total edges: ";
    cin >> E;

    vector<vector<int>> graph(V);

    for(int i = 1; i <= E; i++)
    {
        int x, y;
        cout << "Enter edge " << i << " : ";
        cin >> x >> y;

        if(x < V && x >= 0 && y < V && y >= 0)
        {
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
    }

    cout << "Graph Adjacency List is:" << endl;

    for(int i = 0; i < V; i++)
    {
        cout << i << " : ";
        for(int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << "->";
        }
        cout << endl;
    }

    vector<bool> visited(V, false);

    int source, destination;

    cout << "Enter source vertex: ";
    cin >> source;

    cout << "Enter destination vertex: ";
    cin >> destination;
     for(int i=0;i<V;i++)
    {
        cout<<i<<" ";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<"->";
        }
        cout<<endl;
    }
    cout<<endl;

    BFS_MinDistance(graph, visited, source, destination);

    return 0;
}
