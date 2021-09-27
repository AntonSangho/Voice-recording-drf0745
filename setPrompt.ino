/*!
 * @file play.ino
 * @brief Playing
 * @n Experiment Phenomenon:Power on the module then it enters the music mode. 
 * @n                       Start playing the previously-recorded file, pause 3s later, 
 * @n                       play the next song 3s later, play the last song 3s later, 
   @n                       and play the file of specific number(FILE0000) once 3s later.
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [fengli](li.feng@dfrobot.com)
 * @version  V1.0
 * @date  2020-07-16
 * @get from https://www.dfrobot.com
 * @url https://github.com/DFRobot/DFRobot_DF1101S
 */
#include <DFRobot_DF1101S.h>
#include <SoftwareSerial.h>

SoftwareSerial df1101sSerial(2, 3);  //RX  TX

DFRobot_DF1101S df1101s;
void setup(void){
  Serial.begin(115200);
  df1101sSerial.begin(115200);
  while(!df1101s.begin(df1101sSerial)){
    Serial.println("Init failed, please check the wire connection!");
    delay(1000);
  }
  /*Set volume to 30*/
  df1101s.setVol(30);
  Serial.print("VOL:");
  /*Get volume*/
  Serial.println(df1101s.getVol());
  delay(2000);
  /*Disable prompt mode*/
  df1101s.setPrompt(false);
  delay(2000);
  Serial.print("Done");
  
}

void loop(){

}
