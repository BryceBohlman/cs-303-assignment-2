#include "Stack.h"

using namespace std;

class Stack
{
	vector<int> dataStack;

public:
	bool isEmpty()
	{
		return dataStack.empty();
	}

	void push(int data)
	{
		dataStack.push_back(data);
	}

	void pop()
	{
		if (dataStack.empty())
			cout << "Stack is empty." << endl;
		else
			dataStack.pop_back();
	}

	int getTopOfStack()
	{
		if (this->isEmpty())
		{
			cout << "Stack is empty." << endl;
			return -1;
		}
		else
			return dataStack.back();
	}

	int GetAverageValue()
	{
		if (this->isEmpty())
		{
			cout << "Stack is empty." << endl;
			return -1;
		}
		else
		{
			int total = 0;
			for (int i = 0; i < dataStack.size(); i++)
			{
				total += dataStack[i];
			}
			return total / dataStack.size();
		}
	}
};