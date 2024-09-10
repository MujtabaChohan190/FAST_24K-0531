#include<stdio.h>
int main()
{
   int distance_km = 1207;
   int forward_fuel_cost = 118;
   int back_fuel_cost = 123;
   float two_way_fuelcost , Fwdtrip_cost , Backtrip_cost , fuelavg_km_per_litre, fuelconsumed;


   if (fuelavg_km_per_litre <= 0)
   {
    printf("\nInvalid input");
   }
   else
   {
    printf("Enter the fuel avg of car:");
    scanf("%f", &fuelavg_km_per_litre);

    Fwdtrip_cost = (distance_km / fuelavg_km_per_litre) * forward_fuel_cost;
    Backtrip_cost = (distance_km / fuelavg_km_per_litre) * back_fuel_cost;
    two_way_fuelcost = Fwdtrip_cost + Backtrip_cost;
    fuelconsumed = two_way_fuelcost / fuelavg_km_per_litre;

    printf("\nYour forward trip cost is : %.2f \n\nYour Back trip cost is : %.2f \n\nYour total fuel cost is : %.2f \n\nYour total fuel consumed is : %.2f " , Fwdtrip_cost , Backtrip_cost , two_way_fuelcost , fuelconsumed); 
   }
   

}