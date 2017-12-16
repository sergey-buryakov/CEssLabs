#include <iostream>
#include <string>
#include <set>
using namespace std;

class BinaryTree
{
protected:
    struct node
    {
        int data;
        node* left;
        node* right;
    };

    node* root;

    node* makeEmpty(node* t)
    {
        if(t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }

    node* Add(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = Add(x, t->left);
        else if(x > t->data)
            t->right = Add(x, t->right);
        return t;
    }
    void print(node* t)
    {
        if(t == NULL)
            return;
        print(t->left);
        cout << t->data << " ";
        print(t->right);
    }
public:
    BinaryTree()
    {
        root = NULL;
    }

    ~BinaryTree()
    {
        root = makeEmpty(root);
    }

    void Insert(int x)
    {
        root = Add(x, root);
    }
    void Display()
    {
        print(root);
    }
};

ostream& operator<< (ostream &strm, BinaryTree t) {
    t.Display();
    return strm;
}

int main()
{
    BinaryTree tree;
    int j;
    int n;
    cout << "Enter how many items should be pushed onto the tree: ";
    cin >> n;
    cout << "Enter nodes value: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> j;
        tree.Insert(j);
    }
	cout << tree << endl;

    return 0;
}
