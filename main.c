/*Problem Description
假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。


Input
输入数据有多个测试实例，每个测试实例的第一行包括两个整数n和m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数（即：考试分数）。


Output
对于每个测试实例，输出3行数据，第一行包含n个数据，表示n个学生的平均成绩，结果保留两位小数；第二行包含m个数据，表示m门课的平均成绩，
结果保留两位小数；第三行是一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
每个测试实例后面跟一个空行。


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





































