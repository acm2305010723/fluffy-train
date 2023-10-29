#include <stdio.h>
int main ()
{
	char c;
	int re=0,t,flag=0;
	scanf("%d%c",&re,&c);
	while(c !='=' && flag==0){
		switch(c){
			case'+':scanf("%d",&t);
			re+=t;
			break;
			case'-':scanf("%d",&t);
			re-=t;
			break;
			case'*':scanf("%d",&t);
			re*=t;
			break;
			case'/':scanf("%d",&t);
			 if(t==0){
			 flag=1;
			 break;
			 }
			re/=t;
			break;
			default:flag=1;break;
		}
		scanf("%c",&c);
	}
	if(flag==1)
	printf("ERROR\n");
	else printf("%d\n",re);
	return 0;
}




/*#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	if(t>=90 && t<=100){
		printf("A\n");
	}
	else if(t>=80 && t<=89){
		printf("B\n");
	}
	else if(t>=70 && t<=79){
		printf("C\n");
	}
	else if(t>=60 && t<=69){
		printf("D\n");
	}
	else if(t>=0 && t<=59){
		printf("E\n");
	}
	else{
		printf("Score is error!\n");
	}
	return 0;
}*/



/*#include <stdio.h>
int main()
{
	int e;
	double d,a,b,c;
	scanf("%d",&e);
	a=e/12;
	if(a<=1500){
		b=3;
		c=0;
	}
	if(a<=4500 && a>1500){
		b=10;
		c=105;
	}
	if(a<=9000 && a>4500){
		b=20;
		c=555;
	}
	if(a<=35000 && a>9000){
		b=25;
		c=1005;
	}
	if(a<=55000 && a>35000){
		b=30;
		c=2755;
	}
	if(a<=80000 && a>55000){
		b=35;
		c=5505;
	}
	if(a>80000){
		b=45;
		c=13505;
	}
	d=e*b/100-c;
	printf("%.2lf\n",d);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	double a,c,d;
	int b;
	scanf("%lf %d",&a,&b);
	if(b>=0 && b<=59){
		d=0;
	}
	if(b>=60 && b<=61){
		d=1.0;
	}
	if(b>=62 && b<=65){
		d=1.5;
	}
	if(b>=66 && b<=70){
		d=2.0;
	}
	if(b>=71 && b<=74){
		d=2.3;
	}
	if(b>=75 && b<=77){
		d=2.7;
	}
	if(b>=78 && b<=81){
		d=3.0;
	}
	if(b>=82 && b<=84){
		d=3.3;
	}
	if(b>=85 && b<=89){
		d=3.7;
	}
	if(b>=90 && b<=100){
		d=4.0;
	}
	c=a*d;
	printf("%lf\n",c);
	
	
	return 0;
}*/




/*#include <stdio.h>
int main()
{
	int N,i;
	long long first=0,second=1,next,final;
	scanf("%d",&N);
	int a1=1;
	printf("%d ",a1);
	if(N>=1 && N<=30)
    {	
	   for(i=1;i<=N-1;i++){
	   	next=first+second;
	   	first=second;
	   	second=next;
	   	printf("%lld ",next);
	   }
	   printf("\n");
	   
	   
    }
	return 0;
}*/

/*#include <stdio.h>
#include <math.h> 
int main()
{
	double x,y;
	int n,i;
	scanf("%d",&n);
	double arr[n];
	for(i=1;i<=n;i++)
 {
	
	scanf("%lf",&x);
	if(x<0){
		y=fabs(x)/2;
		printf("y=%lf\n",y);
	}
	else if(x>=0 && x<10){
		y=3+exp(x);
		printf("y=%lf\n",y);
	}
	else if(x>=10 && x<20){
		y=log10(x);
		printf("y=%lf\n",y);
	}
	else if(x>=20 && x<30){
		y=pow(x,1.5);
		printf("y=%lf\n",y);
	}
	else if(x>=30 && x<50){
		y=sqrt(x)-1;
		printf("y=%lf\n",y);
	}
	else{
		y=3*cos(x);
		printf("y=%lf\n",y);
	} 
 }
	return 0;
}*/

       































