// part6_roller_coaster
//
// This program was written by William (z5388080),
// on 19 Feb 2024
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less,
//    it should print an error message
//
// 3. If the height is below the minimum height,
//    it should print a message telling the user they are not tall enough to ride
//
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold,
//    it should print a message telling the user they can ride.

#define INVALID_HEIGHT 0
#define MINIMUM_HEIGHT 100
#define RIDE_ALONE_HEIGHT 160

#include <stdio.h>

int main(void) {
	// Scan in user's height
	int height;
	printf("Enter height: ");
	scanf("%d", &height);

	if (height <= INVALID_HEIGHT) {
		printf("Error! Either your height is wrong, or you don't exist. Regardless, you can't ride.\n");
	} else if (height > INVALID_HEIGHT && height < MINIMUM_HEIGHT) {
		printf("Sorry! You are not tall enough to ride :(\n");
	} else if (height >= MINIMUM_HEIGHT && height < RIDE_ALONE_HEIGHT) {
		printf("Yay! So, you can ride, but only with an adult.\n");
	} else {
		printf("Yay! You can ride alone. Have fun!\n");
	}

	return 0;
}
