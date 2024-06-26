#include <stdio.h>

int TotalCost(int numOfTickets, int coupon, char class, int refresh) {
    int discount = 10;
    int coup = 2;
    int kclass = 75;
    int qclass = 150;
    int refreshment = 50;
    int totalPrice = 0;
    int discountPrice = 0;
    int finalDiscount = 0;
    int refcost = 0;
    int grossPrice = 0;

    if (class == 'K') {
        totalPrice = numOfTickets * kclass;
        printf("Total price is %d\n", totalPrice);

        if (numOfTickets >= 20) {
            discountPrice = totalPrice - ((discount * totalPrice) / 100);
            printf(" GREATER THAN 20 PEOPLE Discounted price is %d\n", discountPrice);

            if (coupon == 1) {
                finalDiscount = discountPrice - ((coup * discountPrice) / 100);
                printf("HAVING COUPON Final discount price is %d\n", finalDiscount);
            } else {
                finalDiscount = discountPrice;
                printf("Discounted price is %d\n", discountPrice);
            }
        } else {
            finalDiscount = totalPrice;
        }

        if (refresh == 1) {
            refcost = numOfTickets * refreshment;
            grossPrice = finalDiscount + refcost;
            printf("After adding refreshments, total price is %d\n", grossPrice);
        } else {
            grossPrice = finalDiscount;
            printf("Total price without refreshments is %d\n", grossPrice);
        }
    } else if (class == 'Q') {
        totalPrice = numOfTickets * qclass;
        printf("Total price is %d\n", totalPrice);

        if (numOfTickets >= 20) {
            discountPrice = totalPrice - ((discount * totalPrice) / 100);
            printf("Discounted price is %d\n", discountPrice);

            if (coupon == 1) {
                finalDiscount = discountPrice - ((coup * discountPrice) / 100);
                printf("Final discount price is %d\n", finalDiscount);
            } else {
                finalDiscount = discountPrice;
                printf("Discounted price is %d\n", discountPrice);
            }
        } else {
            finalDiscount = totalPrice;
        }

        if (refresh == 1) {
            refcost = numOfTickets * refreshment;
            grossPrice = finalDiscount + refcost;
            printf("After adding refreshments, total price is %d\n", grossPrice);
        } else {
            grossPrice = finalDiscount;
            printf("Total price without refreshments is %d\n", grossPrice);
        }
    }

    return 0;
}

int main() {
    int NoTickets = 0;
    int coupon = 0;
    char class;
    int refresh = 0;

    printf("Enter the number of people: ");
    scanf("%d", &NoTickets);

    printf("Enter '1' if you have a coupon or '0': ");
    scanf("%d", &coupon);

    // Flush the newline character left by the previous scanf
    getchar();

    printf("Enter class ('K' or 'Q'): ");
    scanf("%c", &class);

    printf("Enter '1' if you want refreshment or '0': ");
    scanf("%d", &refresh);

    // You can add some output to verify the input values if needed
    printf("NoTickets: %d\n", NoTickets);
    printf("Coupon: %d\n", coupon);
    printf("Class: %c\n", class);
    printf("Refreshment: %d\n", refresh);

    TotalCost(NoTickets, coupon, class, refresh);

    return 0;
}
