/*Problem Description
��������İ뾶ֵ��������������


Input
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ������ʾ��İ뾶��


Output
�����Ӧ��������������ÿ���������ݣ����һ�У�������������λС����


Sample Input
1
1.5


Sample Output
4.189
14.137

Hint

#define PI 3.1415927
*/
#include<stdio.h>
#define PI 3.1415927
int main()
{
    double v,r;
    while(scanf("%lf",&r)!=EOF)
    {
        v=4.0/3*PI*r*r*r;
        printf("%.3lf\n",v);
    }
    return 0;
}
//����ע��:PI��λ���Ѿ�����6λ��������ʵ����
