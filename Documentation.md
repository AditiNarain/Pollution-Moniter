# Alcohol Detector
  ## Abstract:
In our project we will be monitoring the air quality in the environment present is harmful or not. For this we are using MQ135 senor so it will be checking if the air pollution rate in the environemt. So that we take step if the gasses in the air becomes hazardous for the health. 
### Components:
1.	MQ135 Gas Sessor
2.	Arduino UNO
3.	LCD
4.	Potentiometer (For Brightness of  LCD) 

### About Component:
   • MQ135 Gas Sensor: This sensor gives voltage change according to the amount gas like CO,ammonia,benzene,alcohol and smog present in the air.It gives the air quality in ppm. The conductivity of sensor is directly proportional to harmful gases. 
		When it comes in contact with fresh air  its electron gets attracted with O2 and creates a depletion layer so no electron flow through circuit.
		When sensor comes in contact with polluting gas at surface reacts with it and hence decreases potential barrier.The electrons starts to flow through it.
		Operating Voltage of sensor is 2.5 to 3v.
  
### Circuit Diagram:
![Circuit Diagram](https://user-images.githubusercontent.com/73650233/104715460-9c849e00-574c-11eb-91e3-7a0eb1c4d33e.png)



### Working: 
When the air quality in the environment is fresh then sensor will send the low ppm gases in air and controller will send message fresh air to display on the lcd.

![Fresh](https://user-images.githubusercontent.com/73650233/104715625-cb9b0f80-574c-11eb-8917-93f9ad59cea5.PNG)

Similarly when the quality goes down then sesnor will send gas above 650 to 900 ppm then there will be message air started being polluted.

![low quality](https://user-images.githubusercontent.com/73650233/104715687-deaddf80-574c-11eb-8e6c-a4868d129d3d.PNG)

When the quality become worse more thsn 900 ppm then it will display that air is very polluted.Hence in this way we will moniter the air quality in the environment 

![very poor](https://user-images.githubusercontent.com/73650233/104715741-ee2d2880-574c-11eb-8d0a-6745ca0085b6.PNG)
##### The message on the serial moniter

![serial moniter](https://user-images.githubusercontent.com/73650233/104715541-b4f4b880-574c-11eb-8a61-c24888f0ccee.PNG)

### Program Logic:
  
	if (gas_val<=660) //if the air quality is less than or equal to 660 ppm
        	print("Fresh Air");
	else if( gas_val>660 && gas_val<=900 ) //if the air quality is more than 660 ppm less than 900 ppm
      		 print(" Poor Air");
	else if(gas_val>=900 ) //if the air quality is more than or equal to 900 ppm 
        	print("Very Poor");




