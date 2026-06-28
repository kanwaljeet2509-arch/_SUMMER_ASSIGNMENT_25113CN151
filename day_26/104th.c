#include <stdio.h>
int main()
{
int score = 0, answer;
printf("QUIZ APPLICATION\n");
printf("\n1. What is the third month of the year?\n");
printf("1. January\n2. March\n3. December\n4. June\n");
printf("Enter your answer:");
scanf("%d",&answer);
if(answer ==2)
{
printf("Correct\n");
score++;
}
else
{
printf("Wrong! Correct answer is March\n");
}
printf("\n2. Which country won fifa world cup 2022?\n");
printf("1. Argentina\n2. Brazil\n3. France\n4. Portugal\n");
printf("Enter your answer:");
scanf("%d", &answer);
if(answer ==1)
{
printf("Correct\n");
score++;
}
else
{
printf("Wrong! Correct answer is Argentina\n");
}
printf("\n3. How many days are there in a leap year?\n");
printf("1. 365\n2. 366\n3. 364\n4. 367\n");
printf("Enter your answer:");
scanf("%d",&answer);
if(answer ==2)
{
printf("Correct\n");
score++;
}
else
{
printf("Wrong!Correct answer is 366\n");
}
printf("\n4. What is the full form of PS?\n");
printf("1. Police station\n2. Parking slot\n3. Play station\n4. Picture Studio\n");
printf("Enter your answer:");
scanf("%d",&answer);
if(answer ==3)
{
printf("Correct\n");
score++;
}
else
{
printf("Wrong!Correct answer is Play station\n");
}
printf("\n5. Pick the odd one out.\n");
printf("1. Cricket\n2. Football\n3. Badminton\n4. Tennis\n");
printf("Enter your answer:");
scanf("%d",&answer);
if(answer ==2)
{
printf("Correct\n");
score++;
}
else
{
printf("Wrong!Correct answer is Football\n");
}
printf("\nQUIZ RESULT\n");
printf("Your Score = %d/5\n",score);
if(score == 5)
printf("Excellent\n");
else if(score >= 3)
printf("Good job\n");
else
printf("Better luck next time\n");
return 0;
}