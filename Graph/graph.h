#ifndef GRAPH
#define GRAPH
#include <vector>
#include <unordered_map>

using namespace std;

class graph
{
    private:
        unordered_map<int, vector<int>> adjList;
        bool directed;

    public:
        graph(bool directed);

        void add_vertex(int v);
        void add_edge(int v, int u);

        void remove_vertex(int v);
        void remove_edge(int v, int u);

        int check_degree(int v);

        void display();

};

#endif // GRAPH
