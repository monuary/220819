#include <iostream>

void swap(int* a, int* b)//포인터의 경우, *를 사용. 불러올 때 &를 쓴다. 자료형에 주의.
{
	int c = *a;
	*a = *b;
	*b = c;
}

void swap(char* a, char* b)
{
	char c = *a;
	*a = *b;
	*b = c;
}

void swap(double* a, double* b)
{
	double c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << " " << num2 << std::endl;

	char ch1='A', ch2='Z';//char의 정의를 위해 ''를 붙인다.
	swap(&ch1, &ch2);
	std::cout << ch1 << " " << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << " " << dbl2 << std::endl;
	return 0;
}