/*1097
#include <stdio.h>
#include<math.h>
main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("%ld\n",(a^b)%10);
    }
}
*/
/*1061��
�ҵĴ����ǳ���ʱ�䳬ʱ����
#include<stdio.h>
main()
{
    int n,m,i;
    long s;
    scanf("%d",&n);
    while(n--)
    {
        s=1;
        scanf("%d",&m);
        for(i=1;i<=m;i++)
            s=s*m;
        printf("%d\n",s%10);
    }
}
���ϵĴ𰸣����ҵĴ𰸳���һ�㣬�����������е�һ�����ɣ�β��Ϊ3 5 9 7 1��N�η���β��Ϊԭ��������
#include<stdio.h>
int main()
{
  int n,t,i,pro;
  long m;
  scanf("%d",&n);
  while(n--)
  {
    pro=1;
    scanf("%ld",&m);
    t=(m-1)%4;
    m=m%10;
    for(i=0;i<=t;i++)
      pro*=m;
    printf("%d\n",pro%10);
  }
  return 0;
}*/
//2025�����Ӧ��ע�⣺���ַ�Ӧ�ø����ַ��������������ַ����ĸ�ʽ��
/*#include<stdio.h>
#include<string.h>
main()
{
    int i,s;
    char c[1000],m;
    while(gets(c))
    {
        m='A';
        s=strlen(c);
        for(i=0;i<s;i++)
        {
            if(c[i]>m)
                m=c[i];
        }
        for(i=0;i<s;i++)
            {
                if(c[i]==m)
                    printf("%c(max)",c[i]);
                else
                    printf("%c",c[i]);
            }
        printf("\n");
    }
}*/
//1999
/*#include<stdio.h>
main()
{

*/
//1406����ؼ���Ҫ��������num1��num2�Ĵ�С�����num1>num2�ͽ���������ֵ��
/*#include<stdio.h>
main()
{
    int n,num1,num2,i,t,j,s,sum;
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        scanf("%d%d",&num1,&num2);
        if(num1>num2)
        {
            t=num1;
            num1=num2;
            num2=t;
        }
        for(i=num1;i<=num2;i++)
        {
            s=0;
            for(j=1;j<i;j++)
            {
                if(i%j==0)
                    s=s+j;
            }
            if(s==i)
                sum++;
        }
        printf("%d\n",sum);
    }
}
*/
//2052nΪ��mΪ��(����ȷ)
/*#include<stdio.h>
main()
{
    int n,m,i,j;
    char c[77][77];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        n=n+2;
        m=m+2;
        c[0][0]='+';
        c[m-1][0]='+';
        c[0][n-1]='+';
        c[m-1][n-1]='+';
        for(j=1;j<n-1;j++)
        {
            c[0][j]='-';
            c[m-1][j]='-';
        }
        for(i=1;i<m-1;i++)
        {
            c[i][0]='|';
            c[i][n-1]='|';
        }
        for(i=1;i<m-1;i++)
        {
            for(j=1;j<n-1;j++)
                c[i][j]=' ';
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                printf("%c",c[i][j]);
            printf("\n");
        }
    }
}*/
//1040��
#include<stdio.h>
main()
{
    int t,n,i,v,j;
    int a[1000];
    while(scanf("%d",&t)!=EOF)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=1;j<n-1;j++)
                if(a[i]>a[j])
                {
                    v=a[i];
                    a[i]=a[j];
                    a[j]=v;
                }
        }
        for(i=0;i<n;i++)
        {
            if(i<n-1)
                printf("%d ",a[i]);
            else
                printf("%d\n",a[i]);
        }
    }
}
