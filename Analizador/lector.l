%{
#include <stdio.h>
#include <string.h>
%}

%option noyywrap

%%
[ \t]+	;/* Ignorar espacios y tabuladores */

[Ss][Ee][Ll][Ee][Cc][Tt] 	printf("PC: %s\n",yytext);
[Ff][Rr][Oo][Mm] 		printf("PC: %s\n",yytext);
[Ww][Hh][Ee][Rr][Ee] 		printf("PC: %s\n",yytext);

[a-zA-Z][a-zA-Z0-9]*	printf("ID: %s\n",yytext);

=	printf("OPREL: %s\n",yytext);
[<>]	printf("OPREL: %s\n",yytext);
,	printf("SIGNO: %s\n",yytext);
[0-9]+	printf("NUMERO: %s\n",yytext);
.	/* Ignorar espacios y tabuladores */

%%

int main(){
	yylex();
	return 0;
}