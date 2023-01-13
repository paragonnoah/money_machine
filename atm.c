#include <stdio.h>

int main() {
  // Prompt the user to enter the amount they want to withdraw
  int amount;
  printf("Enter the amount you want to withdraw: ");
  scanf("%d", &amount);

  // Calculate the number of 50 euro bills to dispense
  int num_50s = amount / 50;
  int remainder = amount % 50;

  // Calculate the number of 20 euro bills to dispense
  int num_20s = remainder / 20;

  // If there is still a remainder, add an additional 20 euro bill
  if (remainder % 20 != 0) {
    num_20s++;
  }

  // Print the results
  printf("50 euro bills: %d\n", num_50s);
  printf("20 euro bills: %d\n", num_20s);

  return 0;
}
