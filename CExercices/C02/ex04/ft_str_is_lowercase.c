#include <stdio.h>

int  ft_str_is_lowercase(char *str)

{  
    int i = 0;
    if (str[i] == '\0')
        return 1;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return 0;
    }
    return 1;
}

int main(void)
{
    char str[9] = "helloboy";
    printf("%d", ft_str_is_lowercase(str));
    return 0;
}