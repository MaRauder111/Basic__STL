#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int d = 4;

	std::vector <int> v {10,16,20,30};
	std::for_each(v.begin(),v.end(),[d](int x){
			if(x%d == 0)
				std::cout << x << " is divisible by " << d << "\n";

			else
				std::cout << x << " is divisible not by " << d << "\n";
			});

	return 0;
}
