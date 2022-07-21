/*
 *  Simple M-BUS repeater for Arduino MBUS MKR Shield  
 *  Version 1.0
 *  Copyright (C) 2020  Hartmut Wendt  www.zihatec.de
 *  
 *  This software will only repeat the serial commiunication of the serial port 
 *  to seria1 and back. Useful to test the MBUS shield and your MBUS devices.
 *  
 *  You will need the free software LorusFree to read MBUS devices
 *  https://www.m-bus.de/lorus_download/lorusfree_setup.zip
 *  
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/   

void setup()  
{
  Serial.begin(2400, SERIAL_8E1); 
  Serial1.begin(2400, SERIAL_8E1); 
}

void loop() 
{
  //send any software serial data back out on serial1 link
  if (Serial1.available()) Serial.write(Serial1.read());
  
  //send any serial1 data back out on serial link
  if (Serial.available())Serial1.write(Serial.read());
}
