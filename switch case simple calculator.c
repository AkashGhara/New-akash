#include <stdio.h>
int main() {
char operator;
double num1, num2, ans;
printf("enter the operator (+,-,*,/):");
scanf("%c", &operator);
printf("Enter two operands:");
scanf("%lf %lf", &num1,&num2);
switch(operator) {
case '+':
ans = num1 + num2;
printf("ans: %.2lf\n",ans);
break;
case '-':
ans= num1 - num2;
printf("ans: %.2lf\n",ans);
break;
case '*':
ans = num1 * num2;
printf("ans: %.2lf\n",ans);
break;
case '/':
if(num2 != 0){
ans= num1 / num2;
printf("ans:%.2lf\n",ans);}
else {
printf("error div by 0.\n");}
break;
default:
printf("error invalid operator.\n");}
return 0;}