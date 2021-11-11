#include <stdio.h>
int main()

{

    int xNumb,quanX,pMX,pDX,pYX;
            float xPrice,totalX;

    printf("Enter item Number: ");
    scanf("%d",&xNumb);

    printf("Enter unit price: ");
    scanf("%f",&xPrice);

    printf("Enter quantity: ");
    scanf("%d",&quanX);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d%d%d",&pMX,&pDX,&pYX);

    totalX=xPrice*quanX;

    printf("Item \t");
    printf("QTY \t");
    printf("purchase date \t");
    printf("Unit Price \t");
    printf("Total Amount \t \n");

    printf("%d \t",xNumb);
    printf("%d \t",quanX);
    printf("%d / %d / %d \t",pMX,pDX,pYX);
    printf("$ %f \t",xPrice);
    printf("$ %f \t",totalX);
    return 0;
}
                                                                        


