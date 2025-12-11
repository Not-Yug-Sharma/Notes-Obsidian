// Program to calculate grade and GPA
#include<stdio.h>

int main(){
    float marks;
    printf("Enter marks obtained in 5 subjects: ");
        scanf("%f", &marks);
    
    if (marks >= 90){
        printf("Grade: A+\nGPA: 4.0\n");
    }
    else if (marks >= 80){
        printf("Grade: A\nGPA: 3.6\n");
    }
    else if (marks >= 70){
        printf("Grade: B+\nGPA: 3.2\n");
    }
    else if (marks >= 60){
        printf("Grade: B\nGPA: 2.8\n");
    }
    else if(marks >= 50){
        printf("Grade: C+\nGPA: 2.4\n");
    }
    else if(marks >= 40){
        printf("Grade: C\nGPA: 2.0\n");
    }
    else if(marks >= 20){
        printf("Grade: D\nGPA: 1.6\n");
    }
    else{
        printf("Result: Fail\n");
    }
    return 0;
}