#include<stdio.h>
int main()
{
 int a[20],b[20],n,i,j,temp,p,s,m,x,t=0;
 printf("Enter head pointer position:\n");
 scanf("%d",&a[0]);
 s=a[0];
 printf("Enter previous head position:\n");
 scanf("%d",&p);
 printf("Enter max track limit:\n");
 scanf("%d",&m);
 printf("Enter number of processes:\n");
 scanf("%d",&n);
 printf("Enter processes in request order\n");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
 }
 a[n+1]=m;
 a[n+2]=0;
 for(i=n+1;i>=0;i--)
 {
  for(j=0;j<=i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 for(i=1;i<=n+1;i++)
 {
  if(s==a[i])
  x=i;
 }
 j=0;
 if(s<p)
 {
  for(i=x;i>0;i--)
  {
   t+=(a[i]-a[i-1]);
   b[j++]=a[i];
  }
  t+=a[x+1]-a[0];
  b[j++]=a[0];
  for(i=x+1;i<n+1;i++)
  {
   t+=(a[i+1]-a[i]);
   b[j++]=a[i];
  }
  b[j++]=a[i];
 }
 else
 {
  for(i=x;i<n+2;i++)
  {
   t+=(a[i+1]-a[i]);
   b[j++]=a[i];
  }
  t+=a[n+2]-a[x-1];
  b[j++]=a[n+2];
  for(i=x-1;i>1;i--)
  {
   t+=(a[i]-a[i-1]);
   b[j++]=a[i];
  }
  b[j++]=a[i];
 }
 printf("Processing order:");
 for(i=0;i<=n+1;i++)
 printf("\t%d",b[i]);
 printf("\nTotal Head Movement:%d",t);
 return 0;
}
