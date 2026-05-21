#include <stdio.h>

int main() {
    printf("--- Winkler Method: Dissolved Oxygen Calculator ---\n");

    double volume_sample, normality, volume_titrant, dissolved_oxygen;

    // Get lab data inputs from the user
    printf("Enter the volume of the water sample (in ml): ");
    scanf("%lf", &volume_sample);

    printf("Enter the normality of the titrant (e.g., 0.025): ");
    scanf("%lf", &normality);

    printf("Enter the volume of titrant used from the burette (in ml): ");
    scanf("%lf", &volume_titrant);

    // Safety check to avoid division by zero
    if (volume_sample <= 0) {
        printf("Error: Sample volume must be greater than zero.\n");
        return 1; // Exits the program with an error state
    }

    // Standard Winkler Method Formula: DO = (V1 * N * 8 * 1000) / V2
    // The number 8 represents the equivalent weight of oxygen
    dissolved_oxygen = (volume_titrant * normality * 8 * 1000) / volume_sample;

    // Output the final calculated result (formatted to 2 decimal places)
    printf("\n---------------------------------------------------\n");
    printf("Calculated Dissolved Oxygen: %.2lf mg/L\n", dissolved_oxygen);
    printf("---------------------------------------------------\n");

    return 0;
}
