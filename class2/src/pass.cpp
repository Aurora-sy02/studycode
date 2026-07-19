#include"pass.h"
bool isPass(int num) {
	return num >= 60;
}

int passmember(int num1, int num2, int num3) {
	int count = 0;
	if (isPass(num1)) count++;
	if (isPass(num2)) count++;
	if (isPass(num3)) count++;
	return count;
}