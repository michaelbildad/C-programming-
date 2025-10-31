#include <stdio.h>

/*
  Name:Michael Bildad Mubia 
  Reg No:CT101/G/26492/25 
  Calculates the total electricity bill based on the number of units consumed
  and the following tiered rates:
 
 */
double calculateElectricBill(int units) {
    double total_bill = 0.0;
    
    // Tier 3: Above 200 units (KSh. 20 per unit)
    if (units > 200) {
        // Calculate cost for units above 200
        int units_above_200 = units - 200;
        total_bill += units_above_200 * 20.0;
        
        // Units for the next two tiers are fixed (100 each)
        units = 200; 
    }
    
    // Tier 2: Next 100 units (101 to 200) (KSh. 15 per unit)
    if (units > 100) {
        // Calculate cost for units between 101 and 200
        int units_in_tier_2 = units - 100;
        total_bill += units_in_tier_2 * 15.0;
        
        // Units remaining for the first tier are fixed (100)
        units = 100;
    }
    
    // Tier 1: First 100 units (KSh. 10 per unit)
    if (units > 0) {
        total_bill += units * 10.0;
    }
    
    return total_bill;
}

// --- Main function to test the solution and verify the example ---
int main() {
    int consumed_units = 250;
    
    // Calculate the bill
    double bill = calculateElectricBill(consumed_units);
    
    printf("Units Consumed: %d\n", consumed_units);
    printf("Total Electric Bill: KSh. %.2f\n", bill);

    // Verify the example: If 250 units, the bill should be KSh. 3,500.
    // Calculation: (100 * 10) + (100 * 15) + (50 * 20)
    //              1000 + 1500 + 1000 = 3500.00
    
    return 0;
}