---
title: Hypothesis
author: Aurora Zuoris
---
# Preprocesamiento

## Aislamiento de la huella

En las imagenes con las huellas, hay varios detalles extra,
como firmas, nombres del dígito de la huella, líneas del marcado de las huellas, etc.

Propongo poder aislar las huellas del resto de estos datos no relevantes. Para esto, se divide la imagen en secciones pequeñas (como 8x8, o 16x16) y aplicar un histograma sobre estos,
de forma que las secciones que contienen la huella tendrán información completamente diferente que aquellos que no la tienen. De aquí se filtran las secciones que contienen la huella.

## Simplificación de huella

Propongo utilizar canny edge detection, o algoritmos parecidos, para exagerar las diferentes propiedades de la imagen para facilitar el trabajo de este, tal que solo se preocupe por
la huella, y no su calidad de imprinte en el papel en las fotos dadas de ejemplo.

# Extracción básica de datos

Un punto importante en las huellas es es núcleo sobre cual se centran las huellas.

Ya que las huellas suelen "redondear" el núcleo, propongo utilizar la transformada de Hough de círculos para poder averiguar este centro donde se debería de situar el núcleo.

# Comparación de huellas

## SIFT

Propongo intentar usar SIFT para simplemente comparar las huellas una con otra.

## Algoritmos open source

Propongo intentar utilizar tecnicas modernas utilizadas en algoritmos open software como [SourceAFIS](https://sourceafis.machinezoo.com/algorithm)

# Resultados

| Grupo | Recorte | Preprocesado
| ---- | ---- | ---- |
| Aurora | Si | Si |