//例题8.3
/*#include<stdio.h>
int main()
{
    void swap(int *pa,int *pb);
    int a,b;
    int *pointer_1,*pointer_2;
    printf("please enter a and b:");
    scanf("%d,%d",&a,&b);
    pointer_1=&a;
    pointer_2=&b;
    if(a<b)swap(pointer_1,pointer_2);
    printf("max=%d,min=%d\n",a,b);
    return 0;
}
void swap(int *pa,int *pb)
{
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}*/
/*void swap(int *pa,int *pb)
{
int *temp;
*temp=*pa;
*pa=*pb;
*pb=*temp;
或者：
int *temp;
temp=pa;
pa=pb;
pb=temp;//temp的指向还是不明，切记；
}
*/
//上述函数*temp指向不明，为错误的定义方式；切记这点，容易搞错。
//例题8.1
/*#include<stdio.h>
int main()
{
    int a,b;
    int *pointer_1,*pointer_2;
    scanf("%d%d",&a,&b);
    pointer_1=&a;
    pointer_2=&b;
    printf("a=%d,b=%d\n",a,b);
    printf("*pointer_1=%d,*pointer_2=%d\n",*pointer_1,*pointer_2);
    return 0;
}
*/
//3个数按大小输出
/*#include<stdio.h>
void swap(int *pa,int *pb,int *pc)
{
    int temp;
    if(*pa<*pb){temp=*pa;*pa=*pb;*pb=temp;}
    if(*pa<*pc){temp=*pa;*pa=*pc;*pc=temp;}
    if(*pb<*pc){temp=*pb;*pb=*pc;*pc=temp;}
}
int main()
{
    int a,b,c,*pointer_1,*pointer_2,*pointer_3;
    scanf("%d%d%d",&a,&b,&c);
    pointer_1=&a;
    pointer_2=&b;
    pointer_3=&c;
    swap(pointer_1,pointer_2,pointer_3);
    printf("%d %d %d\n",a,b,c);
    return 0;
}
*/
//构造越界
/*#include"stdio.h"
int main()
{
    int a[10],i,*p;
    p=a;
    for(i=0;i<10;i++)
    {
        a[i]=i;
    }
    p=p-100000;
    printf("%d %d\n",p,*p);
    return 0;
}*/
//已经已经越界了；
//8.6下标法
/*#include<stdio.h>
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}
*/
//通过数组名
/*#include<stdio.h>
int main()
{
    int a[10],i,*p;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<10;i++)
    {
        printf("%2d",*(p+i));
    }
    printf("\n");
    return 0;
}
*/
//用指针变量指向数组元素
/*#include<stdio.h>
int main()
{
    int a[10],*p,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(p=a;p<(a+10);p++)
    {
        printf("%2d",*p);
    }
    printf("\n");
    return 0;
}
*/
/*#include<stdio.h>
main()
{
    int a[4],i,*p;
    for(i=0;i<4;i++)
    {
        scanf("%d",a[i]);
    }
    for(p=a;p<(a+4);p++)
    {
        printf("%d")
    }
}*/
//8.8
/*(1)#include<stdio.h>
main()
{
    int n,a[100],t,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n/2);i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}*/\
//(2)
/*#include<stdio.h>
main()
{
    int a[100],i,n;
    int inv(int x[],int n);
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    inv(a,n);
    for(i=0;i<n;i++){printf("%d",a[i]);}
}
int inv(int x[],int n)
{
    int temp,*i,*j;
    for(i=x,j=x+n-1;i<j;i++,j--)
    {
        temp=*i;
        *i=*j;
        *j=temp;
    }
}/
//学1
/*#include<stdio.h>
#include<math.h>
main()
{
    float n,r,p;
    r=0.07;
    n=10;
    p=pow(1+r,10);
    printf("%f\n",p);
}*/
//学6
/*#include<stdio.h>
main()
{
    char c1,c2,c3,c4,c5;
    c1='C';
    c2='h';
    c3='i';
    c4='n';
    c5='a';
    c1=c1+4;
    c2=c2+4;
    c3=c3+4;
    c4=c4+4;
    c5=c5+4;
    //printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);


}*/
//8.8(1)选择法排序
#include<stdio.h>
main()
{
    int a[5],i,j,t,k;
    for(i=0;i<5;i++){scanf("%d",&a[i]);}
    for(i=0;i<4;i++)
    {
        k=i;
        for(j=1;j<5;j++)
        {
        if(a[k]>a[j])
        {
            k=j;
            t=a[k];
            a[k]=a[j];
            a[j]=t;
        }
        }
    }
    for(i=0;i<5;i++){printf("%d ",a[i]);}
    printf("\n");
}
