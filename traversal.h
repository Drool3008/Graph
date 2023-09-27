//
// Created by DhawalP on 27/09/23.
//

#ifndef GRAPH_TRAVERSAL_H
#define GRAPH_TRAVERSAL_H

#endif //GRAPH_TRAVERSAL_H
#include<vector>
#include <queue>
#include <iostream>
using namespace std;
void dfs(vector<vector<int>>v,int sv,vector<bool>& visit)
{
    int n=v.size();
    std::cout<<sv<<" ";
    visit[sv]=true;
    for(int i =0;i<n;i++) if(v[sv][i]==1 && !visit[i]) dfs(v,i,visit);
}
void bfs(vector<vector<int>>v,int sv,vector<bool>&visit)
{
    int n = v.size();
    queue<int> q;
    visit[sv]= true;
    q.push(sv);
    while(!q.empty())
    {
        int t =q.front();
        for(int i = 0;i<n;i++) if(v[t][i]==1 && !visit[i]) q.push(i);
        q.pop();
        std::cout<<t<<" ";
    }
}