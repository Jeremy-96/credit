#include <stdio.h>


// Main function
int main()
{
  // Prompt the user to input a value
  long n;
  printf("Enter a credit card number: ");
  scanf("%ld", &n);

  // Calculate the length of the credit card number
  int i = 0;
  long long int o = n;

  while(o > 0)
  {
    o = o / 10;
    i++;
  }

  // Check if the credit card is valid or not
  long long int p = n;
  int checksum;
  int sum_right = 0;
  int temp;
  int temp_right;
  int temp_left;
  int sum_left = 0;
  int total = 0;

  do
  {
    // Remove the first last right digit
    checksum = p % 10;

    // Divided the inital value to find second last right digit
    p = p / 10;

    // Store the first last right digit
    sum_right = sum_right + checksum;

    // Remove the second last right digit
    temp = p % 10;
    p = p/10;

    // Multiplied the second lasst right digit by 2
    temp = temp * 2;

    // in case the second last right digit as 2 digits
    temp_right = temp % 10;
    temp_left = temp / 10;

    // Store the second last right digits, don't forget to add the double digits if exists (e.g. temp 15 = temp_left 1 + temp_right 5 return 6)
    sum_left = sum_left + temp_left + temp_right;
  }while(p > 0);

  //Add first and second last right digits together
  total = sum_right + sum_left;

  // We can check if the credit card number is valid or not
  if(total % 10 > 0)
  {
    printf("INVALID\n");
    return 0;
  }
  else if(total % 10 == 0)
  {
    long long int test = n;
    do
    {
      test = test / 10;
    }
    while(test > 100);
    if((i == 13 || i == 16) && test / 10 == 4)
    {
      printf("VISA\n");
    }
    else if((i == 15) && ((test / 10 == 3) && (test % 10 == 4 || test % 10 == 7)))
    {
      printf("AMEX\n");
    }
    else if((i == 16) && ((test / 10 == 5) && (test % 10 >= 0 && test % 10 < 6)))
    {
      printf("MASTERCARD\n");
    }
    else
    {
      printf("INVALID\n");
      return 0;
    }
  }
}