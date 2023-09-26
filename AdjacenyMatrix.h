//
// Created by DhawalP on 20/09/23.
//

#ifndef GRAPH_ADJACENYMATRIX_H
#define GRAPH_ADJACENYMATRIX_H

#endif //GRAPH_ADJACENYMATRIX_H
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> matrix(int n,int e)
{
    vector<vector<int>> m(n,vector<int>(n,0));
    for(int i = 0;i<e;i++)
    {
        int fv,sv;
        cin>>fv>>sv;
        m[fv][sv]=1;
        m[sv][fv]=1;
    }
    return m;
}