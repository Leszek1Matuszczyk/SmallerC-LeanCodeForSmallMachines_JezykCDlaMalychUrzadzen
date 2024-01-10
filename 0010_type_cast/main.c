#include <stdio.h>

int main(int argc, char **argv)
{
	int val,val1,q;
    q=20;
    float avg;
    for(int i =0;i< q;i++)
    {
        printf("Give me value number %d: ",i);
        scanf("%d",&val1);
        val=val1+val;
        }
    avg=val/(float)q;
    printf("Average: %f",avg);
}
