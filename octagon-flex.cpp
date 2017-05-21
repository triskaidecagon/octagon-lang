%{
#include <iostream>
int chars = 0;
%}

%%
[a-z-A-Z]+ {chars += strlen(yytext); printf("Found a word!\n", );}
.          {chars++;}
%%

int main(int argc, char const *argv[]) {
  yylex();
  std::cout << chars << "Characters." << '\n';
  return 0;
}
