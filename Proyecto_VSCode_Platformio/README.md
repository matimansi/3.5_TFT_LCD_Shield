_Matias Mansilla_

# Índice

- [Contenido del Repositorio](##Contenido_del_Repositorio)
- [Herramientas Necesarias](##Herramientas_Necesarias)
    - [Hardware](###Hardware)
    - [Software](###Software)
        - [Instalacion de Visual Studio Code](####Instalacion_de_Visual_Studio_Code)
        - [PlatformIO IDE](####PlatformIO_IDE)

# 3.5" TFT LCD Shield con ESP32

Proyecto de Platformio en Visual Studio Code para programar un display/pantalla 3.5" TFT LCD Shield con un ESP32.

## Contenido del Repositorio

- Proyecto de PlatformIO IDE en Visual Studio Code.
- Librerias necesarias.
- Tabla de Conexiones entre display y ESP32.
- Codigos de prueba y ejemplos.

## Herramientas Necesarias

Para poder programar el display deberas seguir los siguientes pasos

### Hardware

#### Componentes necesarios

- ESP32.
- Cable USB a Micro USB.
- 3.5" TFT LCD Shield.
- Cables M-M; M-H; H-H segun la necesidad.

#### Conexiones

A continuacion, se puede obserar una tabla con las conexiones que se deben realizar entre el Display y el ESP32.

| Dispositivo |  |  |  |  |  |  | Pines |  |  |  |  |  |  |  |  |
|:-----------:|:-----:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| Display | 3V3 | GND | LCD_RST | LCD_CS | LCD_RS | LCD_WR | LCD_RD  | LCD_D0 | LCD_D1 | LCD_D2 | LCD_D3 | LCD_D4 | LCD_D5 | LCD_D6 | LCD_D7 
|ESP32| 3V3 | GND | D32 | D33 | D18 | D4 | D2 | D12 | D13 | D26 | D25 | D21 | D5 | D27 | D14 | 

### Software

#### Instalacion de Visual Studio Code <img src=".\Imagenes\Logo_VS_Code.png" width="15"/>


Si no tenes instalado Visual Studio Code podes hacerlo desde el siguiente [link](https://code.visualstudio.com/).

#### PlatformIO IDE <img src=".\Imagenes\Logo_Platformio.png" width="15"/>

Una vez instalado Visual Studio Code, debemos instalar la extension PlatformiIO IDE. Para poder hacerlo segui los siguientes pasos.

1. Clickea el boton de extensiones o presiona "Ctrl + Shift + X":

<img src=".\Imagenes\Platformio\Paso_1_Platformio.png">

2. En el cuadro de busqueda escribri "PlatformIO ":

<img src=".\Imagenes\Platformio\Paso_2_Platformio.png">

3. Clicke el boton que dice "Install" o "Instalar":

<img src=".\Imagenes\Platformio\Paso_3_Platformio.png">

4. Esperar a que PlatformIO IDE se instale. Cuando dicha accion finalice, aparecera un menu el cual le pedira que reinicie Visual Studio Code, utilice dicho menu o simplemente reinice el programa cerrandolo y volviendolo a abrir.

5. Una vez que Visual Studio Code se inicie, debera poder observar un nuevo boton en el panel lateral.

<img src=".\Imagenes\Platformio\Paso_4_Platformio.png">

