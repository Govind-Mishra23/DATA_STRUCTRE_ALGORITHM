#include <iostream>
#include <vector>
#include <queue>

class Graph {
public:
    Graph(int vertices);
    void addEdge(int u, int v);
    void BFS(int startVertex);

private:
    int vertices;
    std::vector<std::vector<int>> adjList;
};

Graph::Graph(int vertices) {
    this->vertices = vertices;
    adjList.resize(vertices);
}

void Graph::addEdge(int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void Graph::BFS(int startVertex) {
    std::vector<bool> visited(vertices, false);
    std::queue<int> queue;

    visited[startVertex] = true;
    queue.push(startVertex);

    while (!queue.empty()) {
        int currentVertex = queue.front();
        queue.pop();
        std::cout << currentVertex << " ";

        for (int neighbor : adjList[currentVertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                queue.push(neighbor);
            }
        }
    }
}

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);

    std::cout << "BFS starting from vertex 0: ";
    g.BFS(0);

    return 0;
}
