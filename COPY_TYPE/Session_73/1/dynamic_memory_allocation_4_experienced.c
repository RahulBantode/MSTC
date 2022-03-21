#include <stdio.h>
#include <stdlib.h>

void input(int *p_arr, int size_of_array);
void sort(int *p_arr, int size_of_array);
void output(int *p_arr, int size_of_array, char *msg);

int main(void)
{
    int size_of_array = 0;
    int *p_arr = 0;

    printf("Enter the size of array : ");
    scanf("%d", &size_of_array);

    if (size_of_array <= 0)
    {
        puts("Invalid array size");
        exit(-1);
    }

    p_arr = malloc(size_of_array * sizeof(int));

    if (p_arr == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    input(p_arr, size_of_array);
    output(p_arr, size_of_array, "Before Sort : ");
    sort(p_arr, size_of_array);
    output(p_arr, size_of_array, "After Sort : ");

    free(p_arr);
    p_arr = 0;

    exit(0);
}

void input(int *p_arr, int size_of_array)
{
    int i;
    for (i = 0; i < size_of_array; ++i)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", p_arr + i);
    }
}

void sort(int *p_arr, int size_of_array)
{
    int i;
    int j, key;

    for (j = 0; j < size_of_array; ++j)
    {
        key = p_arr[j];
        i = j - 1;

        while (i > -1 && p_arr[i] > key)
        {
            p_arr[i + 1] = p_arr[i];
            i = i - 1;
        }
        p_arr[i + 1] = key;
    }
}

void output(int *p_arr, int size_of_array, char *msg)
{
    int i;
    if (msg != 0)
        puts(msg);

    for (i = 0; i < size_of_array; ++i)
        printf("*(p_arr + %d):%d\n", i, *(p_arr + i));
}

/* OUTPUT :-
    Enter the size of array : 5
    Enter the element 1 : 100
    Enter the element 2 : 2
    Enter the element 3 : 534
    Enter the element 4 : 12
    Enter the element 5 : 43
    Before Sort :
    *(p_arr + 0):100
    *(p_arr + 1):2
    *(p_arr + 2):534
    *(p_arr + 3):12
    *(p_arr + 4):43
    After Sort :
    *(p_arr + 0):2
    *(p_arr + 1):12
    *(p_arr + 2):43
    *(p_arr + 3):100
    *(p_arr + 4):534
*/