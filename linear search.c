#include<stdio.h>
int main (){
  int i,arr[10],n,check,flag=0;
  printf("enter the limit of array :");
  scanf("%d",&n);
  printf("enter the element to the arry :");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
  printf("enter the elemnt to checked:");
  scanf("%d",&check);
  for(i=0;i<n;i++){
    if(check == arr[i]){
    flag=1;
    break;
}
  }
  if(flag == 1){
      printf("the element %d is found at %dth position",check,i+1);
}   else {
      printf("the element is not found");
}
return 0;
}
