
#include "dure.h"
int stu_vputs(unsigned int nbr, ...);
int main(void)
{
    int i;
    i = stu_vputs(4, "je","suis","ton", "père");
    printf("%d\n", i);
    return 0;
}
