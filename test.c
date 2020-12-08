#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

int* gradingStudents(int grades_count, int* grades, int* result_count) {

    *result_count = grades_count;
    int* results = (int*)malloc(grades_count * sizeof(int));
    for(int i=0;i<grades_count;i++){
        if(grades[i] > 37 && grades[i] < 100 && (grades[i]%5) > 2){
            results[i] = grades[i] + (5 - (grades[i]%5));
        }
        else{
            results[i] = grades[i];
        }
    }

    return(results);
}

int main()
{
   int grades_count = 11;
   int grade[] = {48,72,99,105,28,57,51,54,84,14,92};
   int *grades = grade;
   int result_count;
   int *result = gradingStudents(grades_count,grade,&result_count);

   for(int ix=0;ix<result_count;ix++){
      printf("\n%d\n", result[ix]);
   }

   return(0);
}
