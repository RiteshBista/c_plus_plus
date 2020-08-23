#include<stdio.h>

/*
    Example of a Structure
    
    Let's take an example of a mobile phone which has features such as 
    brand, price, weight, length, width, thickness
    
    author: ranjan-stha
*/

struct mobile_phone {
    char brand[20];
    int price;
    float weight;
    float length;
    float width;
    float thickness;
};

void display(struct mobile_phone m[]){
    for(int i=0;i<2;i++){
        printf("\nThe price of %s is %d and has dimension %.2fcm X %.2fcm X %.2fcm and weighs %.2f gm", m[i].brand, m[i].price, m[i].length, m[i].width, m[i].thickness, m[i].weight);
    }
}

int main(){
    struct mobile_phone mp[2];
    
    for (int i=0;i<2;i++){
        printf("Enter the details\n");
        printf("Enter the brand ");
        scanf("%s", mp[i].brand);
        printf("Enter the price(NRs.) ");
        scanf("%d", &mp[i].price);
        printf("Enter the weight(gm) ");
        scanf("%f", &mp[i].weight);
        printf("Enter the length(cm) ");
        scanf("%f", &mp[i].length);
        printf("Enter the width(cm) ");
        scanf("%f", &mp[i].width);
        printf("Enter the thickness(cm) ");
        scanf("%f", &mp[i].thickness);
    }
    
    display(mp);
    
    return 0;
}