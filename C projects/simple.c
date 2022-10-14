#include <stdio.h>
void main()
{
  int a[50],i,j,n,t;
  printf("Enter size of list(1-50)");
  scanf("%d\n",&n);
  printf("Enter %d no's",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  //             sorting      //
  for (size_t i = 0;i<n; i++)
  {
    for (size_t i=i+1;i<n;i++)
     {
       if (a[i]>a[j])
        {
         a[i]=a[j];
         a[j]=t;
       }
     }
  }
  printf("\n the sorted list is \n");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
