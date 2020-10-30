#include <stdio.h>
int main(void) {
float score;
 printf("Enter Grade : ");
 scanf("%f",&score);

switch((int)score/10){
case 10:
if(score<101)
case 9:
case 8:
printf("Grade A");
break;
case 7:
if(score>=75&&score<80)
 printf("Grade B+");
else
 printf("Grade B");
break;
case 6:
if(score>=65&&score<70)
 printf("Grade C+");
else
 printf("Grade C");
break;
case 5:
if(score>=55&&score<60)
 printf("Grade D+");
else
 printf("Grade D");
break;
default :
if(score>=0&&score<50)
printf("Grade F");
 }
return 0;
}
