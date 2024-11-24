#include <Adafruit_NeoPixel.h>

#define RGBPIN            6
#define MODEBUTTONPIN            5
#define POWERBUTTONPIN            4

#define NUMPIXELS      150
#define NUMMODES      4
#define MAXBRIGHTNESS      255
#define MINBRIGHTNESS      5


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, RGBPIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second
int modeButtonState, powerButtonState, mode = 3;
bool locked = 0;
int runner[NUMPIXELS][3];
int varienceMax = MAXBRIGHTNESS * 0.2; // delay for half a second
int runnerNext[] = { random(0, MAXBRIGHTNESS), random(0, MAXBRIGHTNESS), random(0, MAXBRIGHTNESS)};

void setup() {
  Serial.begin(9600);
  Serial.println("Initalization Started");
  pixels.begin();
  pinMode(MODEBUTTONPIN, INPUT);
  pinMode(POWERBUTTONPIN, INPUT);

  for (int i = 0; i < NUMPIXELS; i++) {
    for (int j = 0; j < 3; j++) {
      runnerNext[j] = runnerNext[j] + random(-varienceMax, varienceMax);
      runnerNext[j] = runnerNext[j] < MINBRIGHTNESS ?MINBRIGHTNESS : runnerNext[j];
      runner[i][j] = runnerNext[j];
    }
  }
  Serial.println("Initalization Complete");
}

void setColor (int red, int green, int blue) {
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(red, green, blue)); // Moderately bright green color.
  }
  pixels.show(); // This sends the updated pixel color to the hardware.
}
void setAllColors (int colors[NUMPIXELS][3]) {
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(colors[i][0], colors[i][1], colors[i][2]));
  }
  pixels.show();
}

void loop() {
  modeButtonState = digitalRead(MODEBUTTONPIN);
  powerButtonState = digitalRead(POWERBUTTONPIN);
  if (HIGH == modeButtonState && locked == false) {
    mode = (mode + 1) % NUMMODES;
    locked = true;
  }
  else if (LOW == modeButtonState && locked == true) {
    locked = false;
  }
  if (powerButtonState == HIGH) {
    switch (mode) {
      case 0:
        setColor( MAXBRIGHTNESS, 0, 0);
        break;
      case 1:
        setColor(0, MAXBRIGHTNESS, 0);
        break;
      case 2:
        setColor(0, 0, MAXBRIGHTNESS);
        break;
      case 3:
        for (int i = NUMPIXELS - 1; i >= 1; i--) {
          for (int j = 0; j < 3; j++) {
            runner[i][j] = runner[i - 1][j];
          }
        }
        for (int j = 0; j < 3; j++) {
          runnerNext[j] = runnerNext[j] + random(-varienceMax, varienceMax);
          runnerNext[j] = runnerNext[j] < MINBRIGHTNESS ? MINBRIGHTNESS : runnerNext[j];
          runner[0][j] = runnerNext[j];
        }
        setAllColors(runner);
        //        Serial.println(
        delay(delayval);
        break;
    }
  }
  else {
    setColor(0, 0, 0);
  }
}
