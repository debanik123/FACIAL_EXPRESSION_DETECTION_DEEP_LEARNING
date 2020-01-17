int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;
void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if(Serial.read() == 'R')
  {  
    RGB_color(255, 0, 0); // Red
  }
   if(Serial.read() == 'G')
  {
    RGB_color(0, 255, 0); // Green 
  } 
  if(Serial.read() == 'B')
  {
    RGB_color(0, 0, 255); // Blue
  } 
   if(Serial.read() == 'r')
  { 
    RGB_color(255, 255, 125); // Raspberry
  } 
  if(Serial.read() == 'C')
  {
    RGB_color(0, 255, 255); // Cyan
  } 
   if(Serial.read() == 'M')
  {
    RGB_color(255, 0, 255); // Magenta  
  }
  if(Serial.read() == 'Y')
  {
    RGB_color(255, 255, 0); // Yellow  
  } 
  if(Serial.read() == 'W')
  {
   RGB_color(255, 255, 255); // White  
  }
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}


