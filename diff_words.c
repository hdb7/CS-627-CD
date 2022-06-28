/* A program to find total no. of different words, sentences
 * special symbols in a sentences from a given paragraphs 
 */

#include <stdio.h>
#include <ctype.h>

int main(int args, char **argv) {
  int wordCnt=0;
  int sentCnt=0;
  int symCnt=0;
  char *text = "Hi everyone I'm YilanMa.Nice to meet you!";
  for(int i=0; text[i]!='\0'; i++) {
    if(text[i]==' '||text[i]=='.'&& text[i+1] !=' ')
      wordCnt++;
    if(text[i] == '.')
      sentCnt++;
    if(!isalnum(text[i]))
      symCnt++;
  }
  int nWord = wordCnt+1;
  int nSentence = sentCnt+1;
  int nSpecialSymbol = (symCnt - wordCnt)+1;
  printf("Words: %d\n", nWord);
  printf("Sentences: %d\n", nSentence);
  printf("Special Symbols: %d\n", nSpecialSymbol);
  return 0;
}