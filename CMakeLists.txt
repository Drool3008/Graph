cmake_minimum_required(VERSION 3.26)
project(Graph)

set(CMAKE_CXX_STANDARD 17)

add_executable(Graph main.cpp
        AdjacenyMatrix.h
        traversal.h
        traversal_for_DisconnectedGraph.h
        Kruskal.h
        Prims.h
        "Commutable Island.h"
        Dijikstra.h
        Topological_sort.h)
