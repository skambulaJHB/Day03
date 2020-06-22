#include <unistd.h>

void ft_putchar(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

/*for testing

int main(void)
{
    char *string = "Hello Sihle";
    ft_putchar(string);
    return 0;
}
*/