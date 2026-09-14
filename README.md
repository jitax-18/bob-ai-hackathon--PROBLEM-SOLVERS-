# 🚀 [GridGuardian AI: Power Outage Prediction & Grid Equipment Failure Advisor]

> ⚠️ **Replace everything in `[ ]` brackets with your actual content before submission.**

---

## 👥 Team

| Field | Value |
|---|---|
| **Team Name** | [PROLEM SOLVER] |
| **Track** | [AI] |
| **Team Lead** | [Stuti Patel] — [26EC112@charusat.edu.in] |
| **Members** | [Jitax Khunt], [Rushil Rank], [Pratham Lad] |

---

## 🎯 Problem Statement

> In 2–3 sentences: What problem does your project solve? Who experiences this problem?

[Power transformer and substation failures cause large-scale blackouts, costing utilities over $1M per hour while impacting thousands to millions of customers. Although utilities continuously collect equipment health data through sensors measuring temperature, vibration, oil quality, and partial discharge, maintenance decisions are still largely calendar-based rather than predictive.

Furthermore, weather forecasts, sensor data, and historical incident records are rarely analyzed together, limiting utilities' ability to proactively identify outage-prone areas and prevent failures before they occur.]

---

## 💡 Solution

> In 2–3 sentences: What did you build? How does it solve the problem above?

[GridGuardian AI combines asset health sensor data, weather forecasts, and historical outage records into a unified AI-powered monitoring and decision-support platform. The system predicts outage probabilities, identifies high-risk equipment, ranks assets by grid impact severity, and generates prioritized maintenance recommendations.

Additionally, the platform provides crew pre-positioning plans for upcoming weather events, enabling utilities to act proactively instead of reacting after failures and outages occur.]

---

## ✨ Key Features

- **Feature 1:** [Predictive Outage Forecasting: Uses AI models to predict outage-prone locations before failures occur.]
- **Feature 2:** [Equipment Failure Advisor: Detects transformers, substations, and transmission assets at high risk of failure.]
- **Feature 3:** [Asset Impact Ranking: Prioritizes assets based on failure probability, customer impact, and grid criticality.]
- **Feature 4:** [AI Maintenance Planner: Generates prioritized maintenance recommendations and inspection schedules.]
- **Feature 5:** [Crew Pre-Positioning Engine: Suggests optimal crew deployment locations ahead of severe weather events.]
- **Feature 6:** [Risk Heat Map Dashboard: Visualizes outage-prone zones and critical infrastructure in real time]
- **feature 7:** [IBM Granite Insights: Converts technical sensor data into understandable maintenance recommendations.]
---

## 🛠️ Tech Stack

| Category | Technologies |
|---|---|
| **Languages** | [C] |
| **Frameworks** | [FastAPI, React,Tailwind CSS] |
| **IBM Technologies** | [e.g., watsonx.ai, IBM Bob, IBM Cloud] |
| **Databases** | [PostgreSQL] |
| **Other** | [Docker, GitHub Actions, Scikit-Learn, XGBoost, Recharts] |

---

## 📁 Repository Structure

```
├── src/
│ ├── frontend/
│ │ ├── components/
│ │ ├── pages/
│ │ ├── charts/
│ │ └── services/
│ │
│ ├── backend/
│ │ ├── api/
│ │ ├── prediction/
│ │ ├── advisor/
│ │ ├── models/
│ │ └── database/
│ │
│ └── ml/
│ ├── datasets/
│ ├── training/
│ └── saved_models/
│
├── docs/
│ ├── problem-statement.md
│ ├── solution-overview.md
│ ├── architecture.md
│ └── setup-guide.md
│
├── demo/
│ ├── screenshots/
│ └── demo-video-link.txt
│
├── presentation/
│
└── submission.yaml
```

---

## ⚡ How to Run

> **Copy these exact steps from your [`docs/setup-guide.md`](docs/setup-guide.md)**

```bash
#  Clone the repo
git clone https://github.com/gridguardians/gridguardian-ai.git
cd gridguardian-ai
 
#  Install dependencies

# Backend
cd backend
pip install -r requirements.txt
 
# Frontend
cd ../frontend
npm install
 
#  Configure environment
cp .env.example .env
 
# Edit .env with your values
#  Run the project
# Start Backend
uvicorn app.main:app --reload
# Start Frontend
npm run dev
```

---

## 🖥️ Demo

| Artifact | Link |
|---|---|
| 📹 Demo Video | [See demo/demo-video-link.txt](demo/demo-video-link.txt) |
| 🌐 Live Demo | [See demo/live-demo-url.txt](demo/live-demo-url.txt) |
| 🖼️ Screenshots | [See demo/screenshots/](demo/screenshots/) |
| 📊 Presentation | [See presentation/slides.pdf](presentation/) |

---

## ⚠️ Known Limitations

> Be honest — judges appreciate transparency over overclaiming.

- [Limitation 1: "The prototype currently relies on historical and simulated utility datasets rather than live utility infrastructure feeds."]
- [Limitation 2: "Prediction accuracy may vary depending on sensor quality and data availability."]
- [Limitation 3: "Crew routing optimization is rule-based and can be further improved using advanced optimization algorithms."]
- [Limitation 4: "Weather forecast accuracy depends on the external forecasting service used."]
- [Limitation 5: "The current version is designed for demonstration purposes and requires enterprise integration for production deployment."]

---

## 🏅 What We're Most Proud Of

[The strongest aspect of GridGuardian AI is its ability to combine three traditionally isolated data sources, equipment sensor data, weather forecasts, and historical outage records, into a single AI-driven decision-making platform. Rather than simply detecting faults, the solution proactively predicts outages, prioritizes critical assets based on grid impact, and provides actionable maintenance and crew deployment recommendations.

This transforms utility operations from reactive maintenance to predictive grid resilience, helping reduce outage costs, improve service reliability, and protect millions of consumers from avoidable power disruptions. ⚡🤖🌍]

---
