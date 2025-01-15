#include "graph.h"
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

graph::graph(bool directed = false)
{
    this->directed = directed;
};

void graph::add_vertex(int v)
{
    adjList[v];
};

void graph::add_edge(int v, int u)
{
    adjList[v].push_back(u);
    if (directed == false) 
        adjList[u].push_back(v);

};

void graph::remove_vertex(int v)
{
    adjList.erase(v);

    for (auto& pair : adjList)
    {
        for (int edge : pair.second)
        {
            if (edge == v)
                pair.second.erase(find(pair.second.begin(), pair.second.end(), v));
        }
    }

};

void graph::remove_edge(int v, int u)
{
        auto& vList = adjList[v];
        vList.erase(remove(vList.begin(), vList.end(), u), vList.end());

        if (directed == false)
        {
            auto& uList = adjList[u];
            uList.erase(remove(uList.begin(), uList.end(), v), uList.end());
        }

};

int graph::check_degree(int v)
{
    return adjList[v].size();
};

void graph::display()
{
    for (auto& pair : adjList)
    {
        cout << pair.first << ": ";

        for (int edge : pair.second)
        {
            cout << edge << ", ";
        }

        cout << endl;
    }
};
