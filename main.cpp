#include "traversal.h"
#include "traversal_for_DisconnectedGraph.h"
#include <map>
#define co std::cout
#define ci std::cin
#define nl "\n"
using namespace std;
int main()
{
    int n,e;
    co<<nl<<"Enter Number of vertex and edges : "<<nl;
    ci>>n>>e;
    auto v = matrix(n,e);
    vector<bool> visit(n,false);
    DFS(v);
    co<<nl;
    BFS(v);
    return 0;
}