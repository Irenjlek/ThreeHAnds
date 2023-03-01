#include "Graph.h"

int main() {

    Graph g;

    g.addVertex(0, "Ivan");
    g.addVertex(1, "Sveta");
    g.addVertex(2, "Anna");
    g.addVertex(3, "Oleg");
    g.addVertex(4, "Kola");
    g.addVertex(5, "Lena");
    g.addVertex(6, "Den");

    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 1);
    g.addEdge(2, 5, 1);
    g.addEdge(5, 6, 1);

    g.findMinDistancesFloyd();

    g.showParsWhisMaxDistance(3);

	return 0;
}