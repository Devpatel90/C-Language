#include<stdio.h>
int min(int h,int i,int j,int k,int l);
void main()
{
   int a,b,c,d,e,ans;

	printf("Enter the First number : ");	
	scanf("%d",&a);

	printf("Enter the Second number : ");	
	scanf("%d",&b);

	printf("Enter the Third number : ");	
	scanf("%d",&c);

	printf("Enter the Fourth number : ");	
	scanf("%d",&d);

	printf("Enter the Fifth number : ");	
	scanf("%d",&e);

    ans=min(a,b,c,d,e);

    printf("The Minimum Number is:- %d",ans);

}
int min(int h,int i,int j,int k,int l)
{
    if(h<i)
	{
		if(h<j && h<k && h<l)
		{
            return h;
		}
		else if(j<k && j<l)
		{
            return j;
		}
		else if(k<l)
		{
            return k;
		}
		else
		{
            return l;
		}
	}
	else if(i<j)
	{
		if(i<j && i<k && i<l)
		{
            return i;
		}
		else if(j<k && j<l)
		{
            return j;
		}
		else if(k<l)
		{
            return k;
		}
		else
		{
            return l;
		}
	}
	else if(j<k)
	{
		if(j<l)
		{
            return j;
		}
		else
		{
            return l;
		}
	}
	else if(k<l)
	{
        return k;
	}
	else
	{
        return l;
	}
    
}