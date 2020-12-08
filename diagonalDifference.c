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
