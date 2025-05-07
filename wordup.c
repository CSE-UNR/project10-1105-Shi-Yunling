// Yunling Shi
// 05/07/2025
// word up

#include <stdio.h>

#define FILENAME "mystery.txt"
#define NUM_ROWS 15
#define NUM_COLS 60

int loadfile(char words[][NUM_COLS]);

int main(){
	int size,guess; 
	char words[NUM_ROWS][NUM_COLS]; 
	char input; 
	
	size = loadfile(words); 
	guess == 5;
do{	printf("GUESS %d! Enter your guess: ", guess);
	scanf("%c", &input);
	if (input){
	printf("Your gress must be 5 letters long.\n");
	printf("Please try again: ");
	}
	else{
	for(int index = 0; index < size; index++){
		if(words[index][0] == input ){
			printf("%s\n", words[index]);
		}
	}
	}
}while (guess == 5);
	return 0;
}

int loadfile(char words[][NUM_COLS]){
	FILE* fptr = fopen(FILENAME, "r");
	if(fptr == NULL){
		printf("nope\n");
	}
		
	int size = 0;
	while(fscanf(fptr, "%s", words[size]) == 1){
		size++;
	}
	fclose(fptr);
	return size;
}

