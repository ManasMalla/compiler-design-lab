%{
int simple = 1; // Assume sentence is simple
%}

%%

[,.!?;]        { simple = 0; }            // Match punctuation that indicates a compound sentence
and|but|or     { simple = 0; }            // Match conjunctions indicating compound sentences
\n             { // Newline indicates end of input
                if (simple)
                    printf("The sentence is Simple.\n");
                else
                    printf("The sentence is Compound.\n");
                simple = 1;  // Reset for next input
              }

%%

int main() {
    printf("Enter a sentence (Press ENTER to analyze):\n");
    yylex();
    return 0;
}
int yywrap() { return 1; }
