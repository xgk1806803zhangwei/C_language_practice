/*roblem Description
��ʵ���ľ���ֵ��


Input
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ����


Output
����ÿ���������ݣ�������ľ���ֵ��Ҫ��ÿ���������һ�У����������λС����


Sample Input
123
-234.00


Sample Output
123.00
234.00
*/
#include<stdio.h>
int main()
{
    double m;
    while(scanf("%lf",&m)!=EOF)
    {
        if(m<0) m=-m;
        printf("%.2lf\n",m);
    }
    return 0;
}
//�������⣺ACM��ʵ��Ӧ����double
