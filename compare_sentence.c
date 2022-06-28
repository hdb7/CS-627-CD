/* A program to compare two different sentences and display their differences */
#include <stdio.h>
#include <ctype.h>

struct Sent {
  int wc;
  int sc;
  int ssc;
};
struct Sent sentenceProperty(char *s){
  struct Sent snt;
  int wordCnt=0;
  int sentCnt=0;
  int symCnt=0;
  for(int i=0; s[i]!='\0'; i++) {
    if(s[i]==' '||s[i]=='.'&& s[i+1] !=' ')
      wordCnt++;
    if(s[i] == '.')
      sentCnt++;
    if(!isalnum(s[i]))
      symCnt++;
  }
  int nWord = wordCnt+1;
  int nSentence = sentCnt+1;
  int nSpecialSymbol = (symCnt - wordCnt)+1;
  // printf("Words: %d\n", nWord);
  // printf("Sentences: %d\n", nSentence);
  // printf("Special Symbols: %d\n", nSpecialSymbol);
  snt.sc = nSentence;
  snt.wc = nWord;
  snt.ssc = nSpecialSymbol;
  return snt;
}

int main() {
  char *t1 = "Hello World!";
  char *t2 = "World is at danger!";
  // sentenceProperty(t1);
  // sentenceProperty(t2);
  struct Sent sentence1, sentence2;
  sentence1 = sentenceProperty(t1);
  sentence2 = sentenceProperty(t2);
  // printf("%d\n", sentence1.wc);
  // printf("%d\n", sentence2.wc);
  if(sentence1.sc == sentence2.sc 
    && sentence1.wc == sentence2.wc 
    && sentence1.ssc == sentence2.ssc) {
      printf("Two inputed sentences are equal !\n");
    } 
    else if(sentence1.sc==sentence2.sc 
              || sentence1.wc==sentence2.wc 
              && sentence1.ssc != sentence2.ssc){
              printf("Special Symbols doesnot match!");
    } else if(sentence1.sc==sentence2.sc
              || sentence1.ssc==sentence2.ssc
              && sentence1.wc != sentence2.wc){
                printf("Words are different !\n");
      }else {
        printf("Two Sentence are different !");
      }
  return 0;
}