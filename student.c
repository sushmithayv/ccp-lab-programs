#include <stdio.h>
struct student {
   int roll;
    char firstName[50];
    char sec[5];
    char dep[20];
    int fees;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    for (i=0;i<5;++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter section\n");
        scanf("%s",s[i].sec);
        printf("Enter department\n");
        scanf("%s",s[i].dep);
        printf("Enter fees\n");
        scanf("%d",&s[i].fees);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    for (i=0;i<5;++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Section : %s\n",s[i].sec);
        printf("Department : %s\n",s[i].dep);
        printf("Fees : %d\n",s[i].fees);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
