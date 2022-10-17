
#include "libft.h"

int main()
{
    char *s = ft_strnstr("haystack","y",3);
    char *c = strnstr("haystack","y",3);
    printf("%s mine \n",s);
    printf("%s theirs ",c);
}
