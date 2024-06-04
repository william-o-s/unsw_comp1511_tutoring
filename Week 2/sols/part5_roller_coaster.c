// part5_roller_coaster
//
// This program was written by Sofia De Bellis (z5418801)
// on January 2024
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

#include <stdio.h>

#define MINIMUM_HEIGHT 100
#define RIDE_ALONE_HEIGHT 160

int main(void) {
	printf("Please enter your height: ");
	double height;
	scanf("%lf", &height);

	if (height <= 0) {
		printf("Invalid height!\n");
	} else if (height < MINIMUM_HEIGHT) {
		printf("Sorry, you are not tall enough to ride :<\n");
	} else if (height < RIDE_ALONE_HEIGHT && height >= MINIMUM_HEIGHT) {
		printf("Yay! You are tall enough to ride. But only with an adult!\n");
	} else {
		printf("Congratulations! You are tall enough to ride alone!\n");
	}

	return 0;
}
