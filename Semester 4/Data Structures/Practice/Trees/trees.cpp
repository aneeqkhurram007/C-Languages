#include <iostream>
class trees
{
public:
    int data;
    trees *left;
    trees *rgiht;
};
trees *createNode(int data)
{
    trees *n;
    n = new trees();
    n->data = data;
    n->left = NULL;
    n->rgiht = NULL;
    return n;
}
int main()
{
    trees *p = createNode(2);
    trees *p1 = createNode(1);
    trees *p2 = createNode(4);

    p->left = p1;
    p->rgiht = p2;

    return 0;
}