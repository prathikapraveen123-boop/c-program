#include<stdio.h>

int main()
{
  char name[30];
  int m1, m2, m3, m4, m5;
  int total;
  float average;

  printf("Enter Student Name:");
  scanf("%s", name);

  printf("\nEnter 5 Subject Marks:\n");

  printf("Tamil:");
  scanf("%d", &m1);

  printf("English:");
  scanf("%d", &m2);

  printf("Maths:");
  scanf("%d", &m3);

  printf("Science:");
  scanf("%d", &m4);

  printf("Computer Science:");
  scanf("%d", &m5);

  total = m1+m2+m3+m4+m5;

  average = total/5.0;

  printf("\nStudent Name:%s", name);
  printf("\nTotal Marks:%d", total);
  printf("\nAverage:%.2f", average);

  if(m1<35||m2<35||m3<35||m4<35||m5<35)

  {
     printf("\nResult:FAIL");
  }
  else
  {
     printf("nResult:PASS");

     if(average>=90)
       printf("\nGrade: A+");
     else if(average>=80)
       printf("\nGrade: A");
     else if(average>=70)
       printf("\nGrade: B");
     else if(average>=60)
       printf("\nGrade: C");
     else
       printf("\nGrade: D");
     }

     return 0;
}

