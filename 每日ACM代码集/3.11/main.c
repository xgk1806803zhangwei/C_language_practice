//2023
/*#include<stdio.h>
main()
{
    float a[50][5];
    float c[5];
    int n,m,i,j;
    float sumk,avrk,avrg,sumg;
    int number;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        sumk=0;sumg=0;number=0;
        if(n>50||m>5)
            break;
        else
        {
            for(i=0;i<n;i++)
                for(j=0;j<m;j++)
                    scanf("%f",&a[i][j]);
            for(i=0;i<n;i++)
                {
                    for(j=0;j<m;j++)
                        sumg=sumg+a[i][j];
                    avrg=sumg/n;
                    printf("%.2f ",avrg);
                }
            printf("\n");
            for(j=0;j<m;j++)
            {
                for(i=0;i<n;i++)
                    sumk=sumk+a[i][j];
                avrk=sumk/m;
                printf("%.2f ",avrk);
                c[j]=avrk;
            }
            printf("\n");
            for(i=0;i<n;i++)
                for(j=0;j<m;j++)
                {
                    if(a[i][j]>=c[j])
                        number++;
                }
            printf("%d",number);
        }

    }
}
*/
//2098
/*Problem Description
��һ��ż�����������ͬ�����ĺͣ��м��ֲ��أ�


Input
�������һЩ����ż������ֵ���ᳬ��10000���������ᳬ��500������0���������


Output
��Ӧÿ��ż����������ɲ�ͬ�����ĸ�����ÿ�����ռһ�С�


Sample Input
30
26
0


Sample Output
3
2*/
/*#include<stdio.h>
main()
{
    int n,g,i,j,k,l,si,sj,sum;
    float t;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        if(n%2==0)
        {
            t=(n-1)/2;
            sum=0;
            for(i=2;i<t;i++)
            {
                    si=0;
                    sj=0;
                    if(j=2;j<i;j++)
                        if(i%j==0)
                            si++;
                    for(k=n-i;k<n;k++)
                        for(l=2;l<k;l++)
                            {
                                if(k%l==0)sj++;
                            }
                    if(si+sj==0)
                        sum++;
            }
            printf("%d\n",sum);
        }
    }
}
*/
//2143
#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {

    }
}
