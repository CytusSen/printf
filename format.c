#include<stdio.h>
int main() {
	int alter = 20;
	float gewicht = 61.4;
	char initiale = 'C';
	char * name = "Clara";

	printf("Mein alter ist %i\n", alter);
	printf("Mein gewicht sind %.2f kg\n", gewicht);
	printf("Mein Name beginnt mit einem %c\n", initiale);
	printf("Mein Name ist %s\n", name );
	return 0;
}
