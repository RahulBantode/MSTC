#include <stdio.h>
#include <stdlib.h>

void to_upper(char *p_char);
void mult_by_10(unsigned char *p_uchar);
void add_by_10(short *p_short_num, unsigned short *p_unshort_num);
void sub_by_10(int *n1, unsigned int *un1);
void div_by_10(long int *p_lng_num, unsigned long int *p_ulng_num);
void mult_by_5(long long int *p_lng_lng_num,
               unsigned long long int *p_ulng_lng_num);
void do_half(float *pf_num, double *pd_num);

int main(void)
{
    char c1;
    unsigned char c2;

    short s1;
    unsigned short us1;

    int n1;
    unsigned int un1;

    long int lng_n1;
    unsigned long int u_lng_n1;

    long long int lng_lng_n1;
    unsigned long long int u_lng_lng_n1;

    float f_num;
    double d_num;

    c1 = 'b';
    printf("Before : c1 = %c\n", c1);
    to_upper(&c1);
    printf("After: c1 = %c\n", c1);

    c2 = 4;
    printf("Before : c2 = %hhu\n", c2);
    mult_by_10(&c2);
    printf("After : c2 = %hhu\n", c2);

    s1 = -3437;
    us1 = 49853;
    printf("Before : s1 = %hd .. us1 = %hu\n", s1, us1);
    add_by_10(&s1, &us1);
    printf("After : s1 = %hd .. us1 = %hu\n", s1, us1);

    n1 = -2993;
    un1 = 34983749;
    printf("Before : n1 = %d .. un1 = %u\n", n1, un1);
    sub_by_10(&n1, &un1);
    printf("After : n1 = %d .. un1 = %u\n", n1, un1);

    lng_n1 = -48473342;
    u_lng_n1 = 4903840843;
    printf("Before : lng_n1 = %ld .. u_lng_n1 = %lu\n", lng_n1, u_lng_n1);
    div_by_10(&lng_n1, &u_lng_n1);
    printf("After : lng_n1 = %ld .. u_lng_n1 = %lu\n", lng_n1, u_lng_n1);

    lng_lng_n1 = -984739874938;
    u_lng_lng_n1 = 23983409283028;
    printf("Before : lng_lng_n1 = %lld, u_lng_lng_n1 = %llu\n",
           lng_lng_n1,
           u_lng_lng_n1);
    mult_by_5(&lng_lng_n1, &u_lng_lng_n1);
    printf("Before : lng_lng_n1 = %lld, u_lng_lng_n1 = %llu\n",
           lng_lng_n1,
           u_lng_lng_n1);

    f_num = 3.44;
    d_num = 2938920.29302983;
    printf("Before : f_num = %f .. d_num = %lf\n", f_num, d_num);
    do_half(&f_num, &d_num);
    printf("Before : f_num = %f .. d_num = %lf\n", f_num, d_num);

    exit(0);
}

void to_upper(char *p_char)
{
    if (*p_char >= 97 && *p_char <= 122)
        *p_char = *p_char - 32;
}

void mult_by_10(unsigned char *p_uchar)
{
    *p_uchar *= 10;
}

void add_by_10(short *p_short_num, unsigned short *p_unshort_num)
{
    *p_short_num += 10;
    *p_unshort_num += 10;
}

void sub_by_10(int *n1, unsigned int *un1)
{
    *n1 -= 10;
    *un1 -= 10;
}

void div_by_10(long int *p_lng_num, unsigned long int *p_ulng_num)
{
    *p_lng_num /= 10;
    *p_ulng_num /= 10;
}

void mult_by_5(long long int *p_lng_lng_num,
               unsigned long long int *p_ulng_lng_num)
{
    *p_lng_lng_num *= 5;
    *p_ulng_lng_num *= 5;
}

void do_half(float *pf_num, double *pd_num)
{
    *pf_num /= 2;
    *pd_num /= 2;
}

/* OUTPUT :-
Before : c1 = b
After: c1 = B
Before : c2 = 4
After : c2 = 40
Before : s1 = -3437 .. us1 = 49853
After : s1 = -3427 .. us1 = 49863
Before : n1 = -2993 .. un1 = 34983749
After : n1 = -3003 .. un1 = 34983739
Before : lng_n1 = -48473342 .. u_lng_n1 = 608873547
After : lng_n1 = -4847334 .. u_lng_n1 = 60887354
Before : lng_lng_n1 = -984739874938, u_lng_lng_n1 = 23983409283028
Before : lng_lng_n1 = -4923699374690, u_lng_lng_n1 = 119917046415140
Before : f_num = 3.440000 .. d_num = 2938920.293030
Before : f_num = 1.720000 .. d_num = 1469460.146515

*/