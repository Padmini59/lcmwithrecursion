#include<stdio.h>
int factor(int n1,int n2);
int L=0;
int main()
{
	int n1,n2,result=0;   //
	
	here n1 and n2 are the two inputs//
	printf("enter two numbers for lcm:\n");
	scanf("%d%d",&n1,&n2);
	if(n1 > n2)
        result = factor(n1,n2);
    else
    	result = factor(n2,n1);
    printf("lcm of two numbers is:%d",result);
}
int factor(int n1,int n2)
{
    L+=n1;
	if((L%n1==0) && (L%n2==0))
         return L;
	else
	     return factor(n1,n2);
}
	
