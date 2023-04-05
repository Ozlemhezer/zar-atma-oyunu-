#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i;
	int puan;
	int c;
	srand(time(NULL));
	/*zar atýlacak */
	c = 2 + (rand() % 11);
	if(c==7 || c==11)
	{
		printf("ilk atýsta kazanildi.");
		
	}
	else if(c==2 || c==3 || c==12)
	{
		printf("lose");
	}
	else
	{
		puan=c;
		printf("puan=%d",c);
		for(i=1; i>0; i++)
		{
			c = 2 + (rand() % 11);
			if(c==7)
			{
				printf("lose");
				break;
			}
			else if(c==puan)
			{
				printf("win");
				break;
			}
			else
			{
				printf("tekrar zar atýnýz.");
			}
		}
	}

	return 0;
}
