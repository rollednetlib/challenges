#include <stdio.h>


int main(){
	write(1,"What is the quote? ", 20);
	char quote[256];
	fgets(quote, sizeof(quote), stdin);
	// Read from stdin the size of quote to quote
	strtok(quote, "\n");
	// Remove the trailing newline
	
	write(1,"who said it? ", 14);
	char author[256];
	fgets(author, sizeof(author), stdin);
	strtok(author,"\n");
	
	printf("%s says, \"%s\"\n", author, quote);
	return 0;
}
