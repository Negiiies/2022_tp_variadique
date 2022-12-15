#ifndef DURE_H_
#define DURE_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
int stu_vputs(unsigned int nbr, ...);
unsigned int stu_strlen(const char *str);
int get_digit(int nb, int index);
int nb_len(int nb);
int print_base10(int nb);
#endif /*DURE_H_*/
