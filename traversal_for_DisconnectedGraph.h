//
// Created by DhawalP on 30/09/23.
//

#ifndef GRAPH_TRAVERSAL_FOR_DISCONNECTEDGRAPH_H
#define GRAPH_TRAVERSAL_FOR_DISCONNECTEDGRAPH_H

#endif //GRAPH_TRAVERSAL_FOR_DISCONNECTEDGRAPH_H
#include<vector>
#include <iostream>
#include "AdjacenyMatrix.h"
void printDFS(vector<vector<int>> m , int sv,vector<bool>&v)
{
    std::cout<<sv<<" ";
    v[sv] = true;
    for(int i =0;i<m.size();i++) if(m[sv][i]==1 && !v[i]) printDFS(m,i,v);
}
void DFS(vector<vector<int>> m)
{
    int n =m.size();
    vector<bool>v(n,false);
    for(int j=0;j<v.size();j++) if(!v[j]) printDFS(m,j,v);
}
void printBFS(vector<vector<int>> m,int sv,vector<bool>&visit)
{
    int n = m.size();
    queue<int> q;
    visit[sv]=true;
    q.push(sv);
    while(!q.empty())
    {
        int  t =q.front();
        q.pop();
        std::cout<<t<<" ";
        for(int i = 0;i<n;i++)
        {
            if(m[t][i]==1 && !visit[i])
            {
                q.push(i);
                visit[i] = true;
            }
        }
    }
}
void BFS(vector<vector<int>> m)
{
    vector<bool> visit(m.size(),false);
    for(int i=0;i<m.size();i++) if(!visit[i]) printBFS(m,i,visit);
}