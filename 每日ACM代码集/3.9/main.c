//1040
/*#include<stdio.h>
main()
{
    int t,n,a[1000],min,j,temp,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
                if(a[min]>a[j])min=j;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
        for(i=0;i<n;i++)
            {
                printf("%d",a[i]);
                if(n-i!=1)printf(" ");//数组最后一个没有空格时用该循环；
            }
        printf("\n");
    }
}
*/
//2052
/*#include<stdio.h>
main()
{
    char c[77][77];
    int n,m,i,j;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        n=n+2;
        m=m+2;
        c[0][0]='+';c[0][n-1]='+';
        for(i=1;i<n-2;i++){c[0][i]='-';c[n-1][i]='-';}
        for(i=1;i<m-2;i++)
            for(j=1;j<n-2;j++)
                {c[i][j]=' ';}
        for(i=1;j<m-2;j++)
           {c[i][0]='|';c[i][n-1]='|';}
        for(i=0;i<m;i++)
          {
              for(j=0;j<n;j++)
                printf("%c",c[i][j]);
              printf("\n");
          }
    }
}
*/
//2027
/*#include<stdio.h>
#include<string.h>
main()
{
    char c[100];
    int i,t,s,num1,num2,num3,num4,num5;
    scanf("%d",&t);
    getchar();//用getchar吸收空格（本题关键）
    while(t--)
    {
        scanf("%s",c);
        num1=num2=num3=num4=num5=0;
        s=strlen(c);
        for(i=0;i<s;i++)
        {
            if(c[i]=='a')
                num1++;
            if(c[i]=='e')
                num2++;
            if(c[i]=='i')
                num3++;
            if(c[i]=='o')
                num4++;
            if(c[i]=='u')
               num5++;
        }
        if(t==0)
            printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",num1,num2,num3,num4,num5);
        else
            printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",num1,num2,num3,num4,num5);
    }
}*/
//2030
/*#include<stdio.h>
#include<string.h>
main()
{
    int n,i,count,l;
    char c[200];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        count=0;
        gets(c);
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]<0)
                count++;
        }
        printf("%d\n",count/2);//汉字的ASCI码小于0，且占两个字节
    }
}
*/

