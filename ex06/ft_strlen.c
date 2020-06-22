#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{

    int counter = 0;
    if (str)
    {
        while (str[counter] != '\0') // The last character in a string is '\0' called the terminator
        {
            counter++;
        }
        return counter;
    }
}
/* for testing

int main(void)
{
    char *test_string = "Hello Sihle";
    int result = ft_strlen(test_string);
    printf("%d", result);
    return 0;
}
*/