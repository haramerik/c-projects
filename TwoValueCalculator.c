//first C project - haramerik
# include <stdio.h>

int main(void) {
  double num1, num2, result;
  char op;

  printf("Enter the first number: ");
  scanf("%lf", &num1);

  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &op);

  printf("Enter the second number: ");
  scanf("%lf", &num2);

  // Perform the calculation based on the operator
  if (op == '+') {
    result = num1 + num2;
  }
  else if (op == '-') {
    result = num1 - num2;
  }
  else if (op == '*') {
    result = num1 * num2;
  }
  else if (op == '/') {
    if (num2 != 0) {
      result = num1 / num2;
    }
    else {
      printf("Error: Division by zero is not allowed.\n");
      return 1; // Exit the program with an error code
    }
  }
  else {
    printf("Error: Invalid operator.\n");
    return 1; // Exit the program with an error code
  }

  // Print the result
  printf("Result: %.2lf\n", result);
  return 0;
}
