// Pointer-SortingArray.cpp : Defines the entry point for the console application.
//

#include <iostream>
void order(int* numb1, int* numb2);

int main()
{
	int n1 = 99, n2 = 11;
	int n3 = 22, n4 = 88;

	order(&n1, &n2);
	order(&n3, &n4);

	std::cout << "n1= " << n1 << std::endl;
	std::cout << "n2= " << n2 << std::endl;
	std::cout << "n3= " << n3 << std::endl;
	std::cout << "n4= " << n4 << std::endl;

	system("pause");
    return 0;
}

void order(int * numb1, int * numb2)
{
	if (*numb1 > *numb2) // if 1st is larger then 2nd
	{
		int temp = *numb1; 
		*numb1 = *numb2;
		*numb2 = temp;
	}
}
