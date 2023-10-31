#include<stdio.h>
float areaofcircle(float r){
    float res=3.14*r*r;
    return res;
}
void main(){
    printf("%f",areaofcircle(3.3));
}