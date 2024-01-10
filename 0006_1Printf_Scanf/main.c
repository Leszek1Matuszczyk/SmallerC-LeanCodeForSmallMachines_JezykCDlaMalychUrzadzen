#include <stdio.h>

int main(int argc, char **argv)
{
	int count=12;
    int total=7;
    char answer;
    char jobtitle[]="Referent ds długosci";
    printf("Mozesz otrzymac %d, ale aktualnie zarabiasz %d.\n",count,total);
    printf("Chcesz zarabiac wiecej:t/n");
    scanf("%c",&answer);
    printf("Twoja odpowiedz brzmi: %c\n",answer);
    while(answer!='t'&&answer!='n')
    {
        printf("Odpowiedz: t/n\n");
        scanf("%c",&answer);
        }
    if(answer=='t')
    {
    printf("Witamy na stanowisku %s!\n",jobtitle);
	}else{
        printf("Trudno moze nastepnym razem zostaniesz %s", jobtitle);
        }
    return 0;
}