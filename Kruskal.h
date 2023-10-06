//
// Created by DhawalP on 06/10/23.
//

#ifndef GRAPH_KRUSKAL_H
#define GRAPH_KRUSKAL_H

#endif //GRAPH_KRUSKAL_H
#include <iostream>
#include <vector>
using namespace std;
class DSU
{
    int* parent;
    int* rank;
public:
    DSU(int n)
    {
        parent = new int[n];
        rank = new int[n];
        for(int i=0;i<n;i++)
        {
            parent[i] = -1;
            rank[i] = 1;
        }
    }
    int find(int i)
    {
        if(parent[i] == -1) return i;
        parent[i] = find(parent[i]);
        return parent[i];
    }
    void unite(int x,int y)
    {
        int s1 = find(x);
        int s2 = find(y);
        if(s1!=s2)
        {
            if(rank[s1] < rank[s2]) parent[s1] =s2;
            else if(rank[s1] > rank[s2]) parent[s2] =s1;
            else
            {
                parent[s2] = s1;
                rank[s1]+=1;
            }
        }
    }

};
class Graph {
    vector<vector<int> > edgelist;
    int V;
public:
    Graph(int V) {this->V=V;}
    void addEdge(int x,int y,int w)
    {
        edgelist.push_back({w,x,y});
    }
    void kruskal_mst()
    {
        sort(edgelist.begin(),edgelist.end());
        DSU s(V);
        int a = 0;
        cout<<"Edges in constructed MST :\n";
        for(int i =0;i<edgelist.size();i++)
        {
            auto w = edgelist[i][0];
            auto x = edgelist[i][1];
            auto y = edgelist[i][2];
            if(s.find(x)!=s.find(y))
            {
                s.unite(x,y);
                a+=w;
                cout<<x<<" -- "<<y<<" == "<<w<<"\n";
            }
        }
        cout<<"\nMinimum cost is : "<<a<<"\n";
    }
};