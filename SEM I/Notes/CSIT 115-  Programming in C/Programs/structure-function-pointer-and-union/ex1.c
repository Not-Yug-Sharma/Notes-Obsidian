#include<stdio.h>
struct marks{
    float math;
    float phys;
    float english;
    float it;
    float programming;
    float total;
};
struct dob{
    int day;
    int month;
    int year;
};
struct student{
    int id;
    char name[50];
    struct marks m;
    struct dob d;
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
        scanf("%f %f %f %f %f", &s[i].m.math, &s[i].m.phys, &s[i].m.english, &s[i].m.it, &s[i].m.programming);
        s[i].m.total = s[i].m.math + s[i].m.phys + s[i].m.english + s[i].m.it + s[i].m.programming;
        printf("Date of Birth (day month year): ");
        scanf("%d %d %d", &s[i].d.day, &s[i].d.month, &s[i].d.year);
    }

    printf("\033[H\033[J");

    printf("Student Details:\n");
    for(int i=0; i<n; i++){
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Marks - \n\tMath: %.2f/30, Physics: %.2f/30, English: %.2f/30, IT: %.2f/30, Programming: %.2f/30, \n\tTotal: %.2f/150\n", s[i].m.math, s[i].m.phys, s[i].m.english, s[i].m.it, s[i].m.programming, s[i].m.total);
        printf("Date of Birth: %02d/%02d/%04d\n", s[i].d.day, s[i].d.month, s[i].d.year);
        printf("\n");
    }
    return 0;
}