#include <stdio.h>

int main(int argc, char **argv)
{
	float one_half=0.5;
    double two_thirds=2./3.;
    double pi=3.14159265358;
    printf("%f\n",one_half);
    printf("%f\n",two_thirds);
    printf("%f\n",pi);
    printf("%8.2f\n",one_half);
    printf("%2.8f\n",two_thirds);
    printf("%3.3f\n",pi);
	return 0;
}
