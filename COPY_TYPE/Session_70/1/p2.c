#include <stdio.h>
#include <stdlib.h>

void to_upper(char *p_char);
void mult_by_10(unsigned char *p_uchar);
void add_by_10(short *p_short_num, unsigned short *p_unshort_num);
void sub_by_10(int *p_lng_num, unsigned long int *p_ulng_num);
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

    c1 = 'r';
    printf("Before call:c1 = %c\n", c1);
    to_upper(&c1);
    printf("After call:c1 = %c\n", c1);

    c2 = 3;
    printf("Before call:c2 = %hhu\n", c2);
    mult_by_10(&c2);
    printf("After call:c2 = %hhu\n", c2);

    s1 = -3453;
    us1 = 4567;
    printf("Before call:s1=%hd, us1=%hu\n", s1, us1);
    add_by_10(&s1, &us1);
    printf("After call:s1=%hd, us1=%hu\n", s1, us1);

    n1 = -1000;
    un1 = 389759845;
    printf("Before call:n1 = %d, un1 = %u\n", n1, un1);
    sub_by_10(&n1, &un1);
    printf("After call:n1 = %d, un1 = %u\n", n1, un1);

    lng_n1 = -3789273;
    u_lng_n1 = 387985793;
    printf("Before call:lng_n1 = %ld, u_lng_n1 = %lu", lng_n1, u_lng_n1);
    div_by_10(&lng_n1, &u_lng_n1);
    printf("After call:n1 = %ld, u_lng_n1 = %lu\n", lng_n1, u_lng_n1);

    lng_lng_n1 = -384789374;
    u_lng_lng_n1 = 38499032840;
    printf("Before call:lng_lng_n1 = %lld, u_lng_lng_n1 = %llu\n",
           lng_lng_n1,
           u_lng_lng_n1);
    mult_by_5(&lng_lng_n1, &u_lng_lng_n1);
    printf("After call:lng_lng_n1 = %lld, u_lng_lng_n1 = %llu\n",
           lng_lng_n1,
           u_lng_lng_n1);

    f_num = 22.7;
    d_num = 92383238.293802980;
    printf("Bfore call:f_num = %f, d_num = %lf\n", f_num, d_num);
    do_half(&f_num, &d_num);
    printf("After call:f_num = %f , d_num = %lf\n", f_num, d_num);

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

void sub_by_10(int *p_lng_num, unsigned long int *p_ulng_num)
{
    *p_lng_num -= 10;
    *p_ulng_num -= 10;
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
Before call:c1 = r
After call:c1 = R
Before call:c2 = 3
After call:c2 = 30
Before call:s1=-3453, us1=4567
After call:s1=-3443, us1=4577
Before call:n1 = -1000, un1 = 389759845
After call:n1 = -1010, un1 = 389759835
Before call:lng_n1 = -3789273, u_lng_n1 = 387985793After call:n1 = -378927, u_lng_n1 = 38798579
Before call:lng_lng_n1 = -384789374, u_lng_lng_n1 = 38499032840
After call:lng_lng_n1 = -1923946870, u_lng_lng_n1 = 192495164200
Bfore call:f_num = 22.700001, d_num = 92383238.293803
After call:f_num = 11.350000 , d_num = 46191619.146901
*/