#include<stdio.h>

int main(){

    int user,user2;

    printf("press 1 for English.\n ");
    printf("press 2 for Hindi.\n ");
    printf("press 3 for Gujarati \n");

    printf("enter your no. => ");
    scanf("%d",&user);

    switch (user)
    {
    case 1:
        printf("press 1 for internet recharge\n");
        printf("press 2 for top-up recharge\n");
        printf("press 3 for special recharge\n");
        break;
    case 2:
        printf("press 1 for internet recharge\n");
        printf("press 2 for top-up recharge\n");
        printf("press 3 for special recharge\n");
        break;
    case 3:
        printf("press 1 for internet recharge\n");
        printf("press 2 for top-up recharge\n");
        printf("press 3 for special recharge\n");
        break;
    
    default:
        break;
    }

    printf("enter your no. => ");
    scanf("%d",&user2);

    switch (user2)
    {
    case 1:
        printf("you have successfully done a inter.  specialcharge");
        break;
    case 2:
        printf("you have successfully done  a  top-up recharge");
        break;
    case 3:
        printf("you have successfully done a special recharge");
        break;
    
    default:
        break;
    }
}