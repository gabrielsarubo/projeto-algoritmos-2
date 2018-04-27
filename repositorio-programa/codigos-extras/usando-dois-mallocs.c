#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 2;

	int *matriz_dd[n];
	matriz_dd[0] = malloc(n * sizeof(int));
	matriz_dd[1] = malloc(n * sizeof(int));

	matriz_dd[0][0] = 100;
	matriz_dd[0][1] = 200;
	matriz_dd[1][0] = 300;
	matriz_dd[1][1] = 400;

	/*printf("&matriz_dd       -> %u\n", &matriz_dd);
	printf("matriz_dd        -> %u\n", matriz_dd);
	printf("&matriz_dd[0]    -> %u\n", &matriz_dd[0]);
	printf("matriz_dd[0]     -> %u\n", matriz_dd[0]);*/
	printf("matriz_dd[0][0]  -> %u\n", matriz_dd[0][0]);
	printf("matriz_dd[0][1]  -> %u\n", matriz_dd[0][1]);
	printf("matriz_dd[1][0]  -> %u\n", matriz_dd[1][0]);
	printf("matriz_dd[1][1]  -> %u\n", matriz_dd[1][1]);

	free(matriz_dd[0]);
	free(matriz_dd[1]);

	return 0;
}