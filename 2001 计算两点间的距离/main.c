/*���������ľ���
Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 304378    Accepted Submission(s): 104607


Problem Description
�����������꣨X1,Y1��,��X2,Y2��,���㲢��������ľ��롣


Input
���������ж��飬ÿ��ռһ�У���4��ʵ����ɣ��ֱ��ʾx1,y1,x2,y2,����֮���ÿո������


Output
����ÿ���������ݣ����һ�У����������λС����


Sample Input
0 0 0 1
0 1 1 0


Sample Output
1.00
1.41

*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,a,b;
    while(scanf("%f %f %f %f",&x1,&y1,&x2,&y2)!=EOF)
    {
        a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        b=sqrt(a);
        printf("%.2f\n",b);
    }
    return 0;
}
