#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int*b , const int size, const int A, const int B, int i)
{
	b[i] = A + rand() % (B - A + 1);
	if (i < size - 1)
		Create(b, size, A, B, i + 1);
}
void Print(int* b, const int size, int i)
{
	cout << setw(4) << b[i];
	if (i < size - 1)
		Print(b, size, i + 1);
	else
		cout << endl;
}
int Sum(const int* const b, const int size, int i)
{
	if (i < size)
	{
		if (b[i] % 3 != 0 || b[i] % 2 == 0)
		return b[i] + Sum(b, size, i + 1);
		else
			return Sum(b, size, i + 1);
	}
}


int Count(const int* const b, const int size, int i)
{
	if (i < size)
	{
		if (b[i] % 3 != 0 || b[i] % 2 == 0)
			return 1 + Count(b, size, i+1);
		else
			return Count(b, size, i+1);
	}
}
void Replacement(int b[], const int size ,int i)
{
	if (i < size)
	{
		if (b[i] % 3 != 0 || b[i] % 2 == 0)
			b[i] = 0;
		 Replacement(b, size, i+1);
		 return ;
	}
}



int main()
{
	srand((unsigned)time(NULL)); 
	const int size = 21;
	int b[size];
	int A = 10;
	int B = 90;
	Create(b, size, A, B, 0);
	Print(b, size, 0);
	cout << "The sum of the elements that satisfy the condition = " << Sum(b, size,0) << endl;
	cout << "The number of elements that satisfy the condition = " << Count(b, size,0) << endl;
	Replacement(b, size,0);
	Print(b, size,0);

	return 0;
}
