//
// Created by DhawalP on 06/10/23.
//

#ifndef GRAPH_COMMUTABLE_ISLAND_H
#define GRAPH_COMMUTABLE_ISLAND_H

#endif //GRAPH_COMMUTABLE_ISLAND_H
#include <vector>
using namespace std;
void makeset(int N,int parent[])
{
    for(int i =1;i<=N;i++) parent[i] = i;
}
int find(int i,int parent[])
{
    while(parent[i]!= i) i=parent[i];
    return i;
}
bool cmp(vector<int>const &a ,vector<int>const &b) {
    return a[2]<b[2];
}
int todo(int A, vector<vector<int> > &B) {
    sort(B.begin(),B.end(),cmp);
    int parent[A+1];
    makeset(A,parent);
    int c = 0;
    for(int i =0;i<B.size();i++)
    {
        int s = B[i][0];
        int d = B[i][1];
        int sR = find(s,parent);
        int dR = find(d,parent);
        if(sR!=dR)
        {
            c+=B[i][2];
            parent[sR] = dR;
        }
        return c;
    }
}

