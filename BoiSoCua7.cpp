#include <stdio.h>

void BoiSoCua7()
{
	printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");

	for (int i = 14; i < 100; i += 7) {
		printf("%d ", i);
	}

	printf("\n");
}

int main()
{
	BoiSoCua7();
	return 0;
}