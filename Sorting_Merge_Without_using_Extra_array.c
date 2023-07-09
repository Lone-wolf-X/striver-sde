#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int left,int mid,int right)
{
    int i,j,k;
    int n1 = (mid-left)+1;
    int n2 = right-mid;

    int L[n1],R[n2];

    for(i=0; i<n1; i++)
    L[i]=a[left+i];
    for(j=0; j<n2; j++)
    R[j]=a[mid+1+j];

    i=0;
    j=0;
    k=left;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        a[k++]=L[i++];
        else
        a[k++]=R[j++];
    }
    while(i<n1)
    {
        a[k++] = L[i++];
    } 
    while(j<n2)
    {
        a[k++]=R[j++];
    }
}
void printarray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
void mergesort(int a[], int left , int right)
{
    if(right>left)
    {
        int mid =  (right+left)/2;

        mergesort(a,left,mid);
        mergesort(a,mid+1,right);

        merge(a,left,mid,right);
    }
}
int main()
{
    int a[9] = {50,25,92,16,76,30,43,54,19};
    int low = 0;
    int high = 9;
    mergesort(a,low,high-1);

    printarray(a,9);
}