#include <stdio.h>

struct items
{
    char item[30];
    float price,totamt,gst,amt,dis;
    int qty;
};
void main()
{
    struct items list[20];
    int i=0,num;
    float amt=0;
    char choice;
    printf("Welcome to NAMMA VEEDU ");
    //printf("\nEnter the number of items: ");
    //scanf("%d",&num);
    do
    {    
       //FILE *fp1;
       //fp1=fopen("data.bin","wb");
        printf("\nEnter the item %d: ",i+1);
        scanf("\n%[^\n]s",list[i].item);
        printf("Enter the price: ");
        scanf("%f",&list[i].price);
        printf("Enter the quantity: ");
        scanf("%d",&list[i].qty);
        list[i].amt=list[i].price*list[i].qty;
        list[i].gst=list[i].amt*0.12;
        list[i].dis=list[i].amt*0.05;
        list[i].totamt=list[i].amt+list[i].gst-list[i].dis;
        //fwrite(&list[i],sizeof(list[i]),1,fp1);
        amt+=list[i].totamt;
        printf("Do you want to add further: (y/n)\n");
        scanf("%s",choice);
    }while(choice=='y' || choice=='Y');
    printf("\n                                          Namma Veedu                                                     ");
    printf("\n                                   M.G.R.Bus stand opp.,Madurai                                           ");
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nS.NO  ITEMS                      PRICE    QTY     AMOUNT     GST(12%%)      DISCOUNT(5%%)      NET PAYABLE");
    printf("\n----------------------------------------------------------------------------------------------------------");
    for (i=0;i<num;i++)
    {printf("\n%-5d %-25s %-10.2f %-5d %-13.2f %-15.2f %-15.1f%-25.2f",i+1,list[i].item,list[i].price,list[i].qty,list[i].amt,list[i].gst,list[i].dis,list[i].totamt);}
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\n                                                                            Total amount:     %.2f",amt);
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\n                                             Thank you!                                                   ");
    printf("\n                                          ...Visit again...                                               ");
}