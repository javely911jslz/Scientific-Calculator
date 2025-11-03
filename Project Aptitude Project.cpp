#include <stdio.h>
#include <math.h>
#define PI 3.14159
void add();
void subtract();
void multiply();
void divide();
void power();
void root();
void sine();
void cosine();
void tangent();
void logarithm();
void exponential();
int main() {
int choice;
printf("===== Scientific Calculator =====\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Power\n");
printf("6. Root\n");
printf("7. Sine\n");
printf("8. Cosine\n");
printf("9. Tangent\n");
printf("10. Logarithm\n");
printf("11. Exponential\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1: add(); break;
case 2: subtract(); break;
case 3: multiply(); break;
case 4: divide(); break;
case 5: power(); break;
case 6: root(); break;
case 7: sine(); break;
case 8: cosine(); break;
case 9: tangent(); break;
case 10: logarithm(); break;
case 11: exponential(); break;
default:
printf("Invalid choice\n");
}
return 0;
}
void add() {
float num1, num2, result;
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
result = num1 + num2;
printf("Result: %f\n", result);
}
void subtract() {
float num1, num2, result;
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
result = num1 - num2;
printf("Result: %f\n", result);
}
void multiply() {
float num1, num2, result;
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
result = num1 * num2;
printf("Result: %f\n", result);
}
void divide() {
float num1, num2, result;
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
if (num2 != 0) {
result = num1 / num2;
printf("Result: %f\n", result);
} else {
printf("Error: Division by zero\n");
}
}
void power() {
float num1, num2, result;
printf("Enter base and exponent: ");
scanf("%f %f", &num1, &num2);
result = pow(num1, num2);
printf("Result: %f\n", result);
}
void root() {
float num, result;
printf("Enter a number: ");
scanf("%f", &num);
result = sqrt(num);
printf("Result: %f\n", result);
}
void sine() {
float num, result;
printf("Enter a number (in radians): ");
scanf("%f", &num);
result = sin(num);
printf("Result: %f\n", result);
}
void cosine() {
float num, result;
printf("Enter a number (in radians): ");
scanf("%f", &num);
result = cos(num);
printf("Result: %f\n", result);
}
void tangent() {
float num, result;
printf("Enter a number (in radians): ");
scanf("%f", &num);
result = tan(num);
printf("Result: %f\n", result);
}
void logarithm() {
float num, result;
printf("Enter a number: ");
scanf("%f", &num);
if (num > 0) {
result = log(num);
printf("Result: %f\n", result);
} else {
printf("Error: Logarithm of non-positive number is undefined\n");
}
}
void exponential() {
float num, result;
printf("Enter a number: ");
scanf("%f", &num);
result = exp(num);
printf("Result: %f\n", result);
}