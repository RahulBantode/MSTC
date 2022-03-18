/**
 * @file Question_2.c
 * @author Rahul Girish Bantode
 * @brief Determin the value of rs in float
 * @date 2022-01-16
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 3.4;
    float b = 2.0;
    float c = 2.5;
    float d = 9.1;
    float rs;

    rs = a + b + c + d;
    printf("[2.1] rs = %f\n", rs);

    rs = a / b + c / d;
    printf("[2.2] rs = %f\n", rs);

    rs = a * 9 / 5 + 32;
    printf("[2.3] rs = %f\n", rs);

    rs = (a + b) / (c + d);
    printf("[2.4] rs = %f\n", rs);

    rs = ((a + b + c) / 2) * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c);
    printf("[2.5] rs = %f\n", rs);

    rs = ((a + b + c + d) / 2 - a) * ((a + b + c + d) / 2 - b) * ((a + b + c + d) / 2 - c) * ((a + b + c + d) / 2 - d);
    printf("[2.6] rs = %f\n", rs);

    rs = (a + b + c + d) / 4;
    printf("[2.7] rs = %f\n", rs);

    rs = a + b + c + d / 4;
    printf("[2.8] rs = %f\n", rs);

    rs = (-a + b * b - 4 * a * c) / (2 * a);
    printf("[2.9] rs = %f\n", rs);

    rs = (-a - b * b - 4 * a * c) / (2 * a);
    printf("[2.10] rs = %f\n", rs);

    rs = ((((a + b) * c) + d) / c) + a;
    printf("[2.11] rs = %f\n", rs);

    rs = d - d * d / 2 + d * d * d * d / 4 * 3 * 2 * 1;
    printf("[2.12] rs = %f\n", rs);

    rs = (b * b + c * c - a * a) / (2 * b * c);
    printf("[2.13] rs = %f\n", rs);

    exit(0);
}