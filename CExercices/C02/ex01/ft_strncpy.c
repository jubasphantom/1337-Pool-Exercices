#include <stdio.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n)

{
    unsigned int i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
        dest[i] = '\0';
    return dest;
}

int main(void)

{
    char dest[6];
    printf("%s", ft_strncpy(dest, "smile", 4));
    return 0;
}