//2024
/*#include<stdio.h>
#include<string.h>
main()
{
    int n,s,i;
    char c[60];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(c);
        if((c[0]>='A'&&c[0]<='Z')||(c[0]>='a'&&c[0]<='z')||c[0]=='_')
        {
            s=strlen(c);
            for(i=1;i<s;i++)
            {
                c[i-1]='\0';
                if(c[i]>='0'&&c[i]<='9')
                    continue;
                if(c[i]>='A'&&c[i]<='Z')
                    continue;
                if(c[i]>='a'&&c[i]<='z')
                    continue;
                if(c[i]=='_')
                    continue;
                printf("no\n");
                break;
            }
            c[i-1]='\0';
            if(i==s)
                printf("yes\n");
        }
        else
            printf("no\n");
    }
}
*/
//2052
/*#include<stdio.h>
main()
{
    int n,m,i,j;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n<=0||m>=75)
            break;
        printf("+");
        for(i=1;i<=n;i++)
            printf("-");
        printf("+\n");
        for(j=1;j<=m;j++)
        {
            printf("|");
            for(i=1;i<=n;i++)
                printf(" ");
            printf("|\n");
        }
        printf("+");
        for(i=1;i<=n;i++)
            printf("-");
        printf("+\n");
        printf("\n");
    }
}*/
//1108
/*#include<stdio.h>
main()
{
    int n,m,r,t,max,min;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n>1000||n<0||m>1000||m<0)
            break;
        else
        {
            if(n<m)
            {
                t=n;
                n=m;
                m=t;
            }
            min=n*m;
            while(m!=0)
            {
                r=n%m;
                n=m;
                m=r;
            }
            max=n;
            printf("%d\n",min/max);
        }
    }
}*/
//2055
#include<stdio.h>
main()
{
    int y,i,t;
    char c[26],x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%c%d",&x,&y);
        for(i='A';i<='Z';i++)
            c[26]
    }
}

