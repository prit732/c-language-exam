#include<stdio.h>

int main(){
    int maths,english,science;
    float average;

    printf("Enter the first value =");
    scanf("%d",&maths);
    printf("Enter the second value =");
    scanf("%d",&english);
    printf("Enter the third value =");
    scanf("%d",&science);

    if( maths < 0 && english < 0 &&science < 0 &&maths > 100 && english > 100 &&science > 100){
        printf("invalid marks");
    }
    else{
      average = (maths + english + science)/3;
        printf(" marks is = %f",average);
    }
    


}