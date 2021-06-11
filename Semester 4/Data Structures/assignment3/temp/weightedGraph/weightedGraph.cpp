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

        for (unsigned i = 0; i < n; i++)
        {
            int src = edges[i].src;
            int dest = edges[i].dest;
            int weight = edges[i].weight;

            Node *newNode = getAdjListNode(dest, weight, head[src]);

            head[src] = newNode;
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
    int N;
    int n;
    cout << "Enter number of vertices: " << endl;
    cin >> N;
    cout << "Enter number of edges: " << endl;
    cin >> n;
    Edge edges[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter vertexX for Edge # " << i << " : ";
        cin >> edges[i].src;

        cout << "Enter vertexY for Edge # " << i << " : ";
        cin >> edges[i].dest;

        cout << "Enter weight for Edge # " << i << " : ";
        cin >> edges[i].weight;
        cout << endl;
    }

    Graph graph(edges, n, N);

    for (int i = 0; i < N; i++)
    {
        printList(graph.head[i], i);
    }

    return 0;
}