/*Problem Description
����n�������������������������ĳ˻���


Input
�������ݰ����������ʵ����ÿ������ʵ��ռһ�У�ÿ�еĵ�һ����Ϊn����ʾ��������һ����n����������n��������
����Լ���ÿ�����ݱض����ٴ���һ��������


Output
���ÿ�����е����������ĳ˻������ڲ���ʵ�������һ�С�


Sample Input
3 1 2 3
4 2 3 4 5


Sample Output
3
15
*/
#include<stdio.h>
int main()
{
    int n,s,i,m;
    while(scanf("%d",&n)!=EOF)
    {
        s=1;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&m);
            if(m%2!=0)
                s=s*m;
        }
        printf("%d\n",s);
    }
    return 0;
}
