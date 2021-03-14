#include <iostream>
int main()
{
	uint16_t arr[20];
	uint16_t count = 0;
	for (uint16_t i = 0; i < 19; i++)
	{
		arr[i] = rand() % 20000 - 10000;
		for (uint16_t i = 0; i < 18; i++)
		{
			for (uint16_t j = 1; j < 19; j++) {
				int temp = arr[i] + arr[j];
				if (temp % 2 == 0 && temp % 4 != 0)
				{
					count++;
				}
			}
		}
	}
	std::cout << count << std::endl;
}

