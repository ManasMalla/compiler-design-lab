%{
int pos_int = 0, neg_int = 0, pos_frac = 0, neg_frac = 0;
%}

%%

[+]?[0-9]+     { pos_int++; }             // Match positive integers
-[0-9]+        { neg_int++; }             // Match negative integers
[+]?[0-9]+\.[0-9]+ { pos_frac++; }        // Match positive fractions
-[0-9]+\.[0-9]+ { neg_frac++; }           // Match negative fractions

%%

int main() {
    yylex();
    printf("Positive Integers: %d\nNegative Integers: %d\n", pos_int, neg_int);
    printf("Positive Fractions: %d\nNegative Fractions: %d\n", pos_frac, neg_frac);
    return 0;
}
int yywrap() { return 1; }
