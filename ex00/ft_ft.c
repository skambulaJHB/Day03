#include <stdio.h>
#include <unistd.h>

int ft_ft(int *nbr)
{
    if (nbr)
    {
        *nbr = 42;
    }
    return 0;
}

//for testing purposes
// int main()
// {
//     int num;
//     ft_ft(&num);
//     return 0;
// }
