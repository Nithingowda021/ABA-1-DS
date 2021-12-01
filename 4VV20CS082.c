#include<stdio.h>

int getmax(int arr[],int n){
int max=arr[0],i;
for(i=1;i<n;i++){
if(arr[i]>max){
max=arr[i];
}
}
return max;
}

int main(){
int arr[20],n,i;
printf("Enter the number of elements:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int m=getmax(arr,n);
int exp;
for(exp=1;(m/exp)>0;exp*=10){
int output[20];
int count[10]={0};
for(i=0;i<n;i++){
count[(arr[i]/exp)%10]++;
}
for(i=1;i<10;i++){
count[i]+=count[i-1];
}
for(i=n-1;i>=0;i--){
output[count[(arr[i]/exp)%10]-1]=arr[i];
count[(arr[i]/exp)%10]--;
}
for(i=0;i<n;i++){
printf("%d ",output[i]);
arr[i]=output[i];
}
printf("\n");
}
printf("Sorted array:\n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}

