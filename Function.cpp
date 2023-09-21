#include "Function.h"

bool IsKPeriodic(std::string str, int K)
{
	int n = str.size();
	if (K <= 0)
	{
		std::cout << "'K' должно быть целым числом больше нуля!\n";
		return false;
	}
	else if (n < K)
	{
		std::cout << "'K' меньше строки!'\n";
		return false;
	}
	else if (n == K)
	{
		std::cout << "Строка " << str << " кратна " << K << '\n';
		return true;
	}
	else if (n % K != 0)
	{
		std::cout << "Строка " << str << " не кратна " << K << '\n';
		return false;
	}
	else
	{
		for (int i = 0; i < K; i++)
		{
			for (int j = (i + K); j < n; j += K)
			{
				if (str[j] != str[i])
				{
					std::cout << "Строка " << str << " не кратна " << K << '\n';
					return false;
				}
			}
		}
		std::cout << "Строка " << str << " кратна " << K << '\n';
		return true;
	}
	std::cout << "UB\n";
	return false;
}