#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void BFS_Help(vector<vector<int>>graph,vector<bool>&visited,int source_vertex)
{
     queue<int>bfs_queue;
    vector<int>parent(graph.size(),-1);
    vector<int>depth(graph.size(),0);

    bfs_queue.push(source_vertex);
    visited[source_vertex]=true;
    while(!bfs_queue.empty())
    {
        int current_node=bfs_queue.front();
        bfs_queue.pop();
        for(int i=0;i<graph[current_node].size();i++)
        {
            int neighbour_node=graph[current_node][i];
            if(!visited[neighbour_node])
            {
                visited[neighbour_node]=true;
                bfs_queue.push(neighbour_node);
                parent[neighbour_node]=current_node;
                depth[neighbour_node]=depth[current_node]+1;
            }
        }
    }
}

int main()
{
    int V,E;
    cout<<"Enter the vertex : ";
    cin>>V;
    cout<<"Enter the source : ";
    cin>>E;
    vector<vector<int>>graph(V);
    for(int i=1;i<=E;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>=0 && x<V && y>=0&&y<V)
        {
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
    }
    vector<bool>visited(V,false);
    for(int i=0; i<V; i++)
    {
        if(!visited[i])
        {
            BFS_Help(graph,visited,i);
        }
    }


/*
6 5
0 1
0 2
1 3
2 4
4 5
*/

}
