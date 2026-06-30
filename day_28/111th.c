#include <stdio.h>
struct Ticket
{
int ticketNo;
char name[50];
char destination[50];
int seats;
float fare;
int booked;
};
int main()
{
struct Ticket t;
int choice;
t.booked = 0;
do
{
printf("\n===== TICKET BOOKING SYSTEM =====\n");
printf("1. Book Ticket\n");
printf("2. Cancel Ticket\n");
printf("3. View Ticket Details\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice)
{
case 1:
if(t.booked == 1)
{
printf("Ticket is already booked!\n");
}
else
{
printf("Enter Ticket Number: ");
scanf("%d", &t.ticketNo);
printf("Enter Passenger Name: ");
scanf("%s", t.name);
printf("Enter Destination: ");
scanf("%s", t.destination);
printf("Enter Number of Seats: ");
scanf("%d", &t.seats);
printf("Enter Fare per Seat: ");
scanf("%f", &t.fare);
t.fare = t.fare * t.seats;
t.booked = 1;
printf("Ticket booked successfully!\n");
}
break;
case 2:
if(t.booked == 0)
{
printf("No ticket booked yet!\n");
}
else
{
t.booked = 0;
printf("Ticket cancelled successfully!\n");
}
break;
case 3:
if(t.booked == 0)
{
printf("No ticket details available!\n");
}
else
{
printf("\n===== TICKET DETAILS =====\n");
printf("Ticket Number : %d\n", t.ticketNo);
printf("Passenger Name: %s\n", t.name);
printf("Destination   : %s\n", t.destination);
printf("Seats         : %d\n", t.seats);
printf("Total Fare    : %.2f\n", t.fare);
printf("Status        : Booked\n");
}
break;
case 4:
printf("Thank you for using the Ticket Booking System.\n");
break;
default:
printf("Invalid choice!\n");
}} 
while(choice != 4);
return 0;
}