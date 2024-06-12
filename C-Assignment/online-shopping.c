#include<stdio.h>
int products(int choice){
    int decision;
    char ch;
    if(choice!= 0){
        switch (choice)
        {
        case 1:
            printf("Bag:Add to cart(Y/N)\n");
            scanf(" %c", &ch);
            if(ch =='Y'){
                printf("Added to cart\n");
                printf("1.Buy\t\t2.Buy Later\n");
                scanf("%d",&decision);
                if(decision==1){
                    printf("Oreder Confirmed!!! Happy Shopping :) ");
                }
                else{
                    printf("Will see you soon!! Apka intezaar rahega");
                }
            }
            else{
                printf("Thankyou");
            }
            break;
        case 2:
             printf("Brush:Add to cart(Y/N)\n");
            scanf(" %c", &ch);
            if(ch =='Y'){
                printf("Added to cart\n");
                printf("1.Buy\t\t2.Buy Later\n");
                scanf("%d",&decision);
                if(decision==1){
                    printf("Oreder Confirmed!!! Happy Shopping :) ");
                }
                else{
                    printf("Will see you soon!! Apka intezaar rahega");
                }
            }
            else{
                printf("Thankyou");
            }
            break;
        case 3:
             printf("Pen:Add to cart(Y/N)\n");
            scanf(" %c", &ch);
            if(ch =='Y'){
                printf("Added to cart\n");
                printf("1.Buy\t\t2.Buy Later\n");
                scanf("%d",&decision);
                if(decision==1){
                    printf("Oreder Confirmed!!! Happy Shopping :) ");
                }
                else{
                    printf("Will see you soon!! Apka intezaar rahega");
                }
            }
            else{
                printf("Thankyou");
            }
            break;
        case 4:
             printf("Mouse:Add to cart(Y/N)\n");
            scanf(" %c", &ch);
            if(ch =='Y'){
                printf("Added to cart\n");
                printf("1.Buy\t\t2.Buy Later\n");
                scanf("%d",&decision);
                if(decision==1){
                    printf("Oreder Confirmed!!! Happy Shopping :) ");
                }
                else{
                    printf("Will see you soon!! Apka intezaar rahega");
                }
            }
            else{
                printf("Thankyou");
            }
            break;
        default:
        printf("Item not found");
            break;
        }
    }
}
int main(){
    int choice;
    printf("ONLINE SHOPPING\n");
   printf("ITEMS\n");
    printf("%-2d. %-10s %s\n", 1, "Bag:", "10$");
    printf("%-2d. %-10s %s\n", 2, "Brush:", "2$");
    printf("%-2d. %-10s %s\n", 3, "Pen:", "1$");
    printf("%-2d. %-10s %s\n", 4, "Mouse:", "4$");
    printf("Enter item number\n");
    scanf("%d",&choice);
    products(choice);
}