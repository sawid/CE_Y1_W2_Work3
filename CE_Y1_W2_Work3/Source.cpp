#include <stdio.h>

int main() {
	int n1,n2;
	scanf_s("%d %d", &n1,&n2);
	if (n1 < n2)
	{
		for (int i = n1; i <= n2; i++)
		{
			printf("%d\n", i);
		}
	}
	else if (n2 < n1) {
		for (int i = n1; i >= n2; i--)
		{
			printf("%d\n", i);
		}
	}
	else {
		printf("%d", n1);
	}
	
}