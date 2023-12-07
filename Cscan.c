#include<stdio.h>
#include<stdlib.h>
int a[100],v[100];
void sort(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
       {
         int temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
       }
    }
  }
}

int main()
{
  int n,st,i,x=0,curr,distance,min;
  int temp1[20],temp2[20],t1=0,t2=0;
  printf("enter no of process : ");
  scanf("%d",&n);
  //int a[n];
  printf("enter process : ");
  for(i=0;i<n;i++)
  v[i]=0;
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
   printf("enter starting point : ");
  scanf("%d",&st);
  
  sort(a,n);
  for(int i=0;i<n;i++)
  {
    if(a[i]<st)
    { temp1[t1]=a[i];
     t1++;
     }
     else
     {
       temp2[t2]=a[i];
       t2++;
     }
  }
  i=0;
  printf("sequence of process\n");
  while(i<t2)
  {
    x=x+abs(st-temp2[i]);
    st=temp2[i];
    printf("%d\t",temp2[i]);
    i++;
  }
  x=x+abs(st-199);
  printf("199\t0\t");
  x=x+abs(199-0);
  st=0;
  i=0;
  while(i<t1)
  {
    x=x+abs(st-temp1[i]);
    st=temp1[i];
    printf("%d\t",temp1[i]);
    i++;
  }
  
   printf("\ntotal seek operations = %d",x);
  }
  

