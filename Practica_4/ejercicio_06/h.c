/*

Algoritmo QueHago2? (h)  
Léxico  
    msge ∈ Cadena  
Inicio  
    msge <-- “Hola”  
    mientras Falso hacer  
        msge <-- “No soy de aquí!!!”  
        Salida: msge  
    fmientras  
    msge <-- “Yo soy de allá!”  
    Salida: msge  
Fin 

Solución: Este algoritmo comienza con un saludo. Luego entra al bucle y se supone que muestra un mensaje. Al salir muestra otro mensaje. 
El problema radica en que la condición es falsa por ende nunca se ejecutarán las acciones dentro del bucle. 

Léxico  
    msge ∈ Cadena
    i ← Z+ // Agrego una variable 
Inicio  
    msge <-- “Hola”
    salida ← msge // Agrego una salida
    i ← 1 // ccomienza con 1
    mientras i <= 4 hacer  // Determino una nueva cccondición
        msge <-- “No soy de aquí!!!”  
        Salida: msge
        i ← i + 1 //Accumulo un valor para que la ccondicción se acerque a verdadera
    fmientras  
    msge <-- “Yo soy de allá!”  
    Salida: msge  
Fin 

*/