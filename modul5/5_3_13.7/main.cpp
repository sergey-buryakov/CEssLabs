#include <iostream>

using namespace std;

class Node
{
public:
	Node(int val);
	int	value;
	Node* next;
};
Node::Node(int val)
{
	value = val;
	next = nullptr;
}
class List
{
public:
	List();
	List(List *other);
	void push_front(int	value);
	bool pop_front(int value);
	void push_back(int value);
	bool pop_back(int value);
	int at(int index);
	void insert_at(int index, int value);
	void remove_at(int index);
	int	size();
	Node* get(int index);
private:
					// other members you may have used
	Node* head;
	Node* tail;
};
int List::size()
{
	//if (head == nullptr) return 0;
	Node* temp = head;
	int result = 0;
	while (temp != nullptr)
	{
		result++;
		temp = temp->next;
	}
	return result;
}
List::List()
{
	head = nullptr;
	tail = nullptr;
}
List::List(List *other)
{
	if (other->head != nullptr)
	{
		head = new Node(other->head->value);
		Node *temp = other->head;
		Node *prev = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
			tail = new Node(temp->value);
			prev->next = tail;
			prev = tail;
		}
	}
	else
	{
		List();
	}
}

Node* List::get(int index)
{
	Node* result = this->head;
	while (index > 0)
	{
		index--;
		result = result->next;
	}
	return result;
}

void List::push_front(int value)
{
	Node* new_head = new Node(value);
    new_head->next = head;

    if(head == nullptr)
        tail = new_head;

    head=new_head;
}
void List::push_back(int value)
{
	if(head != nullptr)
    {
        Node* new_tail = new Node(value);
        tail->next = new_tail;
        tail = new_tail;
    }
    else push_front(value);
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
bool List::pop_back(int value)
{
	if (!head)
        return false;
    if (head == tail)
    {
        value = head->value;
        delete head;
        head = NULL;
        tail = NULL;
        return true;
    }
    value = tail->value;
    Node *current = head;
    while ( current->next != tail )
    {
        current = current->next;
    }

    delete tail;
    tail = current;
    tail->next = NULL;
    return true;
}
int List::at(int index)
{
	return this->get(index)->value;
}
void List::insert_at(int index, int value)
{
	Node* temp = this->get(index - 1);
	Node* newnode = new Node(value);
	newnode->next = temp->next;
	temp->next = newnode;
}
void List::remove_at(int index)
{
	if (index == 0) this->pop_front(0);
	else
	{
		Node* temp = this->get(index - 1);
		Node* toremove = this->get(index);
		temp->next = toremove->next;
		delete toremove;
	}
}
// ...
void printList(List list)
{
	for (int i = 0; i < list.size(); i++)
	{
		cout << "list[" << i << "] == " << list.at(i) << endl;
	}
}

int main()
{
    List list1;
	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);
	list1.push_back(4);
	cout << "list1" << endl;
	printList(list1);
	cout << endl;
	List list2 = List(&list1);
	cout << "list2" << endl;
	printList(list2);
	cout << endl;
	list1.insert_at(1, 6);
	list2.remove_at(2);
	cout << "list1" << endl;
	printList(list1);
	cout << "list2" << endl;
	printList(list2);
	cout << endl;
    return 0;
}
