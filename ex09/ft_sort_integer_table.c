#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
    int i;
    i = 0;
    int holder;
    while (i <= size)
    {
        int j = i;
        while (j < size)
        {
            if (tab[i] >= tab[j])
            {
                holder = tab[i];
                tab[i] = tab[j];
                tab[j] = holder;
            }
            j++;
        }
        i++;
    }
}

/* for testing
int main()
{
    int numbers[] = {5, 6, 2, 5, 6, 9, 24, 534, 34};

    ft_sort_integer_table(numbers, 9);
    for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        printf("%d ", numbers[i]);
    }
}
*/