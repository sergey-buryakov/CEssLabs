#include <iostream>

using namespace std;

class Node
{
public:
	Node(int val);
	int value;
	~Node();
	Node* next;
};
Node::Node(int val) : value(val), next(nullptr)
{
	cout << "+Node" << endl;
}
Node::~Node()
{

	cout << "-Node" << endl;
}

class List
{
public:
	List();
	~List();
	void push_front(int value);
	bool pop_front(int value);
private:
	Node* head;
};
List::List() : head(nullptr)
{

}
List::~List() {
	Node *t = head, *next;
	while (t != nullptr)
	{
		next = t->next;
		delete t;
		t = next;
	}
}
void List::push_front(int value)
{
	Node* new_head = new Node(value);
	new_head->next = head;
	head = new_head;
}
bool List::pop_front(int value)
{
	if(head)
    {   value = head->value; // extract the result
        Node* tmp = head; // save this so we can delete it
        head = head->next; // move the head forward to the next item
        delete tmp;
        return true;
    }
    return false;
}
int main()
{
	  List list;
	  list.push_front(1);
	  list.push_front(2);
	  list.push_front(3);
	  list.push_front(4);
	  return 0;
}
