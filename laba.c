#include <stdio.h>
#include <math.h>
double min(double p1, double p2, double p3) {
	if (p1<=p2 && p1<=p3){
		return p1;
	}
	else if (p2<=p1 && p2<=p3) {
		return p2;
	}
	else {
		return p3;
	}
}

int main() {
double x, a, z;
double hx = 0.2;
double ha = 1;

for (x = 0.1; x <= 0.31; x += hx) {
	for (a = 2; a <= 4; a += ha) {
		double p1 = pow(sin(a/x), 1.0/2.0);
		double p2 = sin(a)/x;
		double p3 = pow(a, 1.0/3.0)*asin(x);
		z = min(p1, p2, p3);
		printf("x =%f, a=%f, z=%f\n", x, a, z);
	}
}

return 0;
}
