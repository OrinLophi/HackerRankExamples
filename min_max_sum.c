//Min - Max sum (64bit solution required)
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n) {
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
void miniMaxSum(int arr_count, int* arr) {

    long int answer[2] = {0,0};
    bubbleSort(arr, arr_count);
    for(int i = 0; i<arr_count-1; i++){
        answer[0] += arr[i];
    }

    for(int i = 1; i<arr_count; i++){
        answer[1] += arr[i];
    }

    printf("%ld %ld", answer[0], answer[1]);
}
