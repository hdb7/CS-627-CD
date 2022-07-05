// A program to copy the content of one file into another file and then
// add more text on it and display the content of the file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIM 255

int main() {
  FILE *file = fopen("/../../Documents/github.com/CS-627-CD/text.txt", "r");
  //get the file size
  fseek(file,0,SEEK_END);
  long fsize = ftell(file);
  fseek(file,0,SEEK_SET);

  void *content = malloc(fsize);
  memset(content,0,fsize);

  fread(content,1,fsize,file);
  fclose(file);
  // copy the content of text.txt to new.txt
  FILE *newfile = fopen("/../../Documents/github.com/CS-627-CD/new.txt", "w");
  fwrite(content,1,fsize,newfile);
  fclose(newfile);

  // append the text to new.txt
  FILE *fp = fopen("/../../Documents/github.com/CS-627-CD/new.txt", "a");
  char *textToappend = " Good Luck fellas";
  fprintf(fp, "%s\n", textToappend);
  fclose(fp);

  // display the content of new file
  FILE *nfp = fopen("/../../Documents/github.com/CS-627-CD/new.txt", "r");
  char buf[MAX_LIM];
  memset(buf,0,MAX_LIM);
  fread(buf,1,MAX_LIM,nfp);
  printf("%s\n", buf);
  fclose(nfp);

  free(content);
  return 0;
}