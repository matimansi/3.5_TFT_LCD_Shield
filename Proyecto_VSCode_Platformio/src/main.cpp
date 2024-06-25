/*
	LIBRERIAS o BIBLIOTECAS
*/

#include <Arduino.h>
#include <SPI.h>
#include <TFT_eSPI.h>		//Libreria especifica del Hardware

TFT_eSPI tft = TFT_eSPI();	// Incluimos o Invocamos libreria custon

/*
	HEADERS (carpeta include)
*/

#include <colores.h>		// Algunos colores para usar (en el archivo "TFT_eSPI" hay mas colores)
#include <pines.h>			// Definiciones de los pines	
#include <fuentes.h>		// Fuentes de texto

/*
	FUNCIONES
*/

void testeo_pantalla_general (void);		// Imprime diferentes textos con formato
void testeo_colores (void);					// Cambia el color del fondo de la pantalla
void dibujos_graficos (void);				// Grafica distintas figuras

void setup()
{
	tft.init();
	tft.setRotation(3);		// Horizontal: 1 o 3 | Vertical: 2 o 4
}

void loop()
{
	//testeo_pantalla();
	testeo_colores;
	//dibujos_graficos();
}

void testeo_pantalla (void)
{
	// Rellena la pantalla con un color random
	tft.fillScreen(random(0xFFFF));

	/*
		Seteamos el "cursor" en la esquina superior izquierda dek display -> [ (0, 0 ], 2)
		Seleccionamos la fuente 2 -> (0, 0 [, 2) ]		
	*/

	tft.setCursor(0, 0, 2);

	// Setemos el color de la fuente a blanco con un fondo negro
	tft.setTextColor(TFT_WHITE,TFT_BLACK);
	
	// Seteamos el multiplicador del tamaño del texto a 1
	tft.setTextSize(1);

	// Ahora podemos imprimir el texto en la pantalla
	tft.println("Hello World!");
	
	/*
		Seteamos el color de la fuente sin fondo
		Elegimos la fuente 7
		Escribimos en la pantalla
	*/

	tft.setTextColor(TFT_YELLOW);
	tft.setTextFont(7);
	tft.println(1234.56);

	/*
		Seteamos el color de la fuente a rojo con fondo negro
		Elegimos la fuente 4
		Escribimos en la pantalla
	*/

	tft.setTextColor(TFT_RED,TFT_BLACK);
	tft.setTextFont(4);
	tft.println((long)3735928559, HEX);		// Deberia imprimir DEADBEEF

	/*
		Seteamos el color de la fuente a verde con un fondo negro
		Elgimos la fuente 4
		Escribimos 2 lineas en la pantalla
	*/

	tft.setTextColor(TFT_GREEN,TFT_BLACK);
	tft.setTextFont(4);
	tft.println("Groop");
	tft.println("I implore thee,");

	/*
		Cambiamos a la fuente 2
	*/

	tft.setTextFont(2);

	tft.println(F("my foonting turlingdromes.")); // Podemos guardar strings en la memoria flahs para ahorrar RAM
	tft.println("And hooptiously drangle me");
	tft.println("with crinkly bindlewurdles,");

	/*
		La siguiente linea es muy larga para el ancho del dysplay
		Automaticamente el texto se acomodo en la siguiente linea
	*/
	
	tft.println("Or I will rend thee in the gobberwarts with my blurglecruncheon, see if I don't!");
	
	// Probemos algunas formas de formato de impresion
	
	float fnumber = 123.45;

	/*
		Seteamos el color de la fuente a azul sin fondo
		Elegimos la fuente 4
	*/
	
	tft.setTextColor(TFT_BLUE);
	tft.setTextFont(4);

	tft.print("Float = ");
	tft.println(fnumber);				// Print floating point number
	tft.print("Binary = ");
	tft.println((int)fnumber, BIN);		// Print as integer value in binary
	tft.print("Hexadecimal = ");
	tft.println((int)fnumber, HEX);		// Print as integer number in Hexadecimal
	
	delay(10000);
}

void testeo_colores (void)
{
    tft.fillScreen(NEGRO);
	delay(1000);
    tft.fillScreen(AZUL);
	delay(1000);
    tft.fillScreen(VERDE);
	delay(1000);
    tft.fillScreen(MARRON);
	delay(1000);
    tft.fillScreen(VIOLETA);
	delay(1000);
    tft.fillScreen(ROJO);
	delay(1000);
    tft.fillScreen(ROSA);
	delay(1000);
    tft.fillScreen(NARANJA);
	delay(1000);
    tft.fillScreen(AMARILLO);
	delay(1000);
    tft.fillScreen(BLANCO);
	delay(1000);
}

void dibujos_graficos (void)
{
    tft.fillScreen(NEGRO);

    int centro_x = tft.width() / 2;  // Calcula el centro horizontal
    int centro_y = tft.height() / 2; // Calcula el centro vertical

    int ancho_figura = 350;
    int alto_figura = 280;

    // Dibuja un rectángulo centrado
    int rectangulo_x = centro_x - ancho_figura / 2;
    int rectangulo_y = centro_y - alto_figura / 2;
    tft.drawRect(rectangulo_x, rectangulo_y, ancho_figura, alto_figura, ROJO);
    delay(2000);

    // Dibuja un rectángulo con bordes redondeados centrado
    tft.fillScreen(NEGRO);
    int rectangulo_redondeado_x = centro_x - ancho_figura / 2;
    int rectangulo_redondeado_y = centro_y - alto_figura / 2;
    tft.drawRoundRect(rectangulo_redondeado_x, rectangulo_redondeado_y, ancho_figura, alto_figura, 20, VERDE);
    delay(2000);

    // Rellena un rectángulo con bordes redondeados centrado
    tft.fillScreen(NEGRO);
    tft.fillRoundRect(rectangulo_redondeado_x, rectangulo_redondeado_y, ancho_figura, alto_figura, 20, AZUL);
    delay(2000);

    // Rellena un rectángulo con gradiente vertical centrado
    tft.fillScreen(NEGRO);
    tft.fillRectVGradient(rectangulo_redondeado_x, rectangulo_redondeado_y, ancho_figura, alto_figura, ROJO, AMARILLO);
    delay(2000);

    // Rellena un rectángulo con gradiente horizontal centrado
    tft.fillScreen(NEGRO);
    tft.fillRectHGradient(rectangulo_redondeado_x, rectangulo_redondeado_y, ancho_figura, alto_figura, VERDE, AZUL);
    delay(2000);

    // Dibuja un círculo centrado
    tft.fillScreen(NEGRO);
    int circulo_x = centro_x;
    int circulo_y = centro_y;
    int radio = min(ancho_figura, alto_figura) / 2;
    tft.drawCircle(circulo_x, circulo_y, radio, VIOLETA);
    delay(2000);

    // Rellena un círculo centrado
    tft.fillScreen(NEGRO);
    tft.fillCircle(circulo_x, circulo_y, radio, ROSA);
    delay(2000);

    // Dibuja una elipse centrada
    tft.fillScreen(NEGRO);
    int elipse_x = centro_x;
    int elipse_y = centro_y;
    int radio_x = ancho_figura / 2;
    int radio_y = alto_figura / 2;
    tft.drawEllipse(elipse_x, elipse_y, radio_x, radio_y, MARRON);
    delay(2000);

    // Rellena una elipse centrada
    tft.fillScreen(NEGRO);
    tft.fillEllipse(elipse_x, elipse_y, radio_x, radio_y, NARANJA);
    delay(2000);

    // Dibuja un triángulo centrado
    tft.fillScreen(NEGRO);
    int triangulo_x_1 = centro_x - ancho_figura / 2;
    int triangulo_x_2 = centro_x + ancho_figura / 2;
    int triangulo_y_1 = centro_y - alto_figura / 2;
    int triangulo_y_2 = centro_y + alto_figura / 2;
    tft.drawTriangle(triangulo_x_1, triangulo_y_1, triangulo_x_2, triangulo_y_2, centro_x, triangulo_y_1, ROJO);
    delay(2000);

    // Rellena un triángulo centrado
    tft.fillScreen(NEGRO);
    tft.fillTriangle(triangulo_x_1, triangulo_y_1, triangulo_x_2, triangulo_y_2, centro_x, triangulo_y_1, AMARILLO);
    delay(2000);
}