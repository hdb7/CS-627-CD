/* program to check whether given input in number or not*/

#include<stdio.h>
#include <ctype.h>

int main() {
  //tests
  // char *tt = "eele"; // NO
  char *tt = "12e34"; // NO
  // char *tt = "1234"; //YES
  int flag=0;
  for(int i=0; tt[i]!=0;i++){
    if(isdigit(tt[i])) flag=1;
    else {
      flag=0; break;
    } 
  }
  (flag)?printf("YES\n"):printf("NO\n");
  return 0;
}