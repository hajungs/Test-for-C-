#include <iostream>

using namespace std;

//1) ù° �� ��°���� 1�̸� �� �� ��� ���� �ٷ� �� ������ ���� ��Ÿ���� �Ǻ���ġ ������ ��������� �����϶�

int Fibo(int num)
{

	if (num == 1)
	{
		return 1;
	}
	if (num == 2)
	{
		return 1;
	}

	return Fibo(num - 1) + Fibo(num - 2);

}


int main()
{
	int num;
	cin >> num;

	cout << Fibo(num) << endl;

	return 0;
}