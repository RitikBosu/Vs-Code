#include <iostream>
#include <unordered_map>
#include <vector>

class Graph {
public:
    Graph(int numVertices) : adjacencyList(numVertices) {}

    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    void print() {
        for (int i = 0; i < adjacencyList.size(); ++i) {
            std::cout << i << ": ";
            for (int v : adjacencyList[i]) {
                std::cout << v << " ";
            }
            std::cout << std::endl;
        }
    }

    void bfs(int start) {
        std::vector<bool> visited(adjacencyList.size(), false);
        std::vector<int> queue;

        queue.push_back(start);
        visited[start] = true;

        while (!queue.empty()) {
            int current = queue.front();
            queue.erase(queue.begin());

            std::cout << current << " ";

            for (int v : adjacencyList[current]) {
                if (!visited[v]) {
                    queue.push_back(v);
                    visited[v] = true;
                }
            }
        }
    }

private:
    std::vector<std::vector<int>> adjacencyList;
};

int main() {
    int numVertices, numEdges, u, v;

    std::cout << "Enter the number of vertices: ";
    std::cin >> numVertices;

    Graph graph(numVertices);

    std::cout << "Enter the number of edges: ";
    std::cin >> numEdges;

    std::cout << "Enter the edges (u v):" << std::endl;
    for (int i = 0; i < numEdges; ++i) {
        std::cin >> u >> v;
        graph.addEdge(u, v);
    }

    std::cout << "The graph is: " << std::endl;
    graph.print();

    int start;
    std::cout << "\nEnter the starting vertex for BFS traversal: ";
    std::cin >> start;

    std::cout << "\nBFS traversal starting from vertex " << start << ": ";
    graph.bfs(start);

    return 0;
}