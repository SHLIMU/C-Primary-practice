#include <stdio.h>
#include <stdlib.h>
 struct monkey
{
    int num;
    struct monkey *next;
};
int main()
{
    int n,total,m,i;
    printf("monkey number:");
    scanf("%d",&n);
    printf("m:");
    scanf("%d",&m);
    struct monkey *head,*q,*s;
    total=0;
    for(i=0;i<n;i++)///猴子编号
    {
        s=(struct monkey*)malloc(sizeof(struct monkey));
        s->num=i+1;
        s->next=NULL;
        if(i==0)
        {
            head=s;
            q=head;
        }
        else
        {
            q->next=s;
            q=q->next;
        }
    }
    q->next=head;///循环
    while(q->next!=q)///只剩一个猴子结束循环
    {
        total++;
        if(total%m==0&&total!=0)
        {
            s=q->next;
            q->next=s->next;///删除节点
            printf("the number %d delete...\n",s->num);///删除猴子
            free(s);///
        }
        else
            q=q->next;
    }
    printf("the king is number %d\n",q->num);///输出猴王
    return 0;
}
