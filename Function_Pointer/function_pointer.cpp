// Function pointer

#include<iostream>

int Add(int a, int b)
{
	return a+b;
}

int main()
{
	// to write function pointer first write the return type
	// () name of the pointer
	// The number of arguments

	// pointer to function that should take
	// (int,int) as argument/parameter and return int
	int (*p)(int,int);

	p = &Add;
	
	int c = (*p)(2,3);
	std::cout << c << std::endl;
	
	return 0;
}
