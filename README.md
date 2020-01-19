# Arduino-MBUS-repeater

This software will only repeat the serial communication of the serial port to serial1 port of the Arduino MKR and back.  
Useful to test our [MBUS shield](https://www.hwhardsoft.de/english/projects/m-bus-mkr-shield/) and your MBUS devices.

![My image](https://hackster.imgix.net/uploads/attachments/1035416/_utvfqYvJK0.blob?auto=compress%2Cformat&w=900&h=675&fit=min)


## Hardware

[Arduino MKR of your choice](https://store.arduino.cc/)
[MBUS shield](https://www.hwhardsoft.de/english/projects/m-bus-mkr-shield/)


## Usage

You will need the free software [LorusFree](https://www.m-bus.de/lorus_download/lorusfree_setup.zip) to read MBUS devices.

Set the COM-Port in LorusFree to the Arduino-Port, Baud rate to 2400 and press the Readout button:

![My image](https://hackster.imgix.net/uploads/attachments/1035416/_utvfqYvJK0.blob?auto=compress%2Cformat&w=900&h=675&fit=min)


## License

This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with this library; if not, write to the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
