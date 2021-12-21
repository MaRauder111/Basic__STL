#include<iostream>

int main()
{
	int n{10}, sum{};

	for(int i=1; i<n; i++)
	{
		sum += i;
		std::cout << sum << std::endl;
	}
	return 0;
}
