#include <escornabot.h>

escornabot mirobot;

void setup() {
  Serial.begin (9600);
}

void loop() {
  //prueba de librería

  switch (mirobot.pushButton()) {

    case 3: //si pulsamos el botón delantero, se enciende led delantero, se mueve 1/4 de vuelta hacia delante, y se apaga el led delantero
      mirobot.ledON (3);
      mirobot.drive (0.25, 10);
      mirobot.ledOFF (3);
      break;

    case 1://si pulsamos el botón trasero, se enciende led trasero, se mueve 1/4 de vuelta hacia atrás, y se apaga el led trasero
      mirobot.ledON (1);
      mirobot.drive (-0.25, 10);
      mirobot.ledOFF (1);
      break;

    case 2://si pulsamos el botón derecho, se enciende led derecho, se mueve 1/8 de vuelta hacia la derecha, y se apaga el led derecho
      mirobot.ledON (2);
      mirobot.turn (0.125, 10);
      mirobot.ledOFF (2);
      break;

    case 4://si pulsamos el botón izquierdo, se enciende led izquierdo, se mueve 1/8 de vuelta hacia la izquierda, y se apaga el led izquierdo
      mirobot.ledON (4);
      mirobot.turn (-0.125, 10);
      mirobot.ledOFF (4);
      break;

    case 5://si pulsamos el botón central, suena le zumbador y se enciende todos los leds durante un segundo, después se apagan el zumbador y los leds
      mirobot.buzzON ();
      for (int i = 1; i < 5; i++)
      {
        mirobot.ledON(i);
      }
      delay (1000);
      mirobot.buzzOFF();

      for (int i = 1; i < 5; i++)
      {
        mirobot.ledOFF(i);
      }
      break;
  }
}
