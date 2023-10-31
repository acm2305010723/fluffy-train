//二进制转十进制
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char a[50],b[50];
	int i,c,d;
	d=0; 
	scanf("%s",&a);
	c=strlen(a);
	for(i=0;i<c;i++)
	{
	 b[i]=a[i]-'0';
	 if(b[i]==1)
	 {
	 	d=d+pow(2,c-i-1);
	 }
   }
   printf("%d\n",d);
	return 0;
}


