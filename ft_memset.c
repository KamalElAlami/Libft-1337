#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned int i;
    unsigned char *d;

    d = (unsigned char *)b;
    i = 0;

    while (i < len)
    {
        d[i++] = (unsigned char)c;
    }
    b = (void *)d;
    return (b);
}