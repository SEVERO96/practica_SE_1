//Inclusion de los archivos externos que vamos a ocupar que son los dos archivos con funciones para 
//obtener el numero minimo y el numero maximo.
#include "get_min.h"
#include "get_max.h"

//Se declara la unica variable que vamos a ocupar que se llama option y es de tipo string.
String option= "";

//Entorno de ejecucion la funcion void tiene la declaracion que se va a ocupar para la ejecucion del codigo.
void setup() {
  //Esta codigo definimos los baudios en el puerto serial a 115200 
  Serial.begin(115200);
}

//La funcion void loop se va a ejecutar todo el rato y es la parte que ejecuta la placa.
void loop() {
  //El if sirve para escribir en el puerto serial esto si hay dato en dicho puerto.
   if(Serial.available() != 0){
    //la variable opcion previamente declarada guardara la informacion del puerto serial esto mediante el readString.
    option = Serial.readString();
    Serial.print(option);
    //Mandamos a llamar las dos funciones que obtienen el valor minimo y maximo.
    getMin(option);
    getMax(option);
   }
}
