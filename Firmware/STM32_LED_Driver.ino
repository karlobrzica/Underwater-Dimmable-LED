/*****************************************************
  STM32C011J6M6
  Servo PWM Input → 100 Hz PWM Output for AL8861 VSET
  Output PWM duty: 0–100% (linear brightness control)
  Default output = 1% if no PWM input
 *****************************************************/

const uint8_t inputPin  = PA12;  // Servo signal input
const uint8_t outputPin = PB7;   // PWM output to AL8861 VSET

unsigned long pulseWidth;    
float inputPercent;          
uint16_t pwmValue;          

// Servo pulse widths
const int servoMin = 1000;   
const int servoMax = 2000;  

// AL8861 PWM frequency 
const uint32_t pwmFreq = 100;  

// Default duty if no input signal
const float defaultDutyPercent = 1.0;  

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);

  analogWriteFrequency(pwmFreq);
  analogWriteResolution(12);
}

void loop() {

  // Read servo PWM high-time
  pulseWidth = pulseIn(inputPin, HIGH, 25000);  

  if (pulseWidth > 500) {  

    
    inputPercent = constrain(
                     map(pulseWidth, servoMin, servoMax, 0, 100),
                     0, 100
                   );

    // Convert 0–4095 PWM
    pwmValue = (uint16_t)(inputPercent / 100.0f * 4095);
  }
  else {
    pwmValue = (uint16_t)(defaultDutyPercent / 100.0f * 4095);
  }

  analogWrite(outputPin, pwmValue);
}
