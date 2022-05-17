#include <iostream>
#include "ArrayStack.h"
using namespace std;

int main()
{
	ArrayStack myStack;
	ArrayStack stack2;

	for (int i = 0; i < 17; i++)
	{
		myStack.push(i);
	}

	while (!myStack.isEmpty())
	{
		stack2.push(myStack.pop());
	}

	cout << "Same order as original stack: " << endl;
	while (!stack2.isEmpty())
	{
		int data = stack2.pop();
		myStack.push(data);
		cout << stack2.pop() << endl;
	}

	return 0;
}