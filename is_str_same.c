// program to check whether two different strings are same or not
// and display their difference.

#include <stdio.h>
#include <string.h>

int main() {
  char *s1 = "aaaabaa";
  char *s2 = "aaabaa";
  int ok=0;
  for(int i=0; s1[i]!='\0'&& s2[i]!='\0';i++){
    if(strcmp(s1,s2)==0){
      ok=1;
    } else {
      ok=0; break;
    }
  }
  (ok)?printf("YES\n"):printf("NO\n");
  return 0;
}