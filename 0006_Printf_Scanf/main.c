#include <stdio.h>

int main(int argc, char **argv)
{
	int count=12;
    int total=7;
    char answer='t';
    char jobtitle[]="Referent ds długosci";
    printf("Mozesz otrzymac %d, ale aktualnie zarabiasz %d.\n",count,total);
    printf("Twoja odpowiedz brzmi: %c\n",answer);
    printf("Witamy na stanowisku %s!\n",jobtitle);
	return 0;
}
