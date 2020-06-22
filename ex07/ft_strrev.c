#include <stdio.h>
#include <unistd.h>
char *ft_strrev(char *str)
{

    //count the number of characters in a string
    int counter = 0;
    int i = 0;
    char holder;
    while (str[counter] != '\0') // The last character in a string is '\0' called the terminator
    {
        counter++;
    }
    while (i <= 0)
    {
        //add each character in reverse order
        holder = str[counter];
        str[i] = holder;
        i++;
        counter--;
    }
    return str;
}

/* for testing
int main(void)
{
    char i[] = "brom";
    char *a;
    a = i;
    char *result = ft_strrev(a);
    return 0;
}
*/