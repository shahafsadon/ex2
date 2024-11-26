/******************
Name:shahaf sadon
ID:314941444
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
  int choice = 0;
	while (choice !=7 ) {
		printf("Choose an option:\n");
		printf("\t1. Happy Face\n");
		printf("\t2. Balanced Number\n");
		printf("\t3. Generous Number\n");
		printf("\t4. Circle Of Joy\n");
		printf("\t5. Happy Numbers\n");
		printf("\t6. Festival Of Laughter\n");
		printf("\t7. Exit\n");
		scanf("%d", &choice);
		if (choice > 7 || choice < 1) {
			// Only correct input
			printf("This option is not available, please try again.\n");
			continue;
		}
		switch (choice) {
			case 1: {
				char eyes, nose, mouth;
				int faceSize;
				printf("Enter symbols for the eyes, nose, and mouth:\n");
				scanf(" %c %c %c", &eyes, &nose, &mouth);
				printf("Enter face size:\n");
				scanf("%d", &faceSize);
				while (faceSize < 1 || faceSize % 2 == 0) {
					//Verifies that the user's input is correct.
					printf("The face's size must be an odd and positive number, please try again:\n");
					scanf("%d", &faceSize);
				}
				//Initial row begins.
				printf("%c",eyes);
				for (int i = 0; i < faceSize; i++) {
					printf(" ");
				}
				//End of the first row
				printf("%c\n", eyes);
				for (int i = 0; i < (faceSize / 2) + 1; i++) {
					//Second row start
					printf(" ");
				}
				// End of the second row.
				printf("%c\n", nose);
				//Start of the third row.
				printf("\\");
				for (int i = 0; i < faceSize; i++) {
					printf("%c", mouth);
				}
				//End of the third row.
				printf("/\n");
				break;
			}
			case 2: {
				int number, res1 = 0, res2 = 0, Num;
				printf("Enter a number:\n");
				scanf(" %d", &number);
				//Verifies the accuracy of the input provided by the user.
				while (number < 1) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number);
				}
				Num = number;
				int numSize = 0;
				// Calculates the total number of digits in the given number.
				while (1) {
					if (Num >= 10) {
						numSize++;
						Num /= 10;
					} else {
						numSize++;
						break;
					}
				}
				// Adds together the values in the first half.
				for (int i = 0; i < numSize / 2; i++) {
					res1 += number % 10;
					number /= 10;
				}
				// Adds together the values in the second half.
				for (int i = 0; i < numSize / 2; i++) {
					res2 += number % 10;
					number /= 10;
				}
				if (res1 == res2) {
					printf("This number is balanced and brings harmony!\n");
				} else {
					printf("This number isn't balanced and destroys harmony.\n");
				}
				break;
			}
			case 3: {
				int numGen, sumGen = 0;
				printf("Enter a number:\n");
				scanf(" %d", &numGen);
				//checks for correct input from user
				while (numGen < 1) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &numGen);
				}
				for (int i = 1; i <= (numGen / 2); i++) {
					if (numGen % i == 0) {
						//Loop through all divisors of numGen (up to numGen / 2) and sum them
						sumGen += i;
					}
				}
				if (sumGen > numGen) {
					printf("This number is generous!\n");
				} else {
					printf("This number does not share.\n");
				}
				break;
			}
			case 4: {
				int number, reversed_num = 0, push_number = 0, push_reversed_number = 0;
				// Prompt the user to enter a number
				printf("Enter a number:\n");
				scanf("%d", &number);
				// Ensure the number is positive; repeat input if not
				while (number <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number);
				}
				// Store the original number
				int original_number = number;
				// Check if the original number is prime
				// Assume the number is prime initially
				int is_prime = 1;
				// Special check for number 1 (it is not prime)
				if (number == 1) {
					// Set is_prime to 0 if the number is 1
					is_prime = 0;
					} else {
						// Loop through all numbers from 2 to number-1 to check if there are any divisors
						for (int i = 2; i < number; i++) {
							if (number % i == 0) {
								// If a divisor is found, the number is not prime
								is_prime = 0;
								// Exit the loop since we know the number is not prime
								break;
            }
        }
    }
				// If no divisors were found, the number is prime
				if (is_prime) {
					// Set push_number to 1 if the number is prime
					push_number = 1;
    }
				// Reverse the number by extracting its digits
				int temp_number = original_number;
				while (temp_number > 0) {
					// Get the last digit and append it to reversed_num
					reversed_num = reversed_num * 10 + (temp_number % 10);
					// Remove the last digit from temp_number
					temp_number /= 10;
    }
				// Check if the reversed number is prime
				// Assume the reversed number is prime initially
				is_prime = 1;
				// Special check for the reversed number 1 (it is not prime)
				if (reversed_num == 1) {
					// Set is_prime to 0 if the reversed number is 1
					is_prime = 0;
					} else {
						// Loop through all numbers from 2 to reversed_num-1 to check if there are any divisors
						for (int i = 2; i < reversed_num; i++) {
							if (reversed_num % i == 0) {
								// If a divisor is found, the number is not prime
								is_prime = 0;
								// Exit the loop since we know the number is not prime
								break;
            }
        }
    }
				// If no divisors were found for the reversed number, it is prime
				if (is_prime) {
					// Set push_reversed_number to 1 if the reversed number is prime
					push_reversed_number = 1;
    }
				// Check if both the original number and the reversed number are prime
				if (push_number && push_reversed_number) {
					// Both numbers are prime
					printf("This number completes the circle of joy!\n");
					} else {
						// Either the original or the reversed number is not prime
						printf("The circle remains incomplete.\n");
    }
				break;
			}
			case 5: {
				int num5, sum5 = 0;
				printf("Enter a number:\n");
				scanf("%d", &num5);
				//Make sure the number is positive
				while(num5 <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &num5);
				}
				printf("Between 1 and %d only these numbers bring happiness: ", num5);

				//Check all number from 1 to num5
				for(int i = 1; i <= num5 ; i++) {
					int check_happy = i;
					//Reach the number 1, in which case it is a "happy number."
					//Fall into a cycle of numbers that never reach 1 , in which case it is not a "happy number."
					while(check_happy / 10 != 0) {
						//Sum the squares of all the digits
						while(check_happy != 0) {
							//Iterate through the digits and add their squares
							sum5 += (check_happy % 10) * (check_happy % 10);
							check_happy /= 10;
						}
						//Reset the state before starting the next iteration
						check_happy = sum5;
						sum5 = 0;
					}
					//1 or 7 are happy number
					if(check_happy == 1 || check_happy == 7)
						printf("%d ", i);
				}

				printf("\n");

				break;
			}
			case 6: {
				int smile, cheer, num;
				int success;
				// Get the smile and cheer numbers from the user with proper formatting
				printf("Enter a smile and cheer number:\n");
				success = scanf(" smile: %d , cheer: %d", &smile, &cheer);
				// If the input is incorrect (either not two numbers, or non-positive numbers, or numbers are the same),
				// prompt the user for input again
				while (success != 2 || smile <= 0 || cheer <= 0 || smile == cheer) {
					printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
					// Clean the input buffer by ignoring the rest of the line (this prevents leftover input from affecting future reads)
					// This will discard all characters until the newline is encountered
					scanf("%*[^\n]");
					// Attempt to read the numbers again with the expected format
					success = scanf(" smile: %d , cheer: %d", &smile, &cheer);
				}
				// Get the maximum number for the festival from the user
				printf("Enter maximum number for the festival:\n");
				scanf("%d", &num);
				// If the maximum number is non-positive (zero or negative), prompt the user for input again
				while (num <= 0) {
					printf("Only positive maximum number is allowed, please try again:\n");
					scanf("%d", &num);
					// Clean the input buffer again after incorrect input
					// Ignore characters left in the input buffer until the newline
					scanf("%*[^\n]");
				}
				// Print the results for the festival
				for (int i = 1; i <= num; ++i) {
					// If the number is divisible by both smile and cheer, print "Festival!"
					if (i % smile == 0 && i % cheer == 0) {
						printf("Festival!\n");
					}
					// If the number is divisible only by cheer, print "Cheer!"
					else if (i % cheer == 0) {
						printf("Cheer!\n");
					}
					// If the number is divisible only by smile, print "Smile!"
					else if (i % smile == 0) {
						printf("Smile!\n");
					}
					// Otherwise, print the number itself
					else {
						printf("%d\n", i);
					}

				}
				break;
			}
			case 7: {
				printf("Thank you for your journey through Numeria!\n");
				break;
			}
		}
	}

  return 0;
}


