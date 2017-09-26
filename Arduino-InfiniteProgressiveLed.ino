Byte led=6; 
Byte cont; 
Int tiempo=30; 
 
Void setup () { 
pinMode(led,OUTPUT); 
digitalWritte(led,LOW); 
} 
Void loop () { 
While(cont<256) { 
analogWrite(led,cont); 
cont=cont+1; 
delay(tiempo); 
} 
} 

// Explicación del Bucle Infinito:
// Debido a que hemos declarado “cont” con la variable Byte, la cual solo admite el rango de valores de 0 a 255, 
// es decir un total de 256 valores y hemos definido el bucle While con <256 para que sea True, jamás sobrepasará esa condición 
// y por lo tanto siempre se repetirá el bucle. En cambio, si hubiéramos definido “cont” con la variable “int” en vez “byte” el rango de 
// valores sería mucho más amplio y la condición de False también se cumpliría por lo que no estaría siempre encendida la luz. 

