#include <iostream>
//#include <header>
#include <list>
using namespace std;

class SafeMap
{
public:
    int V;
    std::list<int> *adj;
    SafeMap(int V);
    void addSafeRoute(int v, int w);
    int isReachable(int s, int d);

};

SafeMap::SafeMap(int V)
{
    cout << "SafeMap:" << V <<endl;

    this->V = V;
    adj = new list<int>[V];
}

void SafeMap::addSafeRoute(int v, int w)
{
    cout << "addSafeRoute.v:" << v << ", w:" << w <<endl;

    adj[v].push_back(w); // Add w to v's list.
    

}

// Function to check if S is safely reachable from D
int SafeMap::isReachable(int s, int d)
{
    cout << endl << "isReachable s:" << s << ", d:" << d <<endl;

    for (std::list<int>::iterator it = adj->begin(); it != adj->end(); it++)
        std::cout << *it  <<endl;

     // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // it will be used to get all adjacent vertices of a vertex accesible thru
    // a safe route
    list<int>::iterator i;

   //Write your code below this line    
    for (int i = 0; i < V; i++){
         cout <<  i << "=" << visited[i] << endl;
   
    }
    
    std::cout << "mylist stores " << adj[0].size() << " numbers.\n";

    return 0;
   
    
}


int main(){
   
    cout << "Inicio del programa" << endl;

    SafeMap g(4);
    g.addSafeRoute(0, 1);
    g.addSafeRoute(0, 2);
    g.addSafeRoute(1, 2);
    g.addSafeRoute(2, 0);
    g.addSafeRoute(2, 3);
  
    g.isReachable(0,1);
    return 0;
    
}
