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

	Node* getNext()
	{
		return next;
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

	Node push_front(string newDataItem) //Insert item at head of list
	{
		Node newHeadNode = Node(newDataItem);

		if (this->empty())
		{
			tail = &newHeadNode;
		}

		newHeadNode.setNext(head);	
		this->head = &newHeadNode;
		num_items++;
	}

	void push_back(string newDataItem) //Inert item at tail of list
	{
		Node newTailNode = Node(newDataItem);	//Initialize node and set local data item

		if (this->empty())
		{
			head = &newTailNode;
		}

		Node iteratorNode = Node();
		iteratorNode.setNext(head);

		while (iteratorNode.getNext() != NULL)
		{
			iteratorNode.setNext(iteratorNode.getNext());
		}

		iteratorNode.setNext(&newTailNode);

		this->tail = &newTailNode;
		num_items++;
	}

	void pop_front() //Remove item from head of list
	{
		if (this->empty())
			return;

		this->head = head->getNext();
		num_items--;
	}

	void pop_back() //Remove item from tail of list
	{
		if (this->empty())
			return;

		Node iteratorNode = Node();
		iteratorNode.setNext(head);

		for (int i = 0; i < (num_items - 1); i++)
		{
			iteratorNode.setNext(iteratorNode.getNext());
		}

		this->tail = &iteratorNode;
		iteratorNode.setNext(NULL);
		num_items--;
	}

	Node* front() //Return reference to head
	{
		return head;
	}

	Node* back() //Return reference to tail
	{
		return tail;
	}

	bool empty() //Test if the linked list is empty
	{
		if (this->head == NULL)
			return true;
		return false;
	}

	void insert(size_t index, const string& item)//Insert item at position index (starting at 0).Insert at the end if index is beyond the end of the list
	{
		if (index >= num_items)
			this->push_back(item);
		else
		{
			Node iteratorNode = Node();
			iteratorNode.setNext(head);

			for (int i = 0; i < index; i++)
			{
				iteratorNode.setNext(iteratorNode.getNext());
			}

			Node newNode(item);
			newNode.setNext(iteratorNode.getNext());
			iteratorNode.setNext(&newNode);
		}

		if (index == 0)
		{
			head++;
		}
		if (index == num_items - 1)
		{
			tail++;
		}

		num_items++;
	}

	bool remove(size_t index) //Remove the item at position index. Return true if successful; return false if index is beyond the end of the list.
	{
		if (index >= num_items)
			return false;

		Node iteratorNode = Node();
		iteratorNode.setNext(head);

		for (int i = 0; i < index; i++)
		{
			iteratorNode.setNext(iteratorNode.getNext());
		}


		num_items--;
		return true;
	}

	size_t find(const string& item) // Return the position of the first occurrence of item if it is found.Return the size of the list if it is not found
	{

	}
};