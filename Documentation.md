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


### Working: When the air quality in the environment is fresh then sensor will send the low ppm gases in air and controller will send message fresh air to display on the lcd.
	   Similarly when the quality goes down then sesnor will send gas above 650 to 900 ppm then there will be message air started being polluted.When the quality become worse more thsn 900 ppm then it will display
	   that air is very polluted.Hence in this way we will moniter the air quality in the environment  

### Program Logic:
  
if (gas_val<=650) //if the air quality is less than or equal to 650 ppm
        print("Fresh Air");
else if( gas_val>650 && gas_val<=900 ) //if the air quality is more than 650 ppm less than 900 ppm
       print(" Poor Air");
else if(gas_val>=900 ) //if the air quality is more than or equal to 900 ppm 
        print("Very Poor");




