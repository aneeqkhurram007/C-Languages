#include <iostream>
using namespace std;
struct Node
{
    int val, cost;
    Node *next;
};

struct Edge
{
    int src, dest, weight;
};

class Graph
{
    Node *getAdjListNode(int value, int weight, Node *head)
    {
        Node *newNode = new Node;
        newNode->val = value;
        newNode->cost = weight;

        newNode->next = head;

        return newNode;
    }

    int N;

public:
    Node **head;

    Graph(Edge edges[], int n, int N)
    {
        head = new Node *[N]();
        this->N = N;

        for (int i = 0; i < N; i++)
        {
            head[i] = nullptr;
        }

        for (int i = 0; i < n; i++)
        {
            int src = edges[i].src;
            int dest = edges[i].dest;
            int weight = edges[i].weight;

            Node *newNode = getAdjListNode(dest, weight, head[src]);

            head[src] = newNode;
        }
    }
    void DFSUtil(int v, bool visited[])
    {

        visited[v] = true;
        cout << v << " ";
        Node *temp = head[v];
        int i = temp->val;
        while (temp != nullptr)
        {
            if (!visited[i])
            {
                DFSUtil(i, visited);
            }
            temp = temp->next;
            i++;
        }
    }
    void DFS(int v)
    {
        bool *visited = new bool[N];
        for (int i = 0; i < N; i++)
        {
            visited[i] = false;
        }
        DFSUtil(v, visited);
    }
    void BFS(Edge *edges, int n)
    {
        int qu[N] = {0}, front = 0, rare = 0, v = 0, visit[10], visited[10], cost[N][N] = {0}, i = 0, j = 0, k = 0;
        for (k = 0; k < n; i++)
        {
            cost[edges[k].src][edges[k].dest] = 1;
        }
        cout << "Enter initial vertex to traverse from:";
        cin >> v;
        cout << "Visitied vertices:";
        cout << v << " ";
        visited[v] = 1;
        k = 1;
        while (k < n)
        {
            for (j = 1; j <= n; j++)
                if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
                {
                    visit[j] = 1;
                    qu[rare++] = j;
                }
            v = qu[front++];
            cout << v << " ";
            k++;
            visit[v] = 0;
            visited[v] = 1;
        }
    }
    ~Graph()
    {
        for (int i = 0; i < N; i++)
        {
            delete[] head[i];
        }

        delete[] head;
    }
};

void printList(Node *ptr, int i)
{
    while (ptr != nullptr)
    {
        cout << "(" << i << ", " << ptr->val << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    int N = 6;
    Edge edges[] = {
        {0, 1, 6},
        {0, 2, 7},
        {1, 2, 5},
        {2, 0, 4},
        {2, 3, 10},
        {3, 3, 1},
        {5, 4, 3}};

    int n = sizeof(edges) / sizeof(edges[0]);

    Graph graph(edges, n, N);

    for (int i = 0; i < N; i++)
    {
        printList(graph.head[i], i);
    }
    cout << "DFS" << endl;
    graph.DFS(0);
    cout << "BFS" << endl;
    graph.BFS(edges, n);
    return 0;
}