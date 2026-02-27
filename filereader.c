#include <stdio.h>
#include <stdlib.h>

extern int filereader(int *arr, int count);

int main(int argc, char *argv[]) {

    int count;       /* holds # of integers in the file */

    /* Open the file \ */
    FILE *fp = fopen(argv[1], "r");

    /* Read the first line */
    fscanf(fp, "%d", &count);

    /* create an array with size of text file elements */
    int *arr = (int *)malloc(count * sizeof(int));

    /* Read each number into the array */
    for (int i = 0; i < count; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    /* Close the file*/
    fclose(fp);

    /* Call the assembly function */
    int result = filereader(arr, count);

    /* Print the result */
    printf("Sum = %d\n", result);

    /* Free the array */
    free(arr);

    return 0;
}