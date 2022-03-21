#include <stdio.h>
#include <stdlib.h>

void ptr_to_char(void);
void ptr_to_short(void);
void ptr_to_int(void);
void ptr_to_long_int(void);
void ptr_to_long_long_int(void);
void ptr_to_float(void);
void ptr_to_double(void);

int main(void)
{
    ptr_to_char();
    ptr_to_short();
    ptr_to_int();
    ptr_to_long_int();
    ptr_to_long_long_int();
    ptr_to_float();
    ptr_to_double();

    exit(0);
}

void ptr_to_char(void)
{
    char *cp = 0;
    unsigned char *u_cp = 0;

    char c;
    unsigned char uc;

    cp = &c;
    u_cp = &uc;

    cp = malloc(sizeof(char));            /* allocaate 1 byte on heap */
    u_cp = malloc(sizeof(unsigned char)); /* allocate 1 byte on heap */

    if (cp == 0 || u_cp == 0)
    {
        puts("memory allocation failed");
        exit(-1);
    }

    *cp = '$';
    *u_cp = 201;

    printf("*cp = %c | *u_cp = %hhu\n", *cp, *u_cp);

    free(cp);
    cp = 0;
    free(u_cp);
    u_cp = 0;
}

void ptr_to_short(void)
{
    short *p1 = 0;
    unsigned short *p2 = 0;

    p1 = malloc(sizeof(short));          /*allocate 2 byte on heap */
    p2 = malloc(sizeof(unsigned short)); /*allocate 2 byte on heap */

    if (p1 == 0 || p2 == 0)
    {
        puts("memory allocation failed");
        exit(-1);
    }

    *p1 = -242;
    *p2 = 90234;

    printf("*p1 = %hd | *p2 = %hu\n", *p1, *p2);

    free(p1);
    p1 = 0;
    free(p2);
    p2 = 0;
}

void ptr_to_int(void)
{
    int *p1 = 0;
    unsigned int *p2 = 0;

    p1 = malloc(sizeof(int));          /*allocate 4 bytes on heap */
    p2 = malloc(sizeof(unsigned int)); /*allocate 4 bytes on heap */

    if (p1 == 0 || p2 == 0)
    {
        puts("memory allocation failed");
        exit(-1);
    }

    *p1 = -3498309;
    *p2 = 948384;

    printf("*p1 = %d | *p2 = %u\n", *p1, *p2);

    free(p1);
    p1 = 0;
    free(p2);
    p2 = 0;
}

void ptr_to_long_int(void)
{
    long int *p1 = 0;
    unsigned long int *p2 = 0;

    p1 = malloc(sizeof(long int));          /*allocate 4 bytes on heap */
    p2 = malloc(sizeof(unsigned long int)); /*allocate 4 bytes on heap */

    if (p1 == 0 || p2 == 0)
    {
        puts("memory allocation failed");
        exit(-1);
    }

    *p1 = -958093485;
    *p2 = 340938048;

    printf("*p1 = %ld | *p2 = %lu\n", *p1, *p2);

    free(p1);
    p1 = 0;
    free(p2);
    p2 = 0;
}

void ptr_to_long_long_int(void)
{
    long long int *p1 = 0;
    unsigned long long int *p2 = 0;

    p1 = malloc(sizeof(long long int));          /*allocate 8 bytes on heap */
    p2 = malloc(sizeof(unsigned long long int)); /*allocate 8 bytes on heap */

    if (p1 == 0 || p2 == 0)
    {
        puts("memory allocation failed");
        exit(-1);
    }

    *p1 = -398409384903;
    *p2 = 289740893274;

    printf("*p1 = %lld | *p2 = %llu\n", *p1, *p2);

    free(p1);
    p1 = 0;
    free(p2);
    p2 = 0;
}

void ptr_to_float(void)
{
    float *pf = 0;

    pf = malloc(sizeof(float)); /* allocate 4 bytes on heap */

    if (pf == 0)
    {
        puts("memory allocation failed");
        exit(-1);
    }

    *pf = 493.434;

    printf(" *pf = %f\n", *pf);

    free(pf);
    pf = 0;
}

void ptr_to_double(void)
{
    double *pd = 0;

    pd = malloc(sizeof(double)); /* allocate 8 bytes on heap */

    if (pd == 0)
    {
        puts("memory allocation failed");
        exit(-1);
    }

    *pd = 40985.293489032;

    printf("*pd = %lf\n", *pd);

    free(pd);
    pd = 0;
}

/* OUTPUT :-
 *cp = $ | *u_cp = 201
 *p1 = -242 | *p2 = 24698
 *p1 = -3498309 | *p2 = 948384
 *p1 = -958093485 | *p2 = 340938048
 *p1 = -398409384903 | *p2 = 289740893274
 *pf = 493.433990
 *pd = 40985.293489
 */