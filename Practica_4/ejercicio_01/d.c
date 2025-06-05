/*

Algoritmo KtrasK (d) 
Léxico  
    k ∈ Z  
    msge ∈ Cadena  
Inicio  
    msge <-- “Soy KTrasK”  
    Salida: msge  
    k <-- 2  
    repetir  
        msge <-- “¿Cuánto valgo?” 
        Salida: msge k  
        k <--k + 2 
    hasta que k=12 
        msge <-- ”¿Les gustó?”  
    Salída: msge  
Fin 

Solución: Este algoritmo comienza presentando a KTrasK, luego repite el mensaje con el valor de k 5 veces hasta que se cumple la condición. Finalmente imprime un nuevo mensaje.
El error es qué para que se cumpla la condición tiene un valor único, esto no cumple con las buenas prácticas ya que le rango debería ser mayor.asm

hasta que k>=12

*/