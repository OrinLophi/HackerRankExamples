// Complete the plusMinus function below.
void plusMinus(int arr_count, int* arr) {

    double result[3] = {0,0,0};
    for(int i; i<arr_count;i++){

        if(arr[i] > 0){ result[0] += 1;}
        else if(arr[i] < 0){result[1] += 1;}
        else{result[2] += 1;}
    }

    printf("%0.6f\n%0.6f\n%0.6f\n", (result[0]/arr_count), (result[1]/arr_count), (result[2]/arr_count));

    return;
}
