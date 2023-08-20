# Arduino-MBUS-repeater

This software will only repeat the serial communication of the serial port to serial1 port of the Arduino MKR and back.  
Useful to test our [MBUS shield](https://www.hwhardsoft.de/english/projects/m-bus-mkr-shield/) and your MBUS devices.

![My image](https://user-images.githubusercontent.com/3049858/72681999-3a597480-3ac9-11ea-857b-fae4e47f3a2b.jpg)

![My image](https://user-images.githubusercontent.com/3049858/72682112-18acbd00-3aca-11ea-9c4c-bc3078384f84.jpg)


## Hardware

[Arduino MKR of your choice](https://store.arduino.cc/)

[MBUS shield](https://www.hwhardsoft.de/english/projects/m-bus-mkr-shield/)

MBUS device (meter) of your choice


## Usage

You will need the free software [LorusFree](https://www.m-bus.de/lorus_download/lor261021.zip) to read MBUS devices.

Set the COM-Port in LorusFree to the Arduino-Port, Baud rate to 2400 and press the Readout button:

![My image](https://user-images.githubusercontent.com/3049858/72682001-3b8aa180-3ac9-11ea-943b-ca9b710ba540.jpg)


## License

This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with this library; if not, write to the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
