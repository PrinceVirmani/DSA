#include <iostream>
#include <unordered_map>
#include <list>


using namespace std;

// new thing type declaration helpful for classes 
template <typename T>

// adj matrix and adj list to implement a graph

class  graph {
    public:
        unordered_map<T, list<T>> adj;

        void addEdge(T u, T v, bool direction){
            // direction = 0 -- undirected graph
            // direction = 1 -- directed graph

            // create an edge from u to v
            adj[u].push_back(v);

            // if direction == 0 then there will be an edge between v and u as well

            if(direction == 0){
                adj[v].push_back(u); 
            }

        }

        void printAdjList(){
            for(auto i:adj){
                cout << i.first << "->";
                 for(auto j:i.second){
                    cout << j << ", ";
                 }
                 cout << endl;
            }
        }

};

int main(){

    int n;
    cout << "Enter the number of nodes" << endl;
    cin >> n;

    int m;
    cout<< "Enter the number of edges " << endl;
    cin >> m;

    graph<int> g;

    for(int i=0; i<m; i++){
        int u, v;
        cin>> u >> v;

        // undirected graph 

        g.addEdge(u,v, 0);
         
    }

    // printing graph 

    g.printAdjList();

    return 0;
}