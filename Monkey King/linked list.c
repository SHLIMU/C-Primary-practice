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
    for(i=0;i<n;i++)///���ӱ��
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
    q->next=head;///ѭ��
    while(q->next!=q)///ֻʣһ�����ӽ���ѭ��
    {
        total++;
        if(total%m==0&&total!=0)
        {
            s=q->next;
            q->next=s->next;///ɾ���ڵ�
            printf("the number %d delete...\n",s->num);///ɾ������
            free(s);///
        }
        else
            q=q->next;
    }
    printf("the king is number %d\n",q->num);///�������
    return 0;
}
