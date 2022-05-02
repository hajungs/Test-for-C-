#include <iostream>

using namespace std;

//1) 첫째 및 둘째항이 1이며 그 뒤 모든 항은 바로 앞 두항의 합을 나타내는 피보나치 수열을 재귀적으로 구현하라

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