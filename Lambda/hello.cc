#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	// [](){}; to create lambda
	
	/*
	struct
	{
		void operator()(int x)
		{
			std::cout << x << "\n";
		}
	}something;
	*/

	// [](int x){std::cout << x << "\n"}
	
	//[cc](p){fd}; // capture clause parameter function definition
	std::vector <int> v{2,3,7,14,23};
	std::for_each(v.begin(),v.end(),[](int x){std::cout << x << "\n";});


	return 0;
}
