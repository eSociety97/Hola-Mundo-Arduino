/***************************************************Capitulo 1 -  Blink ***********************************************************
*                                                                                                                                 *
*     En este primer capitulo aprenderemos a hacer el Hola mundo de la programacion de Arduino que es encender y apagar           *
*  un led.                                                                                                                        *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 LED                                                                                                                         *
*  -1 Resistencia de 1k ohm (Si no tienen de 1k pueden variar el valor entre 100 ohm a 2.2 K omh)                                 *
*  -Protoboard (Esto es opcional                                                                                                  *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/   

int led = 2; // Declaramos nuestra variable que usaremos para el led

void setup(){
  pinMode(led,OUTPUT); //Declaramos como pin de salida la variable led
  }
void loop(){
  digitalWrite(led,HIGH); //Escribimos un valor alto en la salida digital led    
  delay(2000);
  digitalWrite(led,LOW); //Escribimos un valor bajo en la salida digital led
  delay(2000);
}  
