#include <stdio.h>

int main(){

  float dailyRate;
  float ratePerKm;
  int days;
  float KmDriven;
  float total;

  printf("Enter the daily rate for the car rental: $");
  scanf("%f", &dailyRate);

  printf("\nEnter the rate per kilometer: $");
  scanf("%f", &ratePerKm);

  printf("\nEnter the amount of days of car rental: ");
  scanf("%d", &days);

  printf("\nEnter the amount of kilometres driven: ");
  scanf("%f", &KmDriven);

  total = (dailyRate*days) + (ratePerKm*KmDriven);
  printf("\n\nTotal Rental Amount: $%.2f", total);

  total = total*0.9; // total - 10% discount
  printf("\n-Discount amount of 10% \n-> \033[1mTotal: $%.2f\033[0m", total);

  printf("\nNumber of rental days: %d", days);
  printf("\nNumber of Km driven: %2.f", KmDriven);
}
