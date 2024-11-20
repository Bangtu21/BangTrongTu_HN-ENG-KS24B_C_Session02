#include<stdio.h>
int main(){
	int number1 = 3;
	int number2 = 4;
	int total = number1 + number2;
	int sub = number1 - number2;
	int mu = number1 * number2;
	float divi = (float)number1 / number2;
	printf("Tong cua hai so %d va %d la %d\n", number1, number2, total);
	printf("Hieu cua hai so %d va %d la %d\n", number1, number2, sub);
	printf("Tich cua hai so %d va %d la %d\n", number1, number2, mu);
	printf("Thuong cua hai so %d va %d la %.2f\n", number1, number2, divi);
	return 0;
}
