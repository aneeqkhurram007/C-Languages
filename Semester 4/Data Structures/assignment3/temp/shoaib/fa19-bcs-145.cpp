#include <iostream>

using namespace std;
#define MAX 100000

struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    struct Node *t;
    t = new Node;

    t->data = x;
    t->next = NULL;
    if (front == NULL)
    {
        front = rear = t;
    }
    else
    {
        rear->next = t;
        rear = t;
    }
}

int dequeue()
{
    int x = -1;
    struct Node *t;

    if (front == NULL)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

bool isEmpty()
{
    return front == NULL;
}

int j = -1;

void DFS(int G[][50], int source, int destination)
{

    static int visited[50] = {0};

    if (j == destination)
    {
        cout << source << " ";
        return;
    }
    if (visited[source] == 0)
    {
        cout << source << " ";
        visited[source] = 1;
        for (j = 0; j < 50; j++)
        {
            if (G[source][j] >= 1)
            {
                DFS(G, j, destination);
            }
        }
    }
}

void BFS(int G[][50], int source, int destination)
{
    int i = source, j;
    int visited[50] = {0};
    cout << i << " ";
    visited[i] = 1;
    enqueue(i);
    while (!isEmpty())
    {
        i = dequeue();
        if (i == destination)
            return;

        for (j = 0; j < 50; j++)
        {

            if (G[i][j] >= 1 && visited[j] == 0)
            {
                cout << j << " ";
                if (j == destination)
                    return;
                enqueue(j);
                visited[j] = 1;
            }
        }
    }
}

#define max 50
void dijkstra(int G[max][max], int n, int startnode)
{
    int cost[max][max], distance[max], pred[max];
    int visited[max], count, mindistance, nextnode, i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (G[i][j] == 0)
                cost[i][j] = MAX;
            else
                cost[i][j] = G[i][j];
    for (i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;
    while (count < n - 1)
    {
        mindistance = MAX;
        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }
        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }
    for (i = 0; i < n; i++)
        if (i != startnode && distance[i] != MAX)
        {
            cout << "\nDistance to " << i << " = " << distance[i];
        }
}

void dijkstra(int G[max][max], int n, int startnode, int destination)
{
    int cost[max][max], distance[max], pred[max];
    int visited[max], count, mindistance, nextnode, i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (G[i][j] == 0)
                cost[i][j] = MAX;
            else
                cost[i][j] = G[i][j];
    for (i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;
    while (count < n - 1)
    {
        mindistance = MAX;
        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }
        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }
    for (i = 0; i < n; i++)
        if (i != startnode && distance[i] != MAX && i == destination)
        {
            cout << "\nDistance  to " << i << " = " << distance[i];
        }
}

int main()
{

    int source, destination;

    int G[50][50] = {};

    cout << "Created By: Aneeq Khurram\tFA19-BCS-145" << endl;

    int start, end, weight, edges;
    cout << "Enter number of edges you want to enter: ";
    cin >> edges;
    for (int i = 0; i < edges; i++)
    {
        cout << "Enter Start Vertex for Edge # " << i << " : ";
        cin >> start;
        cout << "Enter End Vertex for Edge # " << i << " : ";
        cin >> end;
        cout << "Enter Weight for Edge # " << i << " : ";
        cin >> weight;
        G[start][end] = weight;
        G[end][start] = weight;
    }

    int choice;
    while (true)
    {
        cout << "Press 1 for Depth First Search" << endl;
        cout << "Press 2 for Breadth First Search" << endl;
        cout << "Press 3 for Shortest Path for all destination vertices" << endl;
        cout << "Press 4 for Shortest Path for destination vertex" << endl;
        cout << "Press any key to exit." << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << endl
                 << "==================DFS=================" << endl
                 << endl;
            cout << "Enter Source Vertex: ";
            cin >> source;
            cout << "Enter Destination Vertex: ";
            cin >> destination;
            DFS(G, source, destination);
            cout << destination << " ";
            cout << endl
                 << endl;
        }
        else if (choice == 2)
        {
            cout << endl
                 << "==================BFS=================" << endl;
            cout << "Enter Source Vertex: ";
            cin >> source;
            cout << "Enter Destination Vertex: ";
            cin >> destination;
            BFS(G, source, destination);
            cout << endl
                 << endl;
        }
        else if (choice == 3)
        {
            cout << endl
                 << "Dijkstra Algorithm(Source to All Vertex)" << endl;
            cout << "Enter Source Vertex: ";
            cin >> source;
            dijkstra(G, max, source);
            cout << endl
                 << endl;
        }
        else if (choice == 4)
        {
            cout << endl
                 << "Dijkstra Algorithm (Source To Destination)" << endl
                 << endl;
            cout << "Enter Source Vertex: ";
            cin >> source;
            cout << "Enter Destination Vertex: ";
            cin >> destination;
            dijkstra(G, max, source, destination);
        }
        else
        {
            return 0;
        }
    }
}