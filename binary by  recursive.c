#include<stdio.h>
int binary(int a[],int,int,int );
int main()
{
int n,i,key, a[50],result;

printf("enter the number of elmennts");
scanf("%d",&n);

printf("enter the elements of array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the key ");
scanf("%d",&key);

result=binary(a,0,n-1,key);
if (result==-1)
{
    printf("not found");
}
else
{
    printf("found at %d",result+1);
}

return 0;
}

int binary(int a[],int low,int high,int key)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            return binary(a,low,mid-1,key);
        }
        else 
        {
            return binary(a,mid+1,high,key);
        }
    }
    else
    {
        return -1;
    }
}