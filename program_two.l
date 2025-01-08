%{
int chars = 0, words = 0, spaces = 0, lines = 0;
%}

%%

[ \t]          { spaces++; chars++; }    // Match spaces or tabs and increment space and character count
\n             { lines++; chars++; }     // Match newlines and increment line and character count
\w+            { words++; }              // Match words (consecutive alphanumerics)
.              { chars++; }              // Match any character and increment character count

%%

int main() {
    yylex();
    printf("Characters: %d\nWords: %d\nSpaces: %d\nLines: %d\n", chars, words, spaces, lines);
    return 0;
}
int yywrap() { return 1; }
