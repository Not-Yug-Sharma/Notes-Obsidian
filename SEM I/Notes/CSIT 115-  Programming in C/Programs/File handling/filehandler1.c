#include<stdio.h>
FILE *fp;
struct dob{
    int day;
    int month;
    int year;
};
struct marks{
    float math;
    float phys;
    float english;
    float it;
    float programming;
    float total;
};
struct student{
    int id;
    char name[50];
    struct dob dob;
    struct marks marks;
};

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for(int i=0; i<n; i++){
        printf("Enter details for student %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &s[i].id);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Marks in Math, Physics, English, IT, Programming: ");
        scanf("%f %f %f %f %f", &s[i].marks.math, &s[i].marks.phys, &s[i].marks.english, &s[i].marks.it, &s[i].marks.programming);
        s[i].marks.total = s[i].marks.math + s[i].marks.phys + s[i].marks.english + s[i].marks.it + s[i].marks.programming;
        printf("Date of Birth (day month year): ");
        scanf("%d %d %d", &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
    }

    fp = fopen("students.txt", "w");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    for(int i=0; i<n; i++){
        fprintf(fp, "ID: %d\n", s[i].id);
        fprintf(fp, "Name: %s\n", s[i].name);
        fprintf(fp, "Marks - \n\tMath: %.2f/30, Physics: %.2f/30, English: %.2f/30, IT: %.2f/30, Programming: %.2f/30, \n\tTotal: %.2f/150\n", s[i].marks.math, s[i].marks.phys, s[i].marks.english, s[i].marks.it, s[i].marks.programming, s[i].marks.total);
        fprintf(fp, "Date of Birth: %02d/%02d/%04d\n", s[i].dob.day, s[i].dob.month, s[i].dob.year);
        fprintf(fp, "\n");
    }

    fclose(fp);
    return 0;
}
