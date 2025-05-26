#include <stdio.h>
#include <time.h>

void delay(int number_of_seconds) {
// Converting time into milliseconds
int milli_seconds = 1000 * number_of_seconds;

// Storing start time
clock_t start_time = clock();

// Looping till required time is not achieved
while (clock() < start_time + milli_seconds);
}


int main(int argc, char const *argv[])
{
     int num1, num2, sum;
    //Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    delay(5);


    return 0;
}
