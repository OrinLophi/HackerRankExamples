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
