#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    graph g(false);

    g.add_vertex(1);
    g.add_vertex(5);
    g.add_vertex(2);
    g.add_vertex(3);

    g.add_edge(3,5);
    g.add_edge(2,5);   
    g.add_edge(1,5);
    g.add_edge(1,2);

    g.display();
    cout << endl;

    g.remove_edge(5,1);
    g.remove_edge(5,2);
    

    g.display();

    g.add_edge(3,5);
    g.add_edge(2,5);   
    g.add_edge(1,5);

    g.display();

    cout << g.check_degree(5) << endl;

    return 0;
}