#include <stdio.h>

#define MAX(x,y) (((x)>(y))?(x):(y))

/*
int tail_recur_find_max(int a[], int size, int last);


int main()
{
    int a[] = {8, 2, 10, 3, 19, 1, 6, 5, 19, 11, 18, 16, 17, 7, 17, 20, 15, 14, 13, 8};
    
    int max = tail_recur_find_max(a, 6, a[0]);
    
    printf("%d", max);

    return 0;
}
*/


extern int tail_recur_find_max(int a[], int size, int partial_max) {
    
    if (size == 1) {
        return MAX(a[0], partial_max);
    }
    
    if (partial_max < a[0]) {
        partial_max = a[0];
    }
    
    return tail_recur_find_max(++a, --size, partial_max);
}
