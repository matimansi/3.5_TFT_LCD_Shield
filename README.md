_Matias Mansilla_

# Índice

- [3.5" TFT LCD Shield con ESP32](#35-tft-lcd-shield-con-esp32)
- [Hardware Necesario](#hardware-necesario)
	- [Componentes necesarios](#componentes-necesarios)
	- [Conexiones para ESP32](#conexiones-para-esp32)
- [Descarga repositorio](#descarga-repositorio)
- [Carpeta "Codigos"](#carpeta-codigos)
	- [Arduino IDE](#arduino-ide)
		- [Software](#software)
		- [Abrir y Editar el codigo](#abrir-y-editar-el-codigo)
		- [Instalar las librerias necesarias](#instalar-las-librerias-necesarias)
	- [Visual Studio Code](#visual-studio-code)
		- [Instalaciones](#instalaciones)
			- [Instalacion Visual Studio Code](#instalacion-visual-studio-code)
			- [Instalacion PlatformIO IDE](#instalacion-platformio-ide)
		- [Como usar PlatformIO](#como-usar-platformio)
			- [Abrir Proyecto](#abrir-proyecto)
			- [Codigo](#codigo)
			- [Compilar y Subir el Codigo al ESP32](#compilar-y-subir-el-codigo-al-esp32)


# 3.5" TFT LCD Shield con ESP32

Codigo en Arduino IDE y Proyecto de Platformio en Visual Studio Code para programar un display/pantalla 3.5" TFT LCD Shield con un Arduino UNO/Mega o ESP32 respectivamente.

# Hardware Necesario

## Componentes necesarios

- ESP32 o Arduino UNO/Mega
- Cables:
	- ESP32:
		- Alimentacion y datos: USB a Micro USB
		- Cables para conexiones: Cables tipo Arduino u otro tipo.
	- Arduino UNO/Mega:
		- Alimentacion y datos: USB a Tipo B
		- Cables para conexiones: No hacen falta, ya que el display es tipo Shield, se coloca por encima de la placa Arduino.
- 3.5" TFT LCD Shield.

## Conexiones para ESP32

A continuacion, se puede obserar una tabla con las conexiones que se deben realizar entre el Display y el ESP32.

| Dispositivo |     |     |         |        |        |        | Pines  |        |        |        |        |        |        |        |        |
|:-----------:|:---:|:---:|:-------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|
|   Display   | 3V3 | GND | LCD_RST | LCD_CS | LCD_RS | LCD_WR | LCD_RD | LCD_D0 | LCD_D1 | LCD_D2 | LCD_D3 | LCD_D4 | LCD_D5 | LCD_D6 | LCD_D7 | 
|    ESP32    | 3V3 | GND |   D32   |   D33  |   D18  |   D4   |   D2   |   D12  |   D13  |   D26  |   D25  |   D21  |   D5   |   D27  |   D14  | 

# Descarga repositorio

Para poder utilizar cualquiera de los archivos del repositorio, recomiendo descargar el repositorio en su totalidad y luego abrir/borrar/seleccionar los archivos a utilizar.

Para poder descargar el proyecto dirigite al [repositorio en GitHub](https://github.com/matimansi/3.5_TFT_LCD_Shield_ESP32) y segui los siguientes pasos.

1. Clickea el boton "Code"

<img src=".\Imagenes\Repositorio\Paso_1.png">

2. Clckea el boton "Download ZIP"

<img src=".\Imagenes\Repositorio\Paso_2.png">

3. Move el .zip a la ruta que desees y descomprimilo.

Listo, con dichos pasos ya deberias tener una carpeta que contiene todos los documentos del repositorio.

# Carpeta "Codigos"

Dentro de la carpeta "Codigos" podras encontrar las 2 opciones de programacion para el display.

## Arduino IDE

Si vas a utilizar el display con un Arduino Uno o Mega, podes borrar todos los archivos del repositorio y conservar el contenido de la carpeta "3.5_TFT_LCD_Shield_Arduino".

### Software

Para poder manejar el codigo recomiendo la instalacion de la ultima version del [Arduino IDE](https://www.arduino.cc/en/software).

#### Abrir y Editar el codigo

Para poder editar el codigo debemos de seguir los siguientes pasos:

1. Abrir el software Arduino IDE

<img src=".\Imagenes\Arduino IDE\Codigo\Paso_1.png">

2. Clickea el boton File o Archivo

<img src=".\Imagenes\Arduino IDE\Codigo\Paso_2.png">

3. Clickea boton Open o Abrir

<img src=".\Imagenes\Arduino IDE\Codigo\Paso_3.png">

4. Busca la carpeta "3.5_TFT_LCD_Shield_Arduino" y dale doble click al archivo "3.5_TFT_LCD_Shield_Arduino.ino".

5. Listo, ya puedes editar el codigo.

#### Instalar las librerias necesarias

Para poder compilar y subir el codigo a una placa Arduino debemos de instalar las librerias necesarias, si es que no se encuentran instaladas.

1. Clickea el boton del Library Manager o Gestor de Bibliotecas

<img src=".\Imagenes\Arduino IDE\Librerias\Paso_1.png">

2. Escribi en el buscador la libreria "MCUFRIEND_kbv" y clickea el boton de Install o Instalar

<img src=".\Imagenes\Arduino IDE\Librerias\Paso_2.png">

3. Escribi en el buscador la libreria "Adafruit GFX Library" y clickea el boton de Install o Instalar

<img src=".\Imagenes\Arduino IDE\Librerias\Paso_3.png">

4. Listo, ya podras compilar y subir el codigo a una placa Arduino.

## Visual Studio Code

Si vas a utilizar el display con un ESP32, podes borrar todos los archivos del repositorio y conservar el contenido de la carpeta "Proyecto_VSCode_Platformio".

### Instalaciones

#### Instalacion Visual Studio Code 

Si no tenes instalado Visual Studio Code [ <img src=".\Imagenes\Logo_VS_Code.png" width="10"/> ] podes hacerlo desde el siguiente [link](https://code.visualstudio.com/).

#### Instalacion PlatformIO IDE 

Una vez instalado Visual Studio Code, debemos instalar la extension PlatformiIO IDE [ <img src=".\Imagenes\Logo_Platformio.png" width="10"/> ]. Para poder hacerlo segui los siguientes pasos.

1. Clickea el boton de extensiones o presiona "Ctrl + Shift + X":

<img src=".\Imagenes\Platformio\Instalacion\Paso_1.png">

2. En el cuadro de busqueda escribri "PlatformIO ":

<img src=".\Imagenes\Platformio\Instalacion\Paso_2.png">

3. Clickea el boton que dice "Install" o "Instalar":

<img src=".\Imagenes\Platformio\Instalacion\Paso_3.png">

4. Esperar a que PlatformIO IDE se instale. Cuando dicha accion finalice, aparecera un menu el cual le pedira que reinicie Visual Studio Code, utilice dicho menu o simplemente reinice el programa cerrandolo y volviendolo a abrir.

5. Una vez que Visual Studio Code se inicie, debera poder observar un nuevo boton en el panel lateral.

<img src=".\Imagenes\Platformio\Instalacion\Paso_4.png">

### Como usar PlatformIO

A continuacion, se explica como poder utilizar PlatformIO para abrir el proyecto y programar el ESP32.

#### Abrir Proyecto

Para poder abrir el proyecto y poder programar el ESP32 segui los siguientes pasos.

1. Clickea el boton de PlatformIO en la panel lateral.

<img src=".\Imagenes\Platformio\Abrir Proyecto\Paso_1.png">

2. Clickea el boton "Pick Folder" 

<img src=".\Imagenes\Platformio\Abrir Proyecto\Paso_2.png">

3. Navega hacia el directorio donde hayas descomprimido el .zip descargado de GitHub y selecciona la carpeta que se llama "Proyecto_VSCode_Platformio"

<img src=".\Imagenes\Platformio\Abrir Proyecto\Paso_3.png">

4. Esperar a que el proyecto cargue correctamente. Para saber cuando termino la configuracion, podemos obervar la barra inferior, la cual se debe ver como la imagen; ademas, no debera aparecer ningun "cartel" o "Pop-Up" en la esquina inferior derecha.

<img src=".\Imagenes\Platformio\Abrir Proyecto\Paso_4.png">

#### Codigo

Los codigos se encuentran dentro de la carpeta "src" (source). 

<img src=".\Imagenes\Proyecto\src.png">

#### Compilar y Subir el Codigo al ESP32

- Para compilar el codigo se debe clickear el boton que se parece un tilde en el menu inferior, para poder hacerlo, procurar tener el codigo que se desea compilar abierto.

<img src=".\Imagenes\Proyecto\compilar.png">

- Para subir el programa en el ESP32, se debe tener el codugo abierto pero ademas se debe configurar el puerto serie (COM).
	- **Puerto serie**: Cuando se conecte el ESP32 a la PC, se debe clickear el boton que parece un "enchufe" y seleccionar el COM correcto.

	<img src=".\Imagenes\Proyecto\subir_paso_1.png">

	- Luego se debe presionar el boton de subir el cual es una flecha

	<img src=".\Imagenes\Proyecto\subir_paso_2.png">

Una vez que el codigo empiece a compilarse para poder subirlo al ESP32, hay que tener en cuenta que algunos ESP32 necesitan que al momento de que la PC se intente conectar al ESP32 se debe mantener presionado el boton de "boot" del ESP32 durante unos segundos hasta que, efectivamente, el codigo empiece a subirse.

- Momento en el que se debe mantener presinado el boton de "boot" del ESP32.

<img src=".\Imagenes\Proyecto\subir_boot_1.png">

Cuando en la terminal se empiecen a escribir mas lineas, ya se puede soltar el boton "boot" del ESP32.