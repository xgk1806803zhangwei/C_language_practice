/*
Problem Description
给定一个日期，输出这个日期是该年的第几天。


Input
输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，具体参见sample input ,另外，可以向你确保所有的输入数据是合法的。


Output
对于每组输入数据，输出一行，表示该日期是该年的第几天。


Sample Input
1985/1/20
2006/3/12


Sample Output
20
71
*/
#include<stdio.h>
int main()
{
    int a,b,c,s;
    while(scanf("%d/%d/%d",&a,&b,&c)!=EOF)
    {
        s=0;
        switch(b-1)
        {
            case 11:s+=30;
            case 10:s+=31;
            case 9:s+=30;
            case 8:s+=31;
            case 7:s+=31;
            case 6:s+=30;
            case 5:s+=31;
            case 4:s+=30;
            case 3:s+=31;
            case 2:s+=(a%4==0&&a%100!=0)||(a%(400)==0)?29:28;
            case 1:s+=31;
        }
        printf("%d\n",s+c);
    }
    return 0;
}
//注意case1~case11的顺序，如果是从上到下则case11~b都会叠加而导致错误
