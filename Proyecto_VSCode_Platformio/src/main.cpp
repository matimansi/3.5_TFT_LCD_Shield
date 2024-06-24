/*
	LIBRERIAS o BIBLIOTECAS
*/

#include <Arduino.h>
#include <SPI.h>
#include <TFT_eSPI.h>		//Libreria especifica del Hardware

TFT_eSPI tft = TFT_eSPI();	// Incluimos o Invocamos libreria custon

//#define TFT_GREY 0x5AEB // New colour

/*
	DEFINICIONES DE PINES
*/

#define TFT_DC   18
#define TFT_CS   33
#define TFT_RST  32
#define TFT_RD    2
#define TFT_WR    4

#define TFT_D0   12
#define TFT_D1   13
#define TFT_D2   26
#define TFT_D3   25
#define TFT_D4   21
#define TFT_D5   5
#define TFT_D6   27
#define TFT_D7   14

/*
	FUENTES DE TEXTO
*/

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

void setup()
{
	tft.init();
	tft.setRotation(1);
}

void loop()
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