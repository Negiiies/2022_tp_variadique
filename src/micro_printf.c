#include "dure.h"
#include <stdio.h>

int stu_micro_printf(const char *pattern, ...)
{
    va_list ap;
    char *s;
    int i;
    int y;
    int n;
    

    n = 0;
    i = 0;

    va_start(ap, pattern);

    while (pattern[i] != '\0') {
        if (pattern[i] == '%' && pattern[i + 1] =='s') {
            s = va_arg(ap, char*);
            y = 0;
            write(1, &s[y], stu_strlen(s));
            i += 2;
        }
        else if ((pattern[i] == '%' && pattern[i + 1] == '%')){
            s = va_arg(ap, char*);
            y = 0;
            write(1, &s[y]   , stu_strlen(s));
            i += 1;
        }

        n += write(1, &pattern[i], 1);
        i += 1;
    }
    va_end(ap);
    return (n);
}







    /*
        //printf("\ni = %d", i);
            // printf("\ndans boucle i = %d", i);
                // printf("\ni = %d", i);
                i += 2;
                printf("i = %d", i);
        }
        if ((pattern[i] == '%') && (pattern[i + 1] == '%')) {
            }




        
        
        i += 1;
    }
    va_end(ap);
    return (0);
}
    */
