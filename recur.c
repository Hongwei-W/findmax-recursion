#include <stdio.h>

#define MAX(x,y) (((x)>(y))?(x):(y))

// int find_max(int a[], int size);
/*
int main()
{
    int a[] = {8, 10, 4, -6, 3, -7};
    
    int max = find_max(a, 6);
    
    printf("%d", max);

    return 0;
}
*/

extern int recur_find_max(int a[], int size) {
    
    if (size == 1) {
        return a[0];
    }

    int partial_max = recur_find_max(++a, --size);
    
    return MAX(a[0], partial_max);
    
}