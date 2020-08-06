#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int i, tmp;
	int count_h = 0, count_t = 0;

	srand((unsigned int) time(NULL));

	printf("Tossing a coin...\n");
	for(i = 1; i <= 3; i++){
		tmp = rand() & 0x1;
		tmp ? count_h++ : count_t++;
		printf("Round %d: %s\n", i, tmp ? "Heads" : "Tails");
	}
	printf("Heads: %d, Tails: %d\n", count_h, count_t);

	return 0;
}
