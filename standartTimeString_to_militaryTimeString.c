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
