/*
Problem Description
ͳ�Ƹ�����n�����У���������������ĸ�����


Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ����������n��n<100������ʾ��Ҫͳ�Ƶ���ֵ�ĸ�����Ȼ����n��ʵ�������n=0�����ʾ���������
���в�������


Output
����ÿ���������ݣ����һ��a,b��c���ֱ��ʾ�����������и�������������ĸ�����


Sample Input
6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0


Sample Output
1 2 3
0 0 5

*/
#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    double m;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        else{
        a=b=c=0;
        for(i=0;i<n;i++)
        {
            scanf("%lf",&m);
            if(m<0) a++;
            if(m==0) b++;
            if(m>0) c++;
        }
        printf("%d %d %d\n",a,b,c);}
    }
    return 0;
}
