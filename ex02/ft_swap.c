// #include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp_holder;

    if (a && b)
    {
        temp_holder = *a;
        *a = *b;
        *b = temp_holder;
    }
}
/*
for testing
int main()
{
    int num1 = 3;
    int num2 = 6;
    int *a = &num1; //return address of num1 in memory
    int *b = &num2;

    ft_swap(a, b); //pass in the address of num1 and num2
    printf("The value of a = %d\n", num1);
    printf("The value of b = %d", num2);
    return 0;
}
*/