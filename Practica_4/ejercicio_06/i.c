/*

Algoritmo Mafalda (i)  
Léxico  
    i ∈ Z  
    msge ∈ Cadena 
Inicio 
    i <-- 2  
    msge <-- “Mi dicho preferido es: ” 
    Salida: msge  
    mientras i<4 hacer  
        msge <-- “Paren el mundo “  
        Salida: msge  
        msge <--“me quiero bajar. “  
        Salida: msge  
    fmientras  
    msge <-- “¿Les gustó?”  
    Salida: msge  
Fin 

Solución: El algoritmo ccomienza comienza con un mensaje y un valor para i. Luego entra al bucle. 
El problema es que el bucle es infinito ya que la variable i se mantiene con el mismo valor siempre.

Léxico  
    i ∈ Z  
    msge ∈ Cadena 
Inicio 
    i <-- 2  
    msge <-- “Mi dicho preferido es: ” 
    Salida: msge  
    mientras i<4 hacer  
        msge <-- “Paren el mundo “  
        Salida: msge  
        msge <--“me quiero bajar. “  
        Salida: msge
        i ← i + 1 // Hacemos que la variable acumule 1 por cada ejecución del bucle  
    fmientras  
    msge <-- “¿Les gustó?”  
    Salida: msge  
Fin 

*/