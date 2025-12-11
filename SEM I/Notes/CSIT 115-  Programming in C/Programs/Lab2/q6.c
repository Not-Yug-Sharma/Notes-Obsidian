// Program to calculate marks percentage and division

#include<stdio.h>

int main(){
    float marks[5], total = 0;
    float percentage;
    printf("Enter marks obtained in 5 subjects: ");
    for (int i = 0; i < 5; i++){
        scanf("%f", &marks[i]);
        total += marks[i];//basically total = total + marks[i];
    }
    percentage = (total / 500.0) * 100;
    printf("Total Marks: %d/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 80){
        printf("Division: Distinction\n");
    }
    else if (percentage >= 70){
        printf("Division: First Division\n");
    }
    else if (percentage >= 60){
        printf("Division: Second Division\n");
    }
    else if (percentage >= 50){
        printf("Division: Third Division\n");
    }
    else{
        printf("Result: Fail\n");
    }
    return 0;
}