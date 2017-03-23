#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000];
    int num,m,i,count,sum,s;
    sum=0;
    printf("monkey number:\n");///猴子总数
    scanf("%d",&num);
    if(num<0)
    {
        printf("input again(num>=0):");
        scanf("%d",&num);
    }
    count=num;
    printf("m:");///第m个猴子淘汰
    scanf("%d",&m);
    printf("how many surplus:");
    scanf("%d",&s);
    for(i=1;i<=num;i++)///留下的猴子赋值为1
    {
        a[i]=1;
    }
    for(i=1;count>s;i++)///剩余猴子总数为1停止
    {
        if(a[i]!=0)
        {
        sum++;
        if(sum%m==0)///删除猴子
        {
            a[i]=0;
            count--;
            printf("number %d monkey has delete...\n",i);
        }
        }
        if(i==num)///循环
        {
            i=0;
        }
    }
    for(i=1;i<=num;i++)///输出猴王
    {
        if(a[i]!=0)
        {
            printf("the king is number:%d\n",i);
        }
    }
    return 0;
}
