#include<stdio.h>
void main()
{
    int f_a[] = {1,2,3,4,5},s_a[] = {6,7,8},m_a[10];

    for(int i=0;i<5;i++)
    {
        m_a[i]=f_a[i];
        m_a[i+5]=s_a[i];
    }

    for(int i=0;i<10;i++)
    {
        printf("m[%d] = %d\n",i,m_a[i]);
    }

}