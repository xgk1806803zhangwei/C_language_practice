/*
Problem Description
����һ�����ڣ������������Ǹ���ĵڼ��졣


Input
���������ж��飬ÿ��ռһ�У����ݸ�ʽΪYYYY/MM/DD��ɣ�����μ�sample input ,���⣬��������ȷ�����е����������ǺϷ��ġ�


Output
����ÿ���������ݣ����һ�У���ʾ�������Ǹ���ĵڼ��졣


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
//ע��case1~case11��˳������Ǵ��ϵ�����case11~b������Ӷ����´���
