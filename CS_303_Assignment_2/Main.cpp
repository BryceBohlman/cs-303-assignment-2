#include "Single_Linked_List.h"

using namespace std;

int main()
{
	Single_Linked_List nameList();

	nameList.push_front("Jerry");
	
	
	if (nameList.empty())
	{
		cout << "List is empty";
	}

	return 0;
}