#include <stdio.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    char course[30];
    float marks;
};

int main() {
    struct Student s[MAX];
    int n = 0, choice, i, roll, found;

    do {
        printf("\n========== STUDENT RECORD MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Course: ");
            scanf("%s", s[n].course);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Record Added Successfully.\n");
            break;

        case 2:
            if(n == 0) {
                printf("No Student Records Available.\n");
            } else {
                printf("\n-------------------------------------------------------------\n");
                printf("Roll\tName\t\tCourse\t\tMarks\n");
                printf("-------------------------------------------------------------\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\t\t%.2f\n",
                           s[i].roll, s[i].name, s[i].course, s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            found = 0;
            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    printf("\nStudent Found\n");
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Course      : %s\n", s[i].course);
                    printf("Marks       : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Student Record Not Found.\n");
            break;

        case 4:
            printf("Enter Roll Number to Update: ");
            scanf("%d", &roll);

            found = 0;
            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    printf("Enter New Name: ");
                    scanf("%s", s[i].name);

                    printf("Enter New Course: ");
                    scanf("%s", s[i].course);

                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Record Updated Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Student Record Not Found.\n");
            break;

        case 5:
            printf("Enter Roll Number to Delete: ");
            scanf("%d", &roll);

            found = 0;
            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    int j;
                    for(j = i; j < n - 1; j++) {
                        s[j] = s[j + 1];
                    }
                    n--;
                    found = 1;
                    printf("Student Record Deleted Successfully.\n");
                    break;
                }
            }

            if(found == 0)
                printf("Student Record Not Found.\n");
            break;

        case 6:
            printf("Exiting Student Record Management System...\n");
            break;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }

    } while(choice != 6);

    return 0;
}