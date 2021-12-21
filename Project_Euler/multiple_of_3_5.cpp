#include<iostream>

int main()
{
	int n{1000}, sum{};

	//std::cout << 6%3;

	for(int i=0; i<n; i++)
	{
		if(i%3 == 0 || i%5 == 0)
		{
			std::cout << i << " multiple of 3 and 5\n";
			sum += i;
			std::cout << sum << std::endl;
		}
	}

	return 0;
}
