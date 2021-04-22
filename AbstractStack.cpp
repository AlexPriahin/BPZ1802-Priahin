#include <iostream>
#include "Stack.h"
#include "Wrap.h"

using namespace std;

int main()
{
	int size = 5;
	Stack<int> s(size);

	/*for (int i = 0; i < size; i++)
	{
		s.Push(i);
	}
	s.printStack();*/


	for (int i = 0; i < size; i++) s.Push(i + 10);
	s.printStack();

	/*cout << endl;
	cout << "POPPED--------------------------------" << endl;
	cout << endl;
	s.Pop(0);
	s.printStack();*/

	system("pause");
	return 0;
}