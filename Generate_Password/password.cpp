#include <iostream>
#include <cstdlib>
#include <ctime>

static const char alphanum[] = "0123456789"
							   "!@#$%^&"
							   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
							   "abcdefghijklmnopqrstuvqxyz";

int strLen = sizeof(alphanum) - 1;

char GenRand()
{
	// std::cout << alphanum[rand()%strLen];
	return alphanum[rand() % strLen];
}

std::string PasswordGenerated(int s, int n)
{
	std::cout << "Enter the length of the password required ";
	std::cin >> n;

	std::cout << n << '\n';

	std::cout << "Your password is ";

N:
	char C;
	std::string d;

	for (int i = 0; i < n; i++)
	{
		// std::cout << "Inside for\n";
		C = GenRand();
		d += C;
		if (isdigit(C))
		{
			// std::cout << C << "\n";
			C++;
		}
		if (C == '!' || C == '@' || C == '%' || C == '^' || C == '&' || C == '*' || C == '#')
		{
			s++;
		}
	}
	if (n > 2 && (s == 0 || C == 0))
	{
		goto N;
	}

	return d;
}

int main()
{
	int n{}, c{0}, s{0};

	srand(time(0));

	int choice{};

	do{
		std::cout << "\n\n1) Generate Password\n";
		std::cout << "2) Exit\n\n";
		std::cout << "Enter your choice: \n";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << PasswordGenerated(s, n);
			break;

		default:
			break;
		}
	}while(choice != 2);

	return 0;
}