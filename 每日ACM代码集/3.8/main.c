//2058
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("%d\n",pow(a,b)%10);
    }
    return 0;
}
*/
//2024
#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int i,len,j,n;
    scanf("%d",&n);
    while(n--)
    {
        gets(c);
        j=0;
        len=strlen(c);
        if(a[0]>='A'&&a[i]<='Z')
            j++;
        if(a[0]>='a'&&a[i]<='z')
            j++;
        if(a[0]=='_')
            j++;
        for(i=1;i<len;i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
                j++;
            if(a[i]>='a'&&a[i]<='z')
                j++;
            if(a[i]>='0'&&a[i]<='9')
                j++;
            if(a[i]=='_')
                j++;
        }
        if(j==len)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
