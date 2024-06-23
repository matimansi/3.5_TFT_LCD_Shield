_Matias Mansilla_, _Rosario Bernal y Martin Casado_ 

# Índice

- [3.5" TFT LCD Shield con ESP32](#35-tft-lcd-shield-con-esp32)
- [Contenido del Repositorio](#contenido-del-repositorio)
- [Herramientas Necesarias](#herramientas-necesarias)
	- [Hardware](#hardware)
		- [Componentes necesarios](#componentes-necesarios)
		- [Conexiones](#conexiones)
	- [Software](#software)
		- [Descargar el Proyecto](#descargar-el-proyecto)
		- [Instalacion Visual Studio Code](#instalacion-visual-studio-code)
		- [Instalacion PlatformIO IDE](#instalacion-platformio-ide)
- [Como usar el Proyecto](#como-usar-el-proyecto)
	- [Abrir Proyecto](#abrir-proyecto)
	- [Codigo](#codigo)
		- [Compilar y Subir el Codigo al ESP32](#compilar-y-subir-el-codigo-al-esp32) 



# 3.5" TFT LCD Shield con ESP32

Proyecto de Platformio en Visual Studio Code para programar un display/pantalla 3.5" TFT LCD Shield con un ESP32.

## Contenido del Repositorio

- Proyecto de PlatformIO IDE en Visual Studio Code.
- Librerias necesarias.
- Tabla de Conexiones entre display y ESP32.
- Codigos de prueba y ejemplos.

# Herramientas Necesarias

Para poder programar el display deberas seguir los siguientes pasos

## Hardware

### Componentes necesarios

- ESP32.
- Cable USB a Micro USB.
- 3.5" TFT LCD Shield.
- Cables M-M; M-H; H-H segun la necesidad.

### Conexiones

A continuacion, se puede obserar una tabla con las conexiones que se deben realizar entre el Display y el ESP32.

| Dispositivo |     |     |         |        |        |        | Pines  |        |        |        |        |        |        |        |        |
|:-----------:|:---:|:---:|:-------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|
|   Display   | 3V3 | GND | LCD_RST | LCD_CS | LCD_RS | LCD_WR | LCD_RD | LCD_D0 | LCD_D1 | LCD_D2 | LCD_D3 | LCD_D4 | LCD_D5 | LCD_D6 | LCD_D7 | 
|    ESP32    | 3V3 | GND |   D32   |   D33  |   D18  |   D4   |   D2   |   D12  |   D13  |   D26  |   D25  |   D21  |   D5   |   D27  |   D14  | 

## Software

### Descargar el Proyecto

Para poder descargar el proyecto dirigite al [repositorio en GitHub](https://github.com/matimansi/3.5_TFT_LCD_Shield_ESP32) y segui los siguientes pasos.

1. Clickea el boton "Code"

<img src=".\Imagenes\Repositorio\Paso_1.png">

2. Clckea el boton "Download ZIP"

<img src=".\Imagenes\Repositorio\Paso_2.png">

3. Move el .zip a la ruta que desees y descomprimilo.

Listo, con dichos pasos ya deberias tener una carpeta que contiene todos los documentos del repositorio.

### Instalacion Visual Studio Code 

Si no tenes instalado Visual Studio Code [ <img src=".\Imagenes\Logo_VS_Code.png" width="10"/> ] podes hacerlo desde el siguiente [link](https://code.visualstudio.com/).

### Instalacion PlatformIO IDE 

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

# Como usar el Proyecto

A continuacion, se explica como poder utilizar el proyecto para poder programar el ESP32.

## Abrir Proyecto

Para poder abrir el proyecto y poder programar el ESP32 segui los siguientes pasos.

1. Clickea el boton de PlatformIO en la panel lateral.

<img src=".\Imagenes\Platformio\Abrir Proyecto\Paso_1.png">

2. Clickea el boton "Pick Folder" 

<img src=".\Imagenes\Platformio\Abrir Proyecto\Paso_2.png">

3. Navega hacia el directorio donde hayas descomprimido el .zip descargado de GitHub y selecciona la carpeta que se llama "Proyecto_VSCode_Platformio"

<img src=".\Imagenes\Platformio\Abrir Proyecto\Paso_3.png">

4. Esperar a que el proyecto cargue correctamente. Para saber cuando termino la configuracion, podemos obervar la barra inferior, la cual se debe ver como la imagen; ademas, no debera aparecer ningun "cartel" o "Pop-Up" en la esquina inferior derecha.

<img src=".\Imagenes\Platformio\Abrir Proyecto\Paso_4.png">

## Codigo

Los codigos se encuentran dentro de la carpeta "src" (source). 

<img src=".\Imagenes\Proyecto\src.png">

### Compilar y Subir el Codigo al ESP32

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
