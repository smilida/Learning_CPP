#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class DAG {
private:
    int V; // 节点数
    vector<vector<pair<int, int>>> adjList; // 邻接表

public:
    DAG(int v) {
        V = v;
        adjList.resize(v);
    }

    // 添加有向边
    void addEdge(int u, int v, int w) {
        adjList[u].push_back(make_pair(v, w));
    }

    // 计算拓扑排序序列
    vector<int> topologicalSort() {
        vector<int> inDegree(V, 0); // 记录每个节点的入度
        for (int u = 0; u < V; u++) {
            for (int j = 0; j < adjList[u].size(); j++) {
                int v = adjList[u][j].first;
                inDegree[v]++;
            }
        }

        queue<int> q; // 存储入度为0的节点
        for (int u = 0; u < V; u++) {
            if (inDegree[u] == 0) {
                q.push(u);
            }
        }

        vector<int> order; // 存储拓扑排序序列
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            order.push_back(u);
            for (int j = 0; j < adjList[u].size(); j++) {
                int v = adjList[u][j].first;
                inDegree[v]--;
                if (inDegree[v] == 0) {
                    q.push(v);
                }
            }
        }

        return order;
    }

    // 求解最长路径
    int longestPath() {
        vector<int> dist(V, INT_MIN); // 记录每个节点到起点的最长路径长度
        vector<int> order = topologicalSort(); // 获取拓扑排序序列
        dist[order[0]] = 0; // 起点到自身的距离为0
        for (int i = 0; i < order.size(); i++) {
            int u = order[i];
            for (int j = 0; j < adjList[u].size(); j++) {
                int v = adjList[u][j].first;
                int w = adjList[u][j].second;
                dist[v] = max(dist[v], dist[u] + w); // 更新节点v的最长路径长度
            }
        }
        return dist[order.back()]; // 返回终点的最长路径长度
    }
};

int main() {
    DAG g(5); // 创建一个包含5个节点的有向无环图

    // 添加边
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(3, 4, 2);

// 求解最长路径
cout << "最长路径长度为：" << g.longestPath() << endl;

return 0;
}
