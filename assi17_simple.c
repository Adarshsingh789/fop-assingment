#include <stdio.h>

int main() {
    int n, i;
    double x_deg, x, sum = 0.0, term;
    double pi = 3.14159265358979;

    printf("Enter angle in degrees: ");
    scanf("%lf", &x_deg);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    x = x_deg * pi / 180.0;

    term = x;  // First term of sine series = x

    for (i = 1; i <= n; i++) {
        sum = sum + term;
        // Next term = current term * (-x^2) / ((2i)(2i+1))
        term = term * (-x * x) / ((2.0 * i) * (2.0 * i + 1));
    }

    printf("sin(%g degrees) = %lf\n", x_deg, sum);
    return 0;
}
