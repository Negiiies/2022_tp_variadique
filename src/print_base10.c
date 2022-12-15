#include "dure.h"
void stu_putchar(char c)
{
    write(1, &c, 1);
}
int print_base10(int nb)
{
    int res;
    int count;

    if (nb >= 0) {
        count = nb_len(nb);
        count -= 1;
        while(count >= 0) {
            res = get_digit(nb, count) + '0';
            count -= 1;
            stu_putchar (res);
        }
        return (res);
    }else{
        stu_putchar('-');
        nb = -nb;
        count = nb_len(nb);
        count -= 1;
    }
    while(count >=0) {
        res = get_digit(nb, count) + '0';
        count -= 1;
        stu_putchar(res);
    }
    return (res);
}
