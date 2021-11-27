#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	/*
	[](int x){
		if(x%2 == 0)
			std::cout << x << " is even number\n";
		else
			std::cout << x << " is odd number\n";
	};
	*/

	std::vector <int> v{10,20,30,40,50,21,27,9,7};
	std::for_each(v.begin(),v.end(),[](int x){
				if(x%2==0)
					std::cout << x << " is even number\n";
				else
					std::cout << x << " is odd number\n";
			});
	return 0;
}
