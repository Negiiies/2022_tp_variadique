#include <stdio.h>

int stu_micro_printf(const char *pattern, ...);
int main(void)
{
    char *str;
    int i;

    str = "Mercedes";
    i = stu_micro_printf("bonjour je veux %%, merci\n", str);
    printf("%d\n", i);
}
