#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void DFS_Traverse(vector<vector<int>> graph,
                  vector<bool> &visited,
                  int source)
{
    stack<int> st;

    st.push(source);
    visited[source] = true;

    while(!st.empty())
    {
        int current = st.top();
        st.pop();

        for(int i=0; i<graph[current].size(); i++)
        {
            int neighbour = graph[current][i];

            if(!visited[neighbour])
            {
                st.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
}

int main()
{
    int V,E;

    cout<<"Enter total Vertex: ";
    cin>>V;

    cout<<"Enter total edges: ";
    cin>>E;

    vector<vector<int>> graph(V);

    for(int i=1; i<=E; i++)
    {
        int x,y;

        cout<<"Enter edge "<<i<<": ";
        cin>>x>>y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    vector<bool> visited(V,false);

    int islandCount = 0;

    for(int i=0; i<V; i++)
    {
        if(!visited[i])
        {
            islandCount++;

            DFS_Traverse(graph, visited, i);
        }
    }

    cout<<"\nTotal Connected Components (Islands): "
        << islandCount << endl;

    return 0;
}
