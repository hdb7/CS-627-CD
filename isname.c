/* program to check a given name is starting with alphabet or not*/

#include<stdio.h>
#include<ctype.h>

int main() {
  char *name = "9i Lan Ma"; // NO
  // char *name = "yi Lan Ma"; //YES
  // char *name = "Yi Lan Ma";  //YES
  if(name[0]=='A' || name[0]=='B' || name[0]=='C'|| name[0]=='D'|| name[0]=='E'
    || name[0]=='F'|| name[0]=='G'|| name[0]=='H'|| name[0]=='I'|| name[0]=='J'
    || name[0]=='K'|| name[0]=='L'|| name[0]=='M'|| name[0]=='N'|| name[0]=='O'
    || name[0]=='P'|| name[0]=='Q'|| name[0]=='R'|| name[0]=='S'|| name[0]=='T'
    || name[0]=='U'|| name[0]=='V'|| name[0]=='W'|| name[0]=='X'|| name[0]=='Y'
    || name[0]=='Z'|| name[0]=='a'|| name[0]=='b'|| name[0]=='c'|| name[0]=='d'
    || name[0]=='e'|| name[0]=='f'|| name[0]=='g'|| name[0]=='h'|| name[0]=='i'
    || name[0]=='j'|| name[0]=='k'|| name[0]=='l'|| name[0]=='m'|| name[0]=='n'
    || name[0]=='o'|| name[0]=='p'|| name[0]=='q'|| name[0]=='r'|| name[0]=='s'
    || name[0]=='t'|| name[0]=='u'|| name[0]=='v'|| name[0]=='w'|| name[0]=='x'
    || name[0]=='y'|| name[0]=='z') printf("YES\n");
    else printf("NO\n");
  return 0;
}