#include <stdio.h>

int main(int argc, char **argv)
{
	char name[20];
    int age;
    printf("Jak masz na imie?\n");
    scanf("%s",&name);
    printf("Ile masz lat?\n");
    scanf("%i",&age);
    printf("Witaj %s, masz %i lat",name,age);
	return 0;
}
