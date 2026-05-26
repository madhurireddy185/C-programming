#include <stdio.h>
float addition4(float num1, float num2, float num3, float num4) {
    return num1 + num2 + num3 + num4;
}

float subtraction4(float num1, float num2, float num3, float num4) {
    return num1 - num2 - num3 - num4;
}

float multiply4(float num1, float num2, float num3, float num4) {
    return num1 * num2 * num3 * num4;
}

float division4(float num1, float num2, float num3, float num4) {
    return num1 / num2 / num3  / num4;
}
float power((float num1, float num2, float num3, float num4){
	return pow(num1+num2,2)+pow(num3+num4,2);
}
int main() {
    float num1,num2,num3,num4;

    printf("Enter 4 float numbers: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    printf("Addition = %.2f\n", addition4(num1, num2, num3, num4));
    printf("Subtraction = %.2f\n", subtraction4(n1, n2, n3, n4));
    printf("Multiplication = %.2f\n", multiply4(n1, n2, n3, n4));
    printf("Division = %.2f\n", division4(n1, n2, n3, n4));
    printf("Power=%.2f\n,power"(num1, num2, num3, num4));
    return 0;
}
