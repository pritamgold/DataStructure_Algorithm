#include<bits/stdc++.h>
#include<list>
using namespace std;

class Graph
{
    int V;
    list <int> *adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void bfs(int s);
};

Graph::Graph(int V)
{
    this->V=V;
    adj = new list<int> [V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::bfs(int s)
{
    bool *visited = new bool[V];
    for(int i=0; i<V; i++) visited[i]=false;
    list<int> queue;

    visited[s]=true;
    queue.push_back(s);

    while(!queue.empty()){
        s=queue.front();
        cout<< s << " ";
        queue.pop_front();

        list<int>:: iterator it;
        for(it=adj[s].begin(); it!=adj[s].end(); ++it){
            if(visited[*it]==false){
                visited[*it]=true;
                queue.push_back(*it);
            }
        }
    }
    cout<< endl;
}

int main()
{
    /*Graph g(6);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,5);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(4,0);
    g.addEdge(5,0);*/
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.bfs(2);
    return 0;
}
