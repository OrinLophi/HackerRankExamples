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
