#include<stdio.h>
#include<string.h>
void main()
{
	int divlen, divrlen,i,j,k;
	char div[100],divr[100],crc[100];
	
	printf("\n Enter the Message (in binary) - ");
	scanf("%s",&div);
	printf(" Enter the Checker bits (in binary) - ");
	scanf("%s",&divr);
	k=divlen=strlen(div);
	divrlen=strlen(divr);
	
	for(i=0;i<divrlen-1;i++)
	div[divlen+i]='0';
	div[divlen+i]='\0';
	divlen=strlen(div);
	
	i=0;
	while(1)
	{
		if(div[i]=='0')
		i++;
		else if(divlen-i>=divrlen)
		{
			for(j=0;j<divrlen;j++)
			{
				div[i++]=(div[i]==divr[j]?'0':'1');	
			}
			i=i-divrlen;
		}
		else
		   break;
	}
	for(i=0,j=k;i<divrlen;i++,j++)
	crc[i]=div[j];
	
	printf(" Required remainder -  %s \n\n",crc);
}
