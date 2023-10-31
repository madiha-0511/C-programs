#include<stdio.h>
void main(){
    int i,j;
    //initialization of arr
    int arr1[3][3]={{1,2,3},
                    {5,6,7},
                    {8,9,10}};
    int arr2[3][3]={{2,4,6},
                    {1,3,5},
                    {9,5,3}};
    int result[3][3];
    //trasesing in 2 dim arr
   //for finding size of array and length of array
   printf("%d",sizeof(arr2)/sizeof(arr2[0][0]));
   
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
            
        }
    printf("\n");
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          printf("%d\t",result[i][j]);
        }
    printf("\n");
    }

}