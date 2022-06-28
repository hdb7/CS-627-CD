/* Program that will display different token from a given if else */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isop(char ch){
  if(ch == '+' || ch == '-' || ch == '*' ||
     ch == '/' || ch == '>' || ch == '<' ||
     ch == '=')
      return 1;
    return 0;
}
int isdelim(char ch){
  if(ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
    ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
    ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
    ch == '[' || ch == ']' || ch == '{' || ch == '}')
      return 1;
    return 0;
}
int validIdentifier(char* str)
{
  if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
      str[0] == '3' || str[0] == '4' || str[0] == '5' ||
      str[0] == '6' || str[0] == '7' || str[0] == '8' ||
      str[0] == '9' || isdelim(str[0]) == 1)
      return 0;
  return 1;
}
int isKeyword(char *s){
  if(!strcmp(s,"if")||!strcmp(s,"else")||!strcmp(s,"break")||!strcmp(s,"continue")) { return 1;}
  return 0;

}
char* subString(char* str, int left, int right)
{
  int i;
  char* subStr = (char*)malloc(sizeof(char) * (right - left + 2));
  for (i = left; i <= right; i++)
      subStr[i - left] = str[i];
  subStr[right - left + 1] = '\0';
  return (subStr);
}
void parser(char *s) {
  int l=0,r=0;
  int len=strlen(s);
  while(r<=len&&l<=r){
    if(isdelim(s[r])==0)
      r++;
    if(isdelim(s[r]==1&&l==r)){
      if(isop(s[r]==1)){
        printf("'%c'is an operator", s[r]);
      }
      r++; l=r;
    }else if(isdelim(s[r]==1)&&l!=r||(r==len&&l!=r)){
      char* substr=subString(s,l,r-1);
      if(isKeyword(substr)==1) printf("'%s' is keyword", substr);
      if(validIdentifier(substr)==1&&isdelim(s[r-1]==0)) printf("'%s' is a valid identifier", substr);
      if(validIdentifier(substr)==0&&isdelim(s[r-1]==0)) printf("'%s' is not a valid identifier", substr);
      l=r;
    }
  }
  return;
}
int main() {
  char *test = "if(a>b) {m=b} else {m=a}; ";
  int len=strlen(test);
  // printf("%d\n", len);
  parser(test);
  return 0;
}