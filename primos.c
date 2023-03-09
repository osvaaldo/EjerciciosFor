#include <stdio.h>

int main ()
{
	printf("Los numeros primos son: \n");
	
	int i, j , primo;
	for (i = 2; i < 50; ++i) {
		primo = 1; 
		for (j = 2; j < i; ++j) {
			if (i % j == 0) {
				primo = 0;
			}
		}
		if (primo) {
			printf("%d ", i);
		}
	}
	return 0;
}
