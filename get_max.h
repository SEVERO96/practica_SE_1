//Declaracion de la funcion que obtiene el numero maximo y recibe como parametro option
  void getMax(String option){

    //declaramos un array llamado Buf donde se convertira la variable string obtenida a un array de char. 
    char Buf[50];
    //toCharArray convierte una variable string a char
    option.toCharArray(Buf, 50);
  
    //Se ejecuta un if donde se toma la primera posicion del array para discrimiar 'i' o 'u' y separarlos
    //Se pregunta por la posicion y obtener 'u'
    if(Buf[0]=='u'){

      //Con el switch preguntamos por la quinta posicion del array para saber que numero corresponde.
      switch (Buf[4]) {
    case '8':
        //Cada caso del switch es similar donde esta un mensaje con la operacion correspondiente para el caso
        Serial.print("El numero maximo es: ");
        Serial.println(pow(2,8)-1);
      break;
    case '1':
        Serial.print("El numero maximo es: ");
        Serial.println(pow(2,16)-1);
      break;
    case '3':
        Serial.print("El numero maximo es: ");
        Serial.println(pow(2,32)-1);
      break;
    case '6':
        Serial.print("El numero maximo es: ");
        Serial.println((uint64_t)pow(2,64));
      break;
    default:
        Serial.println("Lo lamento no hay data disponible");
      break;
    }
    
    //Se pregunta por la posicion y obtener 'i'
    }else if(Buf[0]=='i'){

        //Con el switch preguntamos por la cuarta posicion del array para saber que numero corresponde.
        switch (Buf[3]) {
    case '8':
        //Cada caso del switch es similar donde esta un mensaje con la operacion correspondiente para el caso
        Serial.print("El numero maximo es: ");
        Serial.println(pow(2,7)-1);
      break;
    case '1':
        Serial.print("El numero maximo es: ");
        Serial.println(pow(2,15)-1);
      break;
    case '3':
        Serial.print("El numero maximo es: ");
        Serial.println(pow(2,31)-1);
      break;
    case '6':
        Serial.print("El numero maximo es: ");
        Serial.println((uint64_t)pow(2,63)-1);
      break;
    default:
        Serial.println("Lo lamento no hay data disponible");
      break;
    }
    }
    delay(1000);
  }
