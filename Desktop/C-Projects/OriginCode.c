#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct itmes
{
    char item[50];
    int qty;
    int unitP;
};
struct client
{
    char Name[50];
    char date[50];
    int NumOfItems;
    struct itmes itm[];
};
struct client ord;
int N_choice;
float Uprice;
float total;

// initiation of 3 fanction of the format of the final bills
void generateBillHeader(char name[50], char date[30]);
void generateBillBody(char item[30], int qty, float price);
void generateBillFooter(float total);

// main function

int main()
{
    printf("\t============ADV. RESTAURANT============");
    printf("\n\nPlease select your prefered operation");
    printf("\n\n1.Generate Invoice");
    printf("\n2.Show all Invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");
    printf("\n");

    scanf("%d", &N_choice);
    fgetc(stdin);

    // after the client chose we have 4 cases :

    // First case
    switch (N_choice)
    {
    case 1:
        printf("\nPlease enter the name of the customer:\t");
        fgets(ord.Name, 50, stdin);
        ord.Name[strlen(ord.Name) - 1] = 0;
        strcpy(ord.date, __DATE__);
        printf("\nPlease enter the number of items:\t");
        int n;
        scanf("%d", &n);
        ord.NumOfItems = n;
        for (int i = 0; i < n; i++)
        {
            fgetc(stdin);
            printf("Please enter the item %d:\t", i + 1);
            fgets(ord.itm[i].item, 50, stdin);
            ord.itm[i].item[strlen(ord.itm[i].item) - 1] = 0;
            printf("Please enter the quantity:\t");
            scanf("%d", &ord.itm[i].qty);
            printf("please enter the unit price:\t");
            scanf("%d", &ord.itm[i].unitP);
            total = total + (ord.itm[i].qty * ord.itm[i].unitP);
        }
        generateBillHeader(ord.Name, ord.date);
        for (int i = 0; i < ord.NumOfItems; i++)
        {
            generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].unitP);
        }
        generateBillFooter(total);
        break;

    default:

        break;
    }

    // Fanction that givees the format to the header of the bills it content the NAME and the DATE
}
void generateBillHeader(char Name[50], char date[30])
{
    printf("\n\n");
    printf("\t    ADV. Restaurant");
    printf("\n\t   -----------------");
    printf("\nDate:%s", date);
    printf("\nInvoice To: %s", Name);
    printf("\n");
    printf("---------------------------------------\n");
    printf("Items\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n---------------------------------------");
    printf("\n\n");
}
// Fanction that gives the format to the body of the bills it content the itmes and the price

void generateBillBody(char item[30], int qty, float price)
{
    printf("%s\t\t", item);
    printf("%d\t\t", qty);
    printf("%.2f\t\t", qty * price);
    printf("\n");
}
// Fanction that gives the format to the footer of the bills it content the discount and the final total

void generateBillFooter(float total)
{
    printf("\n");
    float dis = 0.1 * total;
    float netTotal = total - dis;
    printf("---------------------------------------\n");
    printf("Sub Total\t\t\t%.2f", total);
    printf("\nDiscount @10%s\t\t\t%.2f", "%", dis);
    printf("\n\t\t\t\t-------");
    printf("\nNet Total\t\t\t%.2f", netTotal);
    printf("\n---------------------------------------");
}
