//二进制转化十进制
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//int main()
//{
//	char a[50],b[50];
//	int i,c,d;
//	d=0; 
//	scanf("%s",&a);
//	c=strlen(a);
//	for(i=0;i<c;i++)
//	{
//	 b[i]=a[i]-'0';
//	 if(b[i]==1)
//	 {
//	 	d=d+pow(2,c-i-1);
//	 }
//    }
//    printf("%d\n",d);
//	return 0;
// } 
 
 //八进制转换十进制
//#include <stdio.h>
//int main()
//{
//	int octalnumber;
//	scanf("%o",&octalnumber);
//    printf("%d\n",octalnumber);
//	return 0;
// } 
//  

//十六进制转换十进制
//#include <stdio.h>
//int main()
//{
//	int hexnumber;
//	scanf("%x",&hexnumber);
//    printf("%d\n",hexnumber);
//	return 0;
// }  

//十进制转换二进制
//#include <stdio.h>
//int main()
//{
//	int n;
//	int sum=0;
//	int y,x=1;
//	scanf("%d",&n);
//	while(n!=0)
//	{
//		y=n%2;
//		sum+=x*y;
//		x*=10;
//		n/=2;
//	}
//	printf("%d\n",sum);
//	return 0;
// }   

//十进制 转化八进制
//#include <stdio.h>
// int main()
// {
// 	int decnum;
// 	scanf("%d",&decnum);
//	int arr[100]={0};
//	int i;
//	for(i=0 ; i<100 ; i++ )
//	{
//		int a=decnum%8;
//		decnum=decnum/8;
//		arr[i]=a;
//		if(decnum==0)
//		{
//			break;
//		}
//	}
//	int octum=0;
//	int j;
//    for(j=i;j >=0 ; j-- )
//    {
//    	printf("%d",arr[j]);
//	}
//	return 0; 
// }
 
 
 //十进制转化十六进制
 #include <stdio.h>
int main()
{
	int decimal;
	scanf("%d",&decimal);
    printf("%x\n",decimal);
	return 0;
 }   
