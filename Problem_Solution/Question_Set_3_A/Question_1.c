/**
 * @file Question_1.c
 * @author Rahul Girish Bantode
 * @brief Define the value of rs in int
 * @date 13-01-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 3;
    int d = 2;
    int rs;

    rs = a + b - d;
    printf("[1.1] rs = %d\n", rs);

    rs = a - b * d;
    printf("[1.2] rs = %d\n", rs);

    rs = a * c - b;
    printf("[1.3] rs = %d\n", rs);

    rs = a * c + b * d;
    printf("[1.4] rs = %d\n", rs);

    rs = a / c + b * d;
    printf("[1.5] rs = %d\n", rs);

    rs = a * c + b / d;
    printf("[1.6] rs = %d\n", rs);

    rs = a + b * c - d;
    printf("[1.7] rs = %d\n", rs);

    rs = a - b / c + d;
    printf("[1.8] rs = %d\n", rs);

    rs = (a + b) * (c - d);
    printf("[1.9] rs = %d\n", rs);

    rs = (a + b) * c / d;
    printf("[1.10] rs = %d\n", rs);

    rs = ((a + b) * (c - d)) / (a * (b + (c - d) * b));
    printf("[1.11] rs = %d\n", rs);

    rs = (a * (b + c * (d + a))) / (a - (b + (c / d)));
    printf("[1.12] rs = %d\n", rs);

    rs = a + b * c + a / d - b / c + a / 2;
    printf("[1.13] rs = %d\n", rs);

    rs = ((((a + b) * c) + d) / c) + a;
    printf("[1.14] rs = %d\n", rs);

    rs = (-b + b * b - 4 * a * c) / (2 * a);
    printf("[1.15] rs = %d\n", rs);

    rs = (-b - b * b - 4 * a * c) / (2 * a);
    printf("[1.16] rs = %d\n", rs);

    rs = -b + b * b - 4 * a * c / 2 * a;
    printf("[1.17] rs = %d\n", rs);

    rs = -b - b * b - 4 * a * c / 2 * a;
    printf("[1.18] rs = %d\n", rs);

    rs = (a + b) / 2 * (c + d) / 2;
    printf("[1.19] rs = %d\n", rs);

    rs = (a + b + c + d) / 4;
    printf("[1.20] rs = %d\n", rs);

    rs = a + b + c + d / 4;
    printf("[1.21] rs = %d\n", rs);

    rs = (a * d - b * c) / 2;
    printf("[1.22] rs = %d\n", rs);

    rs = 1 - d * d * d / 3 * 2 * 1 + d * d * d * d * d / 5 * 4 * 3 * 2 * 1;
    printf("[1.23] rs = %d\n", rs);

    rs = d - d * d / 2 + d * d * d * d / 4 * 3 * 2 * 1;
    printf("[1.24] rs = %d\n", rs);

    rs = (a * b * c + b * c * a + c * a * b) / 3;
    printf("[1.25] rs = %d\n", rs);

    exit(0);
}