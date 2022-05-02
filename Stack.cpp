#include <iostream>

using namespace std;

//4) 배열을 이용하여 스택을 구현하라.(push, pop, print, isFull, isEmpty) 

class  Stack
{
private:
	int top, max;
	char *stack;

public:
	Stack(int size)
	{
		max = size;
		stack = new char[size];
		top = -1;
	}
	bool IsFull()
	{
		if (top == max - 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bool IsEmpty()
	{
		if (top ==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	char Pop()
	{
		if (IsEmpty() == 1)
		{
			cout << "Empty\n";
		}
		else
		{
			return stack[top--];
		}
	}
	void Push(char element)
	{
		if (IsFull() == 1)
		{
			cout << "Full\n";
		}
		else
		{
			stack[++top] = element;
		}
	}
	void Print()
	{
		for (int i = 0; i < top + 1; i++)
		{
			cout << stack[i] << endl;
		}
	}

};


int main()
{
	Stack stack(4);

	stack.Push('s');
	stack.Push('t');
	stack.Push('a');
	stack.Push('r');

	stack.Pop();
	stack.Push('g');
	stack.Print();

	return 0;
}