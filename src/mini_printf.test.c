#include "dure.h"

int stu_mini_printf(const char *pattern, ...);
int main(void)
{
    //char *str;
    int i;

    //str = "1 2 3 4 5";
    i = stu_mini_printf("bonjour je veux %dg de coque, merci\n", 145);
    printf("%d\n", i);
}
