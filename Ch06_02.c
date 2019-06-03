/* program to calculate the vaerage of a set of grades and to count
   the number of failing test grades */

#include <stdio.h>

int main()
{
  int number_of_grades, j, grade;
  int grade_total = 0;
  int failure_count = 0;
  float average;

  printf("How many grades will you be entering? ");
  scanf("%i", &number_of_grades);

  for(j = 1; j <= number_of_grades; ++j)
  {
    printf("Enter grade #%i: ", j);
    scanf("%i", &grade);

    grade_total = grade_total + grade;

    if(grade < 65)
      ++failure_count;
  }
  average = (float) grade_total / number_of_grades;

  printf("\nGrade average = %.2f\n", average);
  printf("Number of failures = %i\n", failure_count);

  return 0;
}