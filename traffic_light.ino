#define RED_LED_PIN
#define YELLOW_LED_PIN
#define GREEN_LED_PIN

int LightingTime = 2000;
int YellowLightingTime = 500;
int WithoutLightingTime = 250;
int BlinksCount = 5;
int BlinksTime = 250;
void Blinks(int blinksCount, int blinksTime);

void setup(){
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(YELLOW_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
}

void loop(){
    digitalWrite(RED_LED_PIN, HIGH);
    delay(LightingTime);
    
    digitalWrite(YELLOW_LED_PIN, HIGH);
    delay(YellowLightingTime);

    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, LOW);
    delay(WithoutLightingTime);

    digitalWrite(GREEN_LED_PIN, HIGH);
    delay(LightingTime);

    Blinks(BlinksCount, BlinksTime);

    digitalWrite(YELLOW_LED_PIN, HIGH);
    delay(YellowLightingTime);
    
    digitalWrite(YELLOW_LED_PIN, LOW);
    delay(WithoutLightingTime);
}

void Blinks(int blinksCount, int blinksTime){
    for(int count = 0; count < blinksCount; count++){
        digitalWrite(GREEN_LED_PIN, HIGH);
        delay(blinksTime);
        digitalWrite(GREEN_LED_PIN, LOW);
        delay(blinksTime);
    }
}
