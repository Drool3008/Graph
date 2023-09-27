#include "AdjacenyMatrix.h"
#include "traversal.h"
#include <map>
#define co std::cout
#define ci std::cin
#define nl "\n"
using namespace std;
int main()
{
    int n,e;
    co<<nl<<"Enter Number of edges and vertices : "<<nl;
    ci>>n>>e;
    auto v = matrix(n,e);
    vector<bool> visit(n,false);
    dfs(v,0,visit);
    co<<nl;
    bfs(v,0,visit);
    return 0;
}