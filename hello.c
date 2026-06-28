#include<stdio.h>

int main (){

    float num1, num2, result;
    char op;

    printf("Enter the First Number:");
    scanf("%f", &num1);

    printf("Choose a Operator (+, -, *, /):");
    scanf(" %c", &op);

    printf("Enter the Second Number:");
    scanf("%f", &num2);

    if(op == '+'){
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    } else if (op == '-'){
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    } else if (op == '*'){
        result = num1 * num2;
        printf("Result = %.2f\n", result);
    } else if (op == '/'){
        if (num2 != 0){
        result = num1 / num2;
        printf("Result = %.2f\n", result);
    } else {
        printf("Error! Cannot be Divided by 0");
        } }else {
            printf("Invalid Operator!");
        }



    return 0;
}