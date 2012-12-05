int ledPins[] = {2,3,4,5,6,7,8,9,10};
int alphaShift[27][8] = {
  {2,3,5},{2,3,4,6,8},{2,3,4,6,7,8},{2,3,4,6},{2},{2,4,6,7,8},{2,3,4,5,6},{2,4,6,8},{2,4},{2,4,5,6,7,8,9},{2,3,4,6,7},{2,4,5,6,8},{2,3,4,5},{2,3,4},{2,3,4,5,6,7},{2,4,5,6,7,8},
  {2,3,4,5,6,8,9},{2,4,5,6},{2,4,6},{2,3},{2,4,6,7},{2,4,6,8,9},
  {2,4,5,6,7},{2,3,4,6,8,9},{2,3,4,6,7,8,9},{2,3,4,5,6,8},{10}
  };
int textIn;
int textOut = 5;
int i;
int g;

void setup() {
  Serial.begin(9600);
  for(i = 0; i <= 8; i ++) {
    pinMode(ledPins[i], OUTPUT);
  }
}
void loop(){

   for (g = 0; g <= 8; g ++)
    {
      digitalWrite(ledPins[g], LOW);
    }
    delay(500);
  if (Serial.available() > 0) {
    textIn = Serial.read();
    Serial.print(textIn);
    switch(textIn){
      case 65:
        textOut = 0;
        break;
      case 66:
        textOut = 1;
        break;
      case 67:
        textOut = 2;
        break;
      case 68:
        textOut = 3;
        break;
      case 69:
        textOut = 4;
        break;
      case 70:
        textOut = 5;
        break;
      case 71:
        textOut = 6;
        break;
      case 72:
        textOut = 7;
        break;
      case 73:
        textOut = 8;
        break;
      case 74:
        textOut = 9;
        break;
      case 75:
        textOut = 10;
        break;
      case 76:
        textOut = 11;
        break;
      case 78:
        textOut = 12;
        break;
      case 79:
        textOut = 13;
        break;
      case 80:
        textOut = 14;
        break;
      case 81:
        textOut = 15;
        break;
      case 82:
        textOut = 16;
        break;
      case 83:
        textOut = 17;
        break;
      case 84:
        textOut = 18;
        break;
      case 85:
        textOut = 19;
        break;
      case 86:
        textOut = 21;
        break;
      case 87:
        textOut = 22;
        break;
      case 88:
        textOut = 23;
        break;
      case 89:
        textOut = 24;
        break;
      case 90:
        textOut = 25;
        break;
      default:
        textOut = 26;
        break;  
    }
    Serial.print(textOut);
    Serial.print(textIn);
    for (i = 0; i <= 7; i ++){
      digitalWrite(alphaShift[textOut][i], HIGH);
      }
      delay(1000);
      

    }

}
