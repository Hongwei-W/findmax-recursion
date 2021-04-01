#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tail_recur.c"
#include "recur.c"

void find_max(int *arr, int n, char *argv);

int main(int argc, char *argv[]) {
    int n = atol(argv[1]);
	int i, aa;
	int upper_range = (int) atol(argv[3]);
	int *arr = (int*) malloc(n * sizeof(int));

	if (arr == NULL) {
		exit(-1);
	}

	srand((unsigned)time(NULL));

	for (i = 0; i < n; i++){
		aa = (unsigned int)rand() % (upper_range*2+1) + (-upper_range);
		arr[i] = aa;
	}

	/*
	for (i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
	*/
	


	find_max(arr, n, argv[2]);

	free(arr);

	return 0;
}

void find_max(int arr[], int n, char *argv) {

	int result;
	clock_t begin, end;
	
	if (!(strcmp("recur", argv))) {
		begin = clock();

		result = recur_find_max(arr, n);

		end = clock();
	}

	
	if (!(strcmp("tail_recur", argv))) {
		begin = clock();

		result = tail_recur_find_max(arr, n, arr[0]);

		end = clock();
	}

	double time_spent = (double)(end - begin);

	printf("%d\n", result);
	printf("Time used: %f\n", time_spent);


}
