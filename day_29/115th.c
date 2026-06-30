#include <stdio.h>
int main() {
char str1[100], str2[100], temp;
int choice, i, j, len;
printf("Enter a string: ");
scanf("%s", str1);
do {
printf("\n========== STRING MENU ==========\n");
printf("1. Display String\n");
printf("2. Find Length\n");
printf("3. Copy String\n");
printf("4. Concatenate String\n");
printf("5. Compare Strings\n");
printf("6. Reverse String\n");
printf("7. Convert to Uppercase\n");
printf("8. Convert to Lowercase\n");
printf("9. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice) {
case 1:
printf("String = %s\n", str1);
break;
case 2:
len = 0;
while(str1[len] != '\0')
len++;
printf("Length = %d\n", len);
break;
case 3:
for(i = 0; str1[i] != '\0'; i++)
str2[i] = str1[i];
str2[i] = '\0';
printf("Copied String = %s\n", str2);
break;
case 4:
printf("Enter another string: ");
scanf("%s", str2);
i = 0;
while(str1[i] != '\0')
i++;
j = 0;
while(str2[j] != '\0') {
str1[i] = str2[j];
i++;
j++;
}
str1[i] = '\0';
printf("Concatenated String = %s\n", str1);
break;
case 5:
printf("Enter another string: ");
scanf("%s", str2);
i = 0;
while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
i++;
if(str1[i] == str2[i])
printf("Strings are Equal\n");
else
printf("Strings are Not Equal\n");
break;
case 6:
len = 0;
while(str1[len] != '\0')
len++;
for(i = 0, j = len - 1; i < j; i++, j--) {
temp = str1[i];
str1[i] = str1[j];
str1[j] = temp;
}
printf("Reversed String = %s\n", str1);
break;
case 7:
for(i = 0; str1[i] != '\0'; i++) {
if(str1[i] >= 'a' && str1[i] <= 'z')
str1[i] = str1[i] - 32;
}
printf("Uppercase String = %s\n", str1);
break;
case 8:
for(i = 0; str1[i] != '\0'; i++) {
if(str1[i] >= 'A' && str1[i] <= 'Z')
str1[i] = str1[i] + 32;
}
printf("Lowercase String = %s\n", str1);
break;
case 9:
printf("Exiting Program...\n");
break;
default:
printf("Invalid Choice!\n");
}}
while(choice != 9);
return 0;
}