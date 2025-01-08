/*lex program to count number of words*/
%{ 
#include<stdio.h> 
#include<string.h> 
int i = 0; 
int j = 0;
%} 

/* Rules Section*/
%% 
([aeiouAEIOU]) {i++;} /* Rule for counting 
						number of words*/
([b-df-hj-np-tv-zB-DF-HJ-NP-TV-Z]) {j++;}
"\n" {printf("Vowels: %d\nConstants: %d\n", i, j); i = 0;j=0;} 
%% 

int yywrap(void){
return 0;
} 

int main() 
{ 
	// The function that starts the analysis 
	yylex(); 

	return 0; 
} 

