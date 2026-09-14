#include <stdio.h>

int main() {
    int transformer_id;
    float temperature, vibration, oil_quality, weather_score;
    float temp_risk = 0, vib_risk = 0, oil_risk = 0;
    float baseline_risk_score, final_risk_score;

    printf("====================================================\n");
    printf("   GRIDPULSE: IBM BOB EQUIPMENT FAILURE ADVISOR     \n");
    printf("====================================================\n");

    printf("Enter Transformer Asset ID (5 digits): ");
    scanf("%d", &transformer_id);

    printf("Enter Internal Temperature (Celsius, Normal: 30-80): ");
    scanf("%f", &temperature);

    printf("Enter Vibration Amplitude (mm/s, Normal: 0.5-3.0): ");
    scanf("%f", &vibration);

    printf("Enter Dissolved Gas Oil Quality (PPM, Normal: 0-100): ");
    scanf("%f", &oil_quality);

    printf("Enter Local Weather Severity Score (0.0 to 1.0): ");
    scanf("%f", &weather_score);

    // ECE Hardware Threshold Conversions
    if (temperature > 95.0) temp_risk = 100.0;
    else if (temperature > 80.0) temp_risk = 60.0;
    else temp_risk = 10.0;

    if (vibration > 4.5) vib_risk = 100.0;
    else if (vibration > 3.0) vib_risk = 50.0;
    else vib_risk = 10.0;

    if (oil_quality > 150.0) oil_risk = 100.0;
    else if (oil_quality > 100.0) oil_risk = 55.0;
    else oil_risk = 15.0;

    // Weighted Matrix: 40% Thermal, 40% Chemical, 20% Mechanical
    baseline_risk_score = (temp_risk * 0.40) + (oil_risk * 0.40) + (vib_risk * 0.20);
    
    // Environmental Multiplier Impact
    final_risk_score = baseline_risk_score * (1.0 + (weather_score * 0.50));
    if (final_risk_score > 100.0) final_risk_score = 100.0;

    printf("\n====================================================\n");
    printf("            DIAGNOSTIC REPORT & ACTION BRIEF        \n");
    printf("====================================================\n");
    printf("Asset Evaluated     : Transformer Unit #%d\n", transformer_id);
    printf("Calculated Risk Score: %.2f / 100.00\n", final_risk_score);
    printf("----------------------------------------------------\n");

    printf("MAINTENANCE COMMAND: ");
    if (final_risk_score >= 75.0) {
        printf("CRITICAL EXPOSURE DETECTED!\n");
        printf("RECOMMENDATION     : Dispatch Emergency Crew immediately. Pre-position grid assets.\n");
    } else if (final_risk_score >= 45.0) {
        printf("MODERATE RISK DEVIATION\n");
        printf("RECOMMENDATION     : Schedule maintenance inspection window within 72 hours.\n");
    } else {
        printf("STABLE SYSTEM TELEMETRY\n");
        printf("RECOMMENDATION     : Maintain standard calendar checks. No active anomalies.\n");
    }
    printf("====================================================\n");

    return 0;
}
