#include <stdio.h>

int Add_function(), Subtract_function(), Multiply_function(), Divide_function();

void main()
{
    int number1, number2, n, m;
    do
    {

        char operator1;
        char arr[100] = "Enter the value of number1 = ";
        printf(arr);
        scanf("%d", &number1);
        printf("Enter the value of number2 = ");
        scanf("%d", &number2);
        printf("Please enter operator \n");
        scanf(" %c", &operator1);
        if (operator1 == '+')
        {
            Add_function(number1, number2);
        }
        else if (operator1 == '-')
        {
            Subtract_function(number1, number2);
        }
        else if (operator1 == '*')
        {
            Multiply_function(number1, number2);
        }
        else if (operator1 == '/')
        {
            Divide_function(number1, number2);
        }
        else

            printf("Invalid operator....\n");
        printf("\nPlease enter any integer to continue the program....\nEnter 0 to terminate the program...\n");
        scanf("%d", &n);
    } while (n != 0);
}
int Add_function(int number1, int number2)
{
    int Add;
    //int Add;
    Add = number1 + number2;
    printf("Addition value of number1 and number2 = %d ", Add);
    return 0;
}
int Subtract_function(int number1, int number2)
{
    int Subtract;
    Subtract = number1 - number2;
    printf("Subtraction value of number1 and number2 = %d ", Subtract);
    return 0;
}
int Multiply_function(int number1, int number2)
{
    int Multiply;
    Multiply = number1 * number2;
    printf("Multiplication value of number1 and number2 = %d ", Multiply);
    return 0;
}
int Divide_function(int number1, int number2)
{
    float Divide;
    Divide = number1 / number2;
    printf("Division value of number1 and number2 = %f ", Divide);
    return 0;
}
