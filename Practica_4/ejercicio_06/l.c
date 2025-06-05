/*

Algoritmo KtrasK3 (l) 
Léxico  
    k ∈ Z  
    msge ∈ Cadena  
Inicio  
    msge <-- “Soy KTrasK2”  
    Salida: msge  
    k <-- 2  
    mientras k<12 hacer  
        si k<=5 entonces  
            msge <-- “¿Soy chiquito?”  
            Salida: msge k  
        sino  
            msge <-- “¿Soy grande?”  
            Salida: msge k  
        fsi  
        k <--k + 2  
    fmientras k>=12  
    msge <-- ”¿Les gustó?”  
    Salída: msge  
Fin 

Solución: El algoritmo comienza con un mensaje de saludo y dando un valor a k. 
Luego comienza el bucle mientras evaluando si k es menor a 12. 
Dentro un condicional evalúa si k es menor o igual a 5. En ese caso se muestra un mensaje.
O bien se muestra otro. 

En total se muestra el primer mensaje 2 veces y el segundo 3. 


*/