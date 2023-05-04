
#include <iostream>
#include <vector>

using namespace std;

class DAG {
private:
    int V; // 节点数
    vector<vector<int>> adjList; // 邻接表

public:
    DAG(int v) {
        V = v;
        adjList.resize(v);
    }

    // 添加有向边
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
    }

    // 打印邻接表
    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << i << ": ";
            for (int j = 0; j < adjList[i].size(); j++) {
                cout << adjList[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    DAG g(5); // 创建一个包含5个节点的有向无环图

    // 添加边
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);

    // 打印邻接表
    g.printGraph();

    return 0;
}
