#include<stdio.h>
int main()
{
int n,i,key, a[50],mid,high,low,flag=0;

printf("enter the number of elmennts");
scanf("%d",&n);

printf("enter the elements of array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the key ");
scanf("%d",&key);

low=0;
high=n-1;


while(low<=high)
{
    mid=(low+high)/2;
    if (a[mid]==key)
    {
        flag=1;
        break;
    }
    else if(a[mid]>key)
    {
        high=mid-1;
    }
    else 
    {
        low=mid+1;
    }
    
}
if(flag==1)
{
    printf("the element is found at %d",mid +1);
}
 else
 {
    printf("element no found");
 }
 return 0;
}