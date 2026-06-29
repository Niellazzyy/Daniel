#include<stdio.h>

int main (){

    float prelim, midterms, finals, average;

    printf("Enter your Prelim Grade:");
    scanf("%f", &prelim);

    printf("Enter your Midterms Grade:");
    scanf("%f", &midterms);

    printf("Enter your Final Grades:");
    scanf("%f", &finals);

    average = (prelim + midterms + finals) / 3;

    printf("Prelim Grade = %.2f\n", prelim);
    printf("Midterms Grade = %.2f\n", midterms);
    printf("Final Grade = %.2f\n", finals); 
    printf("Average = %.2f\n", average);

    if(average >= 95){
        printf("Status = With High Honors ");
    } else if (average >= 90){
        printf("Status = With Honors");
    } else if (average >= 85){
        printf("Status = Achievers");
    } else {
        printf("No Awards");
    }


    return 0;
}