#include <stdio.h>

int main() {
	char in[10];
	int a = 0;

	fgets(in, 10, stdin);

	for (int i=1; i<=9; i++)
		a += in[i];
	if (a != 866)
		printf("%i>866", a);
	else 
		printf("Bingo!");
}
