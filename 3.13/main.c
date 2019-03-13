/*#include<stdio.h>
int main()
{
    int a[2][2]={1,2,3,4};
    printf("%d\n%d\n",a,*a);
    printf("%d\n%d\n",a+1,*(a+1));
    printf("%d\n%d\n%d\n",a[1],&a[1],*a[1]);
    printf("%d\n%d\n",a[1][1],&a[1][1]);
    return 0;
}*/
/*#include"stdio.h"
int main()
{
    char string[]="I love China!";
    char *string1="I love China!";
    printf("%s\n",string);
    printf("%c\n",string[7]);
    printf("%s\n",string1);
    printf("%p\n",string1);
    printf("%p\n",sring1+1)
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a,b,c,temp,max;
    scanf("%d%d%d",&a,&b,&c);
    temp=a>b?a:b;
    max=temp>c?temp:c;
    printf("%d\n",max);
    return 0;
}
*/
/*#include"stdio.h"
main()
{
    char *string="I love China!";
    string[7]='f';
    printf("%s\n",string);
    printf("%c\n",string[7]);
}*/
//СаЬт8.14
/*#include<stdio.h>
int main()
{
    void average(float *p,int n);
    void serach(float (*p)[4],int n);
    float score[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    average(*score,12);
    serach(score,2);
    return 0;
}
void average(float *p,int n)
{
    float *p_end;
    float sum=0,aver;
    p_end=p+n-1;
    for(;p<p_end;p++)
        sum=sum+(*p);
    aver=sum/n;
    printf("%5.2f\n",aver);
}
void serach(float (*p)[4],int n)
{
    int i;
    for(i=0;i<4;i++)
        printf("%5.2f",*(*(p+n)+i));
    printf("\n");
}*/
/*#include<stdio.h>
void main()
{
    void serach(float (*p)[4],int n);
    float score[3][4]={{65,67,45,66},{66,77,88,99},{65,99,98,77}};
    serach(score,3);
}
void serach(float (*p)[4],int n)
{
    int i,j,flag;
    for(j=0;j<n;j++)
    {
        flag=0;
        for(i=0;i<4;i++)
        {
            if(*(*(p+j)+i)<60)
               flag=1;
        }
        if(flag==1)
        {
            for(i=0;i<4;i++)
                printf("%5.2f",*(*(p+j)+i));
        }
        printf("\n");
    }
}
*/

