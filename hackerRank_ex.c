/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {

    int result = 0;
    for(int i = 0; i < arr_rows; i++){
        result = result + (arr[i][i] - arr[i][arr_rows-1-i]);
    }

    return(abs(result));
}

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

// Complete the staircase function below.
void staircase(int n) {
 for(int i=0; i < n; i++){

     for(int x=0;x<n-i-1;x++){
        printf("%c",' ');
     }
     for(int y =0; y<1+i;y++){
        printf("%c",'#');
     }
     printf("\n");
 }

 return;
}

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

/* convert a standard time string to military time.
*  input >> "11:05:44PM"
*  output << "22:05:44"
*  Please either make the string static or allocate on the heap. For example,
*  static char str[] = "hello world";
*  return str;
*
* OR
*
* char* str = "hello world";
* return str;
*
*/
char* timeConversion(char* s) {
   int size = 8;
  char* outputString = (char*)malloc(size * sizeof(char));
   if(s[8] == 'P'){

     int one = s[0] - '0';
     int two = s[1] - '0';
     if(one == 1 && two == 2){
        outputString[0] = '1';
        outputString[1] = '2';
     }
     else{
      outputString[0] = (one + 1) + '0';
      outputString[1] = ((two + 12)%10) + '0';
    }
   }
   else if(s[8] == 'A' && s[0] == '1' && s[1] == '2'){
     outputString[0] = '0';
     outputString[1] = '0';
  }
   else{
     outputString[0] = s[0];
     outputString[1] = s[1];
  }

  for(int i=2;i<size;i++){
     outputString[i] = s[i];
  }

   return(outputString);
}
/*
   Given the value of  for  apples and  oranges, determine how many apples and oranges will fall on Sam's house.
   such that 0 < a(apples tree) < s < t < b (orange tree), t >= Sam's House >= s, for all itegers x,y such that x in Apples and y in Oranges. Positive integers are the right and negative integers are to the left.
*/
void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {

    int appleHits = 0;
    int orangeHits = 0;
    int i;

    for(i=0;i<apples_count;i++){
        if(apples[i] >= (s-a) && apples[i] <= (t-a)){
            appleHits += 1;
        }
    }

    for(i=0;i<oranges_count;i++){
        int x = b + oranges[i];
        if(x >= s && x <= t){
            orangeHits += 1;
        }
    }

    printf("%d\n%d",appleHits,orangeHits);
}
/*
      2 Kangaroos must land on the same space at some point.
      Kangaroos can only move forward.
      Starting points: x1,x2
      Distance jumped: v1,v2
      Number of jumps required: q
*/
char* kangaroo(int x1, int v1, int x2, int v2) {


    if(v1 == v2){
        char* str = "NO";
        return(str);
    }

    else if(((x2-x1)/(v1 -v2)) > 0 && ((x2-x1)%(v1 -v2)) == 0){
        char* str = "YES";
        return(str);
    }

    else{
        char* str = "NO";
        return(str);
    }

}
