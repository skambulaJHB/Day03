#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp_holder;
    if (b != 0)
    {

        temp_holder = *a / *b;
        *b = *a % *b;
        *a = temp_holder;
    }
}

/* for testing
int main()
{
    int a = 6;
    int b = 3;

    int *a_pointer = &a;
    int *b_pointer = &b;

    ft_ultimate_div_mod(a_pointer, b_pointer);
    printf("%d\n", *a_pointer);
    printf("%d", *b_pointer);
}
*/