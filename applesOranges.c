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
