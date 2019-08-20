#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

	char response[7][50] = {"Ask again later\n", "I do not have time for this\n", "No\n", "No\n", "Yes\n", "Maybe\n", "Most likely not anytime soon\n"};
	char trash;
	srand(time(0));
	printf("What's your question? ");
	
	scanf(" %s", trash);
	int choice = rand() % 8;
	printf("%s.", response[choice]);
	return 0;
}
