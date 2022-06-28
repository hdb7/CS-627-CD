/* A program to check whether the first letter of every word 
 * in sentence are capital letter or not and display the result
 */
#include <stdio.h>
#include <ctype.h>

int main() {
  int flag=0;
  char *t = "Hello World Look Joydeep Is Gay";
  //check if first letter of word is Upper case or not
  if(isupper(t[0])) {
    flag=1;
  }
  for(int i=1; t[i]!='\0';i++){
    if(t[i]==' ' && t[i+1]!=' ') {
        if(!isupper(t[i+1])){
          flag=0;
        }
    }
  }
  (flag)?printf("YES\n"):printf("NO\n");
  return 0;
}