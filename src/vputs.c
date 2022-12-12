#include "dure.h"
int stu_vputs(unsigned int nbr, ...)
{
    va_list ap;
    char *s;
    unsigned int i;
    int k;
    int n;

    n = 0;
    i = 0;
    va_start(ap, nbr);

    while (i < nbr ) {
        s = va_arg(ap, char *);
        k = 0;

        while(s[k] != '\0'){
          n += write(1, &s[k], 1);
           k += 1;
        }
        if (i > nbr) {
            return(-1);
        }
        i += 1;
        write(1,"\n", 1);
    }
    va_end(ap);
    return (n);
}
