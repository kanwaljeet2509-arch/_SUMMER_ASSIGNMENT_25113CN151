#include <stdio.h>

int main() {
    int empID = 0, age, salary;
    int choice;

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Update Salary\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                if(empID != 0) {
                    printf("Employee record already exists.\n");
                } else {
                    printf("Enter Employee ID: ");
                    scanf("%d", &empID);

                    printf("Enter Employee Age: ");
                    scanf("%d", &age);

                    printf("Enter Employee Salary: ");
                    scanf("%d", &salary);

                    printf("Employee Added Successfully.\n");
                }
                break;

            case 2:
                if(empID == 0) {
                    printf("No Employee Record Found.\n");
                } else {
                    printf("\nEmployee Details\n");
                    printf("Employee ID : %d\n", empID);
                    printf("Age         : %d\n", age);
                    printf("Salary      : %d\n", salary);
                }
                break;

            case 3:
                if(empID == 0) {
                    printf("No Employee Record Found.\n");
                } else {
                    printf("Enter New Salary: ");
                    scanf("%d", &salary);
                    printf("Salary Updated Successfully.\n");
                }
                break;

            case 4:
                if(empID == 0) {
                    printf("No Employee Record Found.\n");
                } else {
                    empID = 0;
                    age = 0;
                    salary = 0;
                    printf("Employee Record Deleted Successfully.\n");
                }
                break;

            case 5:
                printf("Exiting Employee Management System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}