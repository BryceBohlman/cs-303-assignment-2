#include "Single_Linked_list.h"

using namespace std;

class Node
{
	string dataItem;
	Node* next;
	
public:
	Node() // default constructor
	{
		dataItem = "";
		next = NULL;
	}

	Node(string dataItem) //parameterized constructor
	{
		this->dataItem = dataItem;
		next = NULL;
	}

	void setNext(Node *memAddress)
	{
		this->next = memAddress;
	}
};

class Single_Linked_List
{
	Node* head;
	Node* tail;
	int num_items;

public:
	Single_Linked_List()
	{
		head = NULL;
		tail = NULL;
		num_items = 0;
	}

	void push_front(string newDataItem) //Insert item at head of list
	{
		Node newHeadNode = Node(newDataItem);
		newHeadNode.setNext(head);
	
		this->head = &newHeadNode;
		num_items++;
	}

	void push_back(string newDataItem) //Inert item at tail of list
	{
		Node newTailNode = Node(newDataItem);
		newTailNode.setNext(head);


		this->tail = &newTailNode;
		num_items++;
	}

	void pop_front() //Remove item from head of list
	{

	}
	void pop_back() //Remove item from tail of list
	{

	}

	Node* front() //Return reference to head
	{
		return head;
	}

	Node* back() //Return reference to tail
	{
		return tail;
	}

	void empty() //Test if the linked list is empty
	{

	}

	void insert(size_t index, const string& item)//Insert item at position index (starting at 0).Insert at the end if index is beyond the end of the list
	{

	}

	bool remove(size_t index) //Remove the item at position index. Return true if successful; return false if index is beyond the end of the list.
	{

	}

	size_t find(const string& item) // Return the position of the first occurrence of item if it is found.Return the size of the list if it is not found
	{

	}
};