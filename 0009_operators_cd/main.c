#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	printf("Wprowadz 3 liczby odzielone spacja;\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d+%d+%d=%d\n",a,b,c,a+b+c);
    printf("%d-%d-%d=%d\n",a,b,c,a-b-c);
    printf("%d*%d*%d=%d\n",a,b,c,a*b*c);
    printf("%d/%d/%d=%f\n",a,b,c,a/(float)b/(float)c);
    printf("%d %% %d %% %d=%d",a,b,c,a%b%c);
	return 0;
}
