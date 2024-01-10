#include <stdio.h>

int main(int argc, char **argv)
{
	char name[20];
    int age;
    printf("Podaj Imie i wiek odzielajac je spacja:\n");
    scanf("%s %d",name,&age);
    printf("Witam %s , masz %d lat", name ,age);
	return 0;
}
