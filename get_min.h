//Declaracion de la funcion que obtiene el numero minimo y recibe como parametro option
void getMin(String option){

  //declaramos un array llamado Buf donde se convertira la variable string obtenida a un array de char.
  char Buf[50];
  //toCharArray convierte una variable string a char
  option.toCharArray(Buf, 50);

  //Se ejecuta un if donde se toma la primera posicion del array para discrimiar 'i' o 'u' y separarlos
  //Se pregunta por la posicion y obtener 'u'
  if(Buf[0]=='u'){

    //En este caso  el minimo de todos los casos de uint es 0 asi que al momento de coincidir el if se muestra un mensaje 
    //y el numero 0
    Serial.print("El numero minimo es: ");
    Serial.println(0);
    
  //if para obtener el minimo para int 
  }else if(Buf[0]=='i'){
    
      //Con el switch preguntamos por la cuarta posicion del array para saber que numero corresponde.
      switch (Buf[3]) {
  case '8':
      //Cada caso del switch es similar donde esta un mensaje con la operacion correspondiente para el caso
      Serial.print("El numero minimo es: -");
      Serial.println(pow(2,7));
    break;
  case '1':
      Serial.print("El numero minimo es: -");
      Serial.println(pow(2,15));
    break;
  case '3':
      Serial.print("El numero minimo es: -");
      Serial.println(pow(2,31));
    break;
   case '6':
      Serial.print("El numero minimo es: -");
      Serial.println((uint64_t)pow(2,63));
    break;
  default:
      Serial.println("Lo lamento no hay data disponible");
    break;
  }
  }
  delay(1000);
}
