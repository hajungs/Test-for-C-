#include <iostream>
#include <cmath>

using namespace std;

//2) �ϳ��� Ÿ�� �˰����� �����϶�.(���ȣ��)

void Hanoi(int inputnum, string from, string temp, string to)
{
	if (inputnum == 1)
	{
		cout << " " << inputnum << " disk moves from " << from << " to " << to << endl;
	}
	else
	{
		Hanoi(inputnum - 1, from, to, temp);
		cout << " " << inputnum << " disk moves from " << from << " to " << to << endl;
		Hanoi(inputnum - 1, temp, from, to);
	}
}

int main()
{
	Hanoi(3, "A", "B", "C");
	return 0;
}