/*

Algoritmo QueHago? (g)  
Léxico  
    msge ∈ Cadena  
Inicio  
    msge <-- “Hola”  
    mientras Verdadero hacer  
        msge <-- ”Estoy mareado %- “  
        Salida: msge  
    fmientras  
        msge <-- “Gracias!!!!”  
    Salida: msge  
Fin 

Solución: El algoritmo ccomienza con un mensaje y entra al bucle. Luego debería mostrar un mensaje hasta salir y saludar con un mensaje final.
Tiene varios errores. El primer mensaje de Hola no tiene salida, por ende nunca se enseñará. 
Luego la condión siempre será veradera (bucle infinito) ya que no tenemos ninguna variable que permita al valor logico cambiar a falso.

Léxico  
    msge ∈ Cadena
    i ∈ Z+  
Inicio  
    msge <-- “Hola” 
    salida ← msge // Genero una salida para el mensaje
    i ← 1 // Agrego una nueva variable
    mientras i <= 4 hacer  
        msge <-- ”Estoy mareado %- “  
        Salida: msge
        i ← i + 1 // Agrego un contador
    fmientras  
        msge <-- “Gracias!!!!”  
    Salida: msge  
Fin 
*/