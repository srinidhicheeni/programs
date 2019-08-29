#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 5

int main()
{
	int v[max],i,fp=0,rp=0,ch,x;
	while(1)
	{
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(rp==max-1)
				{
					printf("Queue Overflow\n");
				}
				else
				{
					printf("Enetr the element to be inserted\n");
					scanf("%d",&x);
					v[rp]=x;
					rp++;
				}
				break;
				case 2:
					if(fp==rp)
					printf("Qis empty\n");
					else
					{
						printf("The deleted element is %d",v[fp]);
						fp++;
					}
					break;
				case 3:
						if(fp==rp)
					printf("Qis empty\n");
					else
					{
						printf("The contents of the Queue are :");
						for(i=fp;i<rp;i++)
						{
							printf("[%d]",v[i]);
						}
					}
					break;
					case 4:
						return 0;
					
		}
	
	}
	return 0;
}
