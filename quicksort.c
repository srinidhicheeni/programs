#include<stdio.h>

int partition(int a[],int low,int high){
    int i=low+1,j=high,temp;
    int key=a[low];
    while(i<high && a[i]<key)i++;
    while(j>0 && a[j]>key)j--;
    if(i<j){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    else{
        temp=a[j];
        a[j]=a[low];
        a[low]=temp;
        return j;
    }

}
void quick_sort(int arr[],int low,int high){
int j;
if(low<high){
    j=partition(arr,low,high);
    quick_sort(arr,low,j-1);
    quick_sort(arr,j+1,high);
}
}

int main(){
int arr[1000],i,n;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("The array before sorting is : \n");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
quick_sort(arr,0,n-1);
printf("The array after sorting is :");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
return 0;
}
