// Program to find the content of text file and display different
// categories of symbols in it.

#include <iostream>
#include <vector>
#include <fstream>

int main(){
  using namespace std;
  vector<char>alphaNum;
  vector<char>specialSymbol;
  vector<char>text;
  char ch=0;

  string filename("test.txt");
  ifstream inpfile(filename);

  if(!inpfile.is_open()){
    cerr<<"Could not open the file !"<<filename;
    return EXIT_FAILURE;
  }

  while(inpfile.get(ch)){
    text.push_back(ch);
  }

  for(auto x: text){
    if(isalnum(x))
      alphaNum.push_back(x);
    else
      specialSymbol.push_back(x);
  }
  cout<<" Alphanumeric: ";
  for(auto a: alphaNum)
    cout << a <<" ";
  cout<<"\n Special Symbols: ";
  for(auto ss: specialSymbol)
    cout << ss <<" ";
  cout<<"\n";
  inpfile.close();
  return 0;
}