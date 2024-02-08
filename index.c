#include<stdio.h>
int main(int argc, char const *argv[])
{
    int month;
    printf("Enter the number of month:\n");
    scanf("%d",&month);
    
    switch (month)
    {
    case 1: 
      printf("January 31 days");
        break;
    case 2:
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("February 29 days");
    }
    else
    {
        printf("February 28 days");
    }
      break;
    case 3:
      printf("March 31 days");
      break;
    case 4:
      printf("April 30 days");
      break;
    case 5:
      printf("May 31 days");
      break;
    case 6:
      printf("June 30 days");
      break;
    case 7: 
      printf("July 31 days");
      break;
    case 8: 
      printf("August 31 days");
      break;
    case 9: 
      printf("September 30 days");
      break;
    case 10: 
      printf("October 31 days");
      break;
    case 11: 
      printf("November 30 days");
      break;
    case 12: 
      printf("December 31 days");
      break;
    default:
      printf("please enter a valid number");
        break;
    }
    return 0;
}
