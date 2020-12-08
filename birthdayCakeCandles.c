// Complete the birthdayCakeCandles function below.
//AKA, count how many times the largest number occurs
int birthdayCakeCandles(int ar_count, int* ar) {

    int answer_arr[2] = {0,0};

    for(int i=0;i<ar_count;i++){
        if(ar[i] > answer_arr[0]){
            answer_arr[0] = ar[i];
            answer_arr[1] = 0;
        }

        if(ar[i] == answer_arr[0]){
            answer_arr[1] += 1;
        }
    }

    return(answer_arr[1]);
}
