/*Problem Description
����һ������n(n<=50)��ѧ����ÿ�˿�m(m<=5)�ſΣ���ÿ��ѧ����ƽ���ɼ���ÿ�ſε�ƽ���ɼ�����������Ƴɼ������ڵ���ƽ���ɼ���ѧ��������


Input
���������ж������ʵ����ÿ������ʵ���ĵ�һ�а�����������n��m���ֱ��ʾѧ�����Ϳγ�����Ȼ����n�����ݣ�ÿ�а���m���������������Է�������


Output
����ÿ������ʵ�������3�����ݣ���һ�а���n�����ݣ���ʾn��ѧ����ƽ���ɼ������������λС�����ڶ��а���m�����ݣ���ʾm�ſε�ƽ���ɼ���
���������λС������������һ����������ʾ�ð༶�и��Ƴɼ������ڵ���ƽ���ɼ���ѧ��������
ÿ������ʵ�������һ�����С�


Sample Input
2 2
5 10
10 20


Sample Output
7.50 15.00
7.50 15.00
1
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
 int n,m,i,j,cout,a[50][5];
 int b[50],c[5],find;
 while(scanf("%d%d",&n,&m)==2)
 {
  memset(b,0,sizeof(b));
  memset(c,0,sizeof(c));
  cout=0;
  for(i=0;i<n;i++)
   for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
     b[i]+=a[i][j];
   }
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
     c[i]+=a[j][i];
   }
   for(i=0;i<n;i++)
   {
    find=1;
    for(j=0;j<m;j++)
    {
     if(a[i][j]*n<c[j])
      find=0;
    }
    if(find)
     cout++;
   }
   for(i=0;i<n-1;i++)
   printf("%.2f ",(double)b[i]/m);
   printf("%.2f\n",(double)b[i]/m);
   for(i=0;i<m-1;i++)
   printf("%.2f ",(double)c[i]/n);
   printf("%.2f\n",(double)c[i]/n);
   printf("%d\n\n",cout);
 }
 return 0;





































