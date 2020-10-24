#include <stdio.h>

int get_power(int number, int power);

int main()
{
   	return 0;
}

int get_power(int number, int power)
{
    int result = 1;

    if (power < 0)
    {
        printf("Error: power less than 0");
        
        return -1;
    }
    for (int i = 1; i <= power; i++)
    {
        result *= number;
    }

    return result;
}