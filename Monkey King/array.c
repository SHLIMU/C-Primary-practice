#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000];
    int num,m,i,count,sum,s;
    sum=0;
    printf("monkey number:\n");///��������
    scanf("%d",&num);
    if(num<0)
    {
        printf("input again(num>=0):");
        scanf("%d",&num);
    }
    count=num;
    printf("m:");///��m��������̭
    scanf("%d",&m);
    printf("how many surplus:");
    scanf("%d",&s);
    for(i=1;i<=num;i++)///���µĺ��Ӹ�ֵΪ1
    {
        a[i]=1;
    }
    for(i=1;count>s;i++)///ʣ���������Ϊ1ֹͣ
    {
        if(a[i]!=0)
        {
        sum++;
        if(sum%m==0)///ɾ������
        {
            a[i]=0;
            count--;
            printf("number %d monkey has delete...\n",i);
        }
        }
        if(i==num)///ѭ��
        {
            i=0;
        }
    }
    for(i=1;i<=num;i++)///�������
    {
        if(a[i]!=0)
        {
            printf("the king is number:%d\n",i);
        }
    }
    return 0;
}
