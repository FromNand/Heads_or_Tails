#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(void){
	int i, tmp;
	int count_h = 0, count_t = 0;
	char user_name[100];

	printf("Who are you?\n> ");
	fgets(user_name, 100, stdin);
	user_name[strlen(user_name)-1] = '\0';
	printf("Hello, %s!\n", user_name);

	srand((unsigned int) time(NULL));

	printf("Tossing a coin...\n");
	for(i = 1; i <= 3; i++){
		tmp = rand() & 0x1;
		tmp ? count_h++ : count_t++;
		printf("Round %d: %s\n", i, tmp ? "Heads" : "Tails");
	}
	printf("Heads: %d, Tails: %d\n", count_h, count_t);
	printf(count_h > count_t ? "%s won!\n" : "%s lost!\n", user_name);

	return 0;
}
