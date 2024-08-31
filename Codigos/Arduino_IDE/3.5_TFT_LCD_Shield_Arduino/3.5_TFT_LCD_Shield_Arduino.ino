/*
    MCUFRIEND_kbv
        - Libreria (basica) de control de la pantalla
        - Utiliza Adafruit_GFX
    El archivo MCUFRIEND_kbv.h posee definciones de colores -> ctrl + click en la linea 7 parapoder ver el archivo
    Dentro del archivo se puede acceder a las definiciones de las funciones de Adafruit_GFX con el mismo metodo en la linea 16
*/

#include <MCUFRIEND_kbv.h>

MCUFRIEND_kbv tft;      // Creamos el objeto tft de la clase MCUFRIEND_kbv (Control de la pantalla)

// Variable de control para evitar sobre escritura del texto sobre figuras rellenas
bool bloqueo = false;

void dibujar_figuras (void);
void mostrar_var_texto (float, bool, bool);

void setup() {
    // Leemos el ID e iniciliamos la pantalla
    uint16_t ID = tft.readID();     // unsigned int = uint16_t
    tft.begin(ID);

    // Ajusta la rotacion de la pantalla - 0 = Vertical_1; 1 = Horizontal_1; 2 = Vertical_2; 3 = Horizontal_2;
    tft.setRotation(0);

    // Rellenamos el fondo de color negro
    tft.fillScreen(TFT_BLACK);
}

void loop() {
    // Inicializamos 3 variables para mostrar en la pantalla
    float numero = 3.14;
    bool boleano_1 = true, boleano_2 = false;
    
    dibujar_figuras();                                  // Funcion apra dibujar las figuras
    mostrar_var_texto(numero, boleano_1, boleano_2);    // Funcion para mostrar texto y algunas variables

    bloqueo = true;
    delay(100);
}

void dibujar_figuras (void)
{
    // Dibuamos las distintas figuras para mostrar los datos
    tft.drawRect(10, 10, 300, 150, TFT_ORANGE);                                 // drawRect(pos. x, pos. y, ancho, alto, color)
    tft.drawCircle(80, 240, 75, TFT_GREEN);                                     // drawCircle(centro x, centro y, radio, color)
    if (bloqueo == false) tft.fillCircle(80, 240, 75, TFT_WHITE);               // fillCircle(centro x, centro y, radio, color)
    tft.drawCircle(240, 240, 75, TFT_WHITE);                                    // drawCircle(centro x, centro y, radio, color)
    tft.drawRoundRect(10, 320, 300, 150, 20, TFT_WHITE);                        // drawRoundRect(pos. x, pos. y, ancho, alto, redondeado, color)
    if (bloqueo == false) tft.fillRoundRect(10, 320, 300, 150, 20, TFT_RED);    // fillRoundRect(pos. x, pos. y, ancho, alto, redondeado, color)
}

void mostrar_var_texto (float numero, bool boleano_1, bool boleano_2)
{
    /*
        Seteamos el cursor en distintas posiciones para poder colocar el texto, ademas del tamaño y el color del texto

        setCursor(x, y)
        setTextSize(tamaño)
        setTextColor(color)
    */

    tft.setCursor(35, 20);
    tft.setTextSize(6);
    tft.setTextColor(TFT_WHITE);
    tft.print("Ejemplo");

    tft.setCursor(30, 80);
    tft.setTextSize(2);
    tft.setTextColor(TFT_WHITE);
    tft.print("Display TFT LCD Shield");
    tft.setCursor(115, 100);
    tft.print("Arduino");
    tft.setCursor(80, 130);
    tft.print("MCUFRIEND_kbv");
    
    tft.setCursor(55, 200);
    tft.setTextSize(10);
    tft.setTextColor(TFT_GREEN);
    tft.print(boleano_1);

    tft.setCursor(215, 200);
    tft.setTextSize(10);
    tft.setTextColor(TFT_RED);
    tft.print(boleano_2);

    tft.setCursor(50, 360);
    tft.setTextSize(10);
    tft.setTextColor(TFT_WHITE);
    tft.print(numero);
}
