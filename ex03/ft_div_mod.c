#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0 && div && mod)
    {
        *div = a / b;
        *mod = a % b;
    }
}

/*
for testing
int main(void)
{
    int num1 = 6;
    int num2 = 2;

    int div;
    int mod;

    int *div_pointer = &div;
    int *mod_pointer = &mod;

    ft_div_mod(num1, num2, div_pointer, mod_pointer);

    printf("%d / %d = %d\n", num1, num2, div);
    printf("%d %% %d = %d", num1, num2, mod);
    return 0;
}
*/