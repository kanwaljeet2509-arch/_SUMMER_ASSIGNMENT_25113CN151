#include <stdio.h>
struct Employee
{
int id;
char name[50];
float basic, hra, da, pf, netSalary;
};
int main()
{
struct Employee emp[100];
int n = 0, choice, i;
do
{
printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
printf("1. Add Employee\n");
printf("2. Display Salary Details\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("\nEnter Employee ID: ");
scanf("%d", &emp[n].id);
printf("Enter Employee Name: ");
scanf("%s", emp[n].name);
printf("Enter Basic Salary: ");
scanf("%f", &emp[n].basic);
emp[n].hra = 0.20 * emp[n].basic; 
emp[n].da  = 0.10 * emp[n].basic;   
emp[n].pf  = 0.08 * emp[n].basic;
emp[n].netSalary = emp[n].basic + emp[n].hra + emp[n].da - emp[n].pf;
printf("Salary calculated successfully!\n");
n++;
break;
case 2:
if(n == 0)
{
printf("No employee records found!\n");
}
else
{
printf("\n================ SALARY DETAILS ================\n");
printf("ID\tName\tBasic\tNet Salary\n");
for(i = 0; i < n; i++)
{
printf("%d\t%s\t%.2f\t%.2f\n",emp[i].id,emp[i].name,emp[i].basic,emp[i].netSalary);
}}
break;
case 3:
printf("Exiting Salary Management System...\n");
break;
default:
printf("Invalid choice!\n");
}} 
while(choice != 3);
return 0;
}