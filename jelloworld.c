#include <stdio.h>
#include <math.h>

// Forward TC function
float NISTdegCtoMilliVoltsKtype(float tempDegC);  // returns EMF in millivolts
// Inverse TC function
float NISTmilliVoltsToDegCKtype(float tcEMFmV);  // returns temp in degC assuming 0 degC cold jcn

int main()
{
    // --- Define reference voltage ---
    const float Vref = 5.0f;  

    // --- Define Thermistor constants (placeholders for later parts) ---
    // R = 10000 Ω, B = 3950, T0 = 298.15 K (25 °C)
    const float R = 10000.0f;
    const float B = 3950.0f;
    const float T0 = 298.15f;  // ref temp in Kelvin
    const float R0 = 10000.0f; // thermistor resistance at T0

    // --- User input for pins A0 and A1 (simulated ADC readings) ---
    int nA0, nA1;
    printf("Enter ADC reading for A0 (0–1023): ");
    scanf("%d", &nA0);
    printf("Enter ADC reading for A1 (0–1023): ");
    scanf("%d", &nA1);

    // --- Convert ADC readings to voltages ---
    float vA0 = (nA0 / 1023.0f) * VREF;  // A0 voltage
    float vA1 = (nA1 / 1023.0f) * VREF;  // A1 voltage

    printf("\nSimulated voltages:\n");
    printf("A0 Voltage = %.6f V\n", vA0);
    printf("A1 Voltage = %.6f V\n", vA1);

    // --- Calculate thermistor temperature (Part b, i–v) ---
    // Placeholder – you’ll replace this with your divider + B-coefficient formula
    float thermistorTempC = 0.0f;  // <-- to be calculated

    // --- Calculate thermocouple temperature (Part c, i–iv) ---
    // Placeholder – you’ll use NIST functions here
    float thermocoupleTempC = 0.0f; // <-- to be calculated

    // --- Output results ---
    printf("\nResults:\n");
    printf("Thermistor temperature (deg C): %f\n", thermistorTempC);
    printf("Thermocouple temperature with CJC (deg C): %f\n", thermocoupleTempC);

    return 0;
}