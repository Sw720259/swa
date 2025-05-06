#include<stdio.h>
int main() {
	int day;
	printf("enter a number(1-3):");
	scanf("%d",&day);
	switch(day) {
case1:
		printf("Monday\n");
		break;
case2:
		printf("Tuesday\n");
		break;
		default:
		printf("Invalid day\n");
		break;
	}
	return 0;
}
