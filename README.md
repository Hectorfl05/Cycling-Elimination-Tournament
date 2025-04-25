# 🚴‍♂️ Simulador de Competición de Ciclismo (C++)

## 📖 Descripción General

Este proyecto simula una **competición de ciclismo por eliminación** donde ciclistas compiten en pruebas alternadas de velocidad y persecución. El sistema gestiona dinámicamente la participación y eliminación de competidores hasta determinar un ganador final.

### 🔄 Mecánica Principal:
- **Pruebas alternantes**:
  - **Velocidad (4 ciclistas)**: 
    - 🥇 4 puntos al 1° 
    - 🥈 1 punto al 2°
    - 🚫 Elimina al 4°
  - **Persecución (3 ciclistas)**:
    - 🥇 3 puntos al 1°
    - 🚫 Elimina al 3°

### 🏆 Progresión del Torneo:
1. Selección aleatoria de participantes (priorizando ciclistas con menos pruebas)
2. Ejecución secuencial de pruebas (inicia con velocidad)
3. Eliminación progresiva hasta que faltan competidores para alguna prueba
4. Coronación del ciclista con mayor puntaje acumulado
