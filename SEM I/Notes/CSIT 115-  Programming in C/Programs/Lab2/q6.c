// Program to calculate marks percentage and division

#include<stdio.h>

int main(){
    int marks[5], total = 0;
    float percentage;
    printf("Enter marks obtained in 5 subjects: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
        total += marks[i];//basically total = total + marks[i];
    }
    percentage = (total / 500.0) * 100;
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    switch((int)(percentage / 10)){
        case 10:
        case 9:
            printf("Division: First Division\n");
            break;
        case 8:
         printf("Division: First Division\n");
            break;
        case 7:
            printf("Division: Second Division\n");
            break;
        case 6:
        case 5:
            printf("Division: Third Division\n");
            break;
        default:
            printf("Fail\n");
    }
    return 0;
}