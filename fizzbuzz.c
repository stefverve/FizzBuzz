#include <stdio.h>

// FizzBuzz, with added code for output readability

int main() {
	
	for (int i = 1; i < 101; i++) {
		printf (" ");			// space preceeding each output
		if (i % 3 != 0 && i % 5 != 0) {
			printf ("%i  ", i);
			if (i < 10) {
				printf (" ");	// adds correct spacing for single digit numbers
			}
		} else {
			if (i % 3 == 0) {
				printf ("Fizz");
			}
			if (i % 5 == 0) {
				printf ("Buzz\n");
			}
		}
	}
}
