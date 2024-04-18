int switchState = 0; //Indique que l'état de l'interrupteur est à 0 au commencement

void setup() {  //donne les indication de départ nécessaire pour l'identification des principales broches utilisées.
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(2, INPUT);
//ces lignes indiquent le mode des broches entre entrée et sortie d'information
}

void loop (){  //boucle qui sera répétée indéfiniment 
  switchState = digitalRead(2);  //on prend l'info de la variable switchState en lisant la valeur de la broche 2
  if(switchState == LOW){ //Si on n'appuie pas sur le bouton
    digitalWrite(3, HIGH); //on écrit sur la broche 3 la valeur HIGH, donc DEL allumée
    digitalWrite(4, LOW);//on écrit sur la broche 4 et 5 la valeur LOW, donc DEL éteinte
    digitalWrite(5, LOW);
  }
  else {  // sinon (si on appuie sur le bouton)
    digitalWrite(3, LOW); 
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  delay(100); //donne un délai de 250 millième de seconde
  digitalWrite(4, HIGH); // DEL de la broche 4 allume, celle de la 5 éteint.
  digitalWrite(5, LOW);
  delay(500); 
  }
}
