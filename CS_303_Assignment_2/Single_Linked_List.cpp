#include "Single_Linked_list.h"

using namespace std;

struct Node
{
	string dataItem;
	void* next;
	
	Node() //Default Constructor
	{
		dataItem = "";
		next = NULL;
	}

	Node(string newDataItem)
	{
		this->dataItem = newDataItem;
		this->next = NULL;	
	}
};

class Single_Linked_List
{
	void* head;
	void* tail;
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
		newHeadNode.next = head;
	
		this->head = &newDataItem;
		num_items++;
	}

	void push_back(string& newDataItem) //Inert item at tail of list
	{
		Node newTailNode = Node(newDataItem);
		newTailNode.next = NULL;


		this->tail = &newDataItem;
		num_items++;
	}

	void pop_front() //Remove item from head of list
	{

	}
	void pop_back() //Remove item from tail of list
	{

	}

	void* front() //Return reference to head
	{
		return head;
	}

	void* back() //Return reference to tail
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