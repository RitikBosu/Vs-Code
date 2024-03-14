#include <iostream>
#include <vector>
using namespace std;
void printNeighbors(const vector<int>& adjacencyList, int vertex) {
    int numVertices = adjacencyList.size();
    if (vertex >= numVertices) {
        cout << "Invalid vertex!" << endl;
        return;
    }

    cout << "Neighbors of vertex " << vertex << " are: ";
    for (int i = numVertices; i < numVertices + adjacencyList[vertex]; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> adjacencyList = {
        2,
        2,
        3,
        1,
        1
    };

    int vertex;
    cout << "Enter the vertex to print its neighbors: ";
    cin >> vertex;

    printNeighbors(adjacencyList, vertex);

    return 0;
}