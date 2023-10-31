#include<stdio.h>
//Elements of array sorted in acending order
void main(){
    int i,j,temp=0;
    int arr[]={14,13,15,17,12,11,16};
    printf("array element before sorting:");
    for(i=0;i<7;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }          
        }    
    }
    printf("array element after sorting:");
    for(i=0;i<7;i++){
        printf("%d\n",arr[i]);

    }

}