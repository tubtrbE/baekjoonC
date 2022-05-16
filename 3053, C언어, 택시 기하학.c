#include <stdio.h>
#include <math.h>

int main (void) {
	
	double r, area, area2;
	const double pi = acos(-1.0);
	scanf("%lf", &r);

	area = pi * r * r;
	r = sqrt(2) * r;
	area2 = r * r;
	
	printf("%6lf\n%6lf", area, area2);
}
