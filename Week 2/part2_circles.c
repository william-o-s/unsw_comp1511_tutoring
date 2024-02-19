// part2_circles
//
// This program was written by William (z5388080),
// on 19 Feb 2024
//
// This program calculates the area of a circle

#define PI 3.14159

#include <stdio.h>

int main(void) {
	// TODO: What variable do you need to calculate circle area?
	double radius;
	printf("Enter a radius: ");

	// TODO: How does this variable get initialised?
	scanf("%lf", &radius);

	// TODO: Let's calculate the area!
	double area = PI * radius * radius;
	printf("Your circle's area is: %lf\n", area);

	return 0;
}
