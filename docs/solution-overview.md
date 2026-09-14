# Solution Overview

## What We Built
We built **GridPulse**, a lightweight, high-performance rule-based predictive diagnostic engine written in C. It acts as an automated risk-advisor console for substation operations teams. Instead of waiting for calendar inspections or loose text alerts, GridPulse ingests physical transformer data (temperature, chemical oil degradation, mechanical vibrations) alongside an incoming storm weather risk index to calculate an integrated, real-time safety risk score and output explicit, prioritized field maintenance commands.

## How It Works
The core mechanism executes through a strict, deterministic sequence:
1. **Telemetry Ingestion:** The operator inputs the target Transformer Asset ID along with live internal sensor readings (Core Temperature, Vibration Amplitude, and Dissolved Gas PPM concentration).
2. **Contextual Ingestion:** The engine ingests an external Local Weather Severity Score (scaled from 0.0 to 1.0) representing incoming localized grid stress factors like lightning or storms.
3. **Deterministic Evaluation:** The core architecture processes the numbers against strict engineering threshold limits, converting raw values into standardized baseline risk metrics.
4. **Weighted Matrix Calculation:** The engine compiles an integrated score using custom distribution priorities (40% Thermal, 40% Chemical, 20% Kinetic Vibration).
5. **Compound Hazard Factoring:** The baseline risk is modulated by the weather index scalar to account for external compound dangers, scaling up the final severity score.
6. **Actionable Command Dispatch:** The engine analyzes the final score to immediately generate an explicit operational instruction brief (Level 1 Emergency Crew Dispatch, Level 2 Audit Inspection, or Level 3 Stable Ops).

## Architecture Diagram

> See [`architecture.md`](architecture.md) for the detailed diagram.

## Key Design Decisions

| Decision | Rationale |
|---|---|
| **Engine Core Written in ANSI C** | Guarantees ultra-low overhead runtime execution. This ensures the program can be directly compiled onto small, cost-efficient microcontrollers inside grid transformers without needing server clusters. |
| **Deterministic Threshold Matrix** | Eliminates artificial intelligence "hallucinations" or slow black-box processing models. In critical power grid infrastructure, safety decisions must be entirely predictable, verifiable, and instant. |
| **Dynamic Weather Modifier Scalar** | Prevents maintenance team blind spots by treating hardware condition monitoring not as an isolated variable, but as a system open to external localized environmental stressors. |

## IBM Technologies Used
- **IBM watsonx & watsonx.ai:** The internal logic parameters and custom distribution threshold rules (40% Temperature, 40% Oil Gas, 20% Vibration) are structured using insights compiled from historical grid incident pattern models analyzed via the IBM watsonx interface.
- **IBM Bob Platform Integration:** Implemented to ingest structural weather anomaly feeds and map the external danger data directly into our core analytical calculation loops as a load-bearing environmental multiplier metric.

