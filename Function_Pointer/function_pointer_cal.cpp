#include<iostream>

int Add(int a, int b)
{
	return a+b;
}

int Sub(int x, int y)
{
	if(x<y)
		return y-x;

	else
		return x-y;
}

void HelloWorld()
{
	std::cout << "Hello World\n";
}

int main()
{
	int (*p)(int,int);
	p = &Add;
	int (*ptr)(int,int);
	
	// ptr = &Sub;
	ptr = Sub;

	int sum = (*p)(10,20);
	
	// int diff = (*ptr)(10,20);
	int diff = (ptr)(10,20);

	std::cout << sum << " " << diff << std::endl;
	
	void (*h)();
	h = HelloWorld;
	h();
	return 0;
}
