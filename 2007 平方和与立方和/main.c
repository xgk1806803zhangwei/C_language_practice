/*Problem Description
����һ���������������������������ż����ƽ�����Լ����������������͡�


Input
�������ݰ����������ʵ����ÿ�����ʵ������һ�У�����������m��n��ɡ�


Output
����ÿ���������ݣ����һ�У�Ӧ������������x��y���ֱ��ʾ�ö�����������������ż����ƽ�����Լ����������������͡�
�������Ϊ32λ�������Ա�������


Sample Input
1 3
2 5


Sample Output
4 28
20 152
 */
#include<stdio.h>
int main()
{
    int x,y,a,b,i,t;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        x=y=0;
        if(a>b) {t=a;a=b;b=t;}
        for(i=a;i<=b;i++)
        {
            if(i%2==0)
                x=x+i*i;
            else
                y=y+i*i*i;
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}

