#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[30];
	int b,x;
	scanf("%s", a);
	b = strlen(a);
	x = b / 3;
	if (b % 3 == 0) {
		x--;
	}
	b += x;
	char B[200];
	int i = strlen(a) - 1, j = b - 1,num=0;
	while (i >= 0) {
		if (num % 3 == 0 && num != 0) 
			B[j--] = ',';
		
		B[j--] = a[i--];
		num++;
	}
	B[b] = '\0';
	printf("%s", B);
	return 0;
}