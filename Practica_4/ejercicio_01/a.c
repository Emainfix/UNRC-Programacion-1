/*

(a) Algoritmo QueHago? 

Léxico  
    msge ∈ Cadena  
Inicio  
    msge <-- “Hola”  
    repetir  
        msge <-- ”Estoy mareado %- “  
        Salida: msge  
    hasta que falso  // Condición de terminación siempre falsa
    msge <-- “Gracias!!!!”  
    Salida: msge  
Fin 

Solución: En este caso tenemos una estructura iterativa repetir.
Este algoritmo repite el mensaje ”Estoy mareado %- “.
El problema es que tenemos un bucle infinito ya que se necesita que la condición de terminación sea verdadera y en este caso es siempre falsa.

Una posible solución sería:

Léxico
    i ∈ Z // Agregamos una nueva variable que haga posible que la condición de terminación sea verdadera
    msge ∈ Cadena  
Inicio
    i <-- 1
    msge <-- “Hola”  
    repetir
        i <-- i + 1
        msge <-- ”Estoy mareado %d “  
        Salida: msge  
    hasta que i >= 4
    msge <-- “Gracias!!!!”  
    Salida: msge  
Fin 
*/