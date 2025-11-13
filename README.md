Here are the main GitHub repositories and resources for Digispark projects:

## Official Digispark Repositories:

### 1. **digistump/DigistumpArduino** (Official)
```
https://github.com/digistump/DigistumpArduino
```
- Official Arduino core for Digistump boards
- Includes Digispark support
- Board definitions and examples

### 2. **digistump/DigisparkExampleScripts**
```
https://github.com/digistump/DigisparkExampleScripts
```
- Example scripts for Digispark
- Basic functionality demonstrations

## Popular Community Repositories:

### 3. **hak5darren/USB-Rubber-Ducky**
```
https://github.com/hak5darren/USB-Rubber-Ducky
```
- While not Digispark-specific, many concepts apply
- Ducky Script payloads that can be adapted

### 4. **Digispark Script Collections:**
```
https://github.com/CedArctic/Digispark-Scripts
```
- Collection of various Digispark scripts
- Educational purposes

```
https://github.com/mame82/DUCKY-Toolkit
```
- Ducky Script to Digispark converter
- Useful tool for payload development

## Security/Educational Repositories:

### 5. **hak5/usbrubberducky-payloads**
```
https://github.com/hak5/usbrubberducky-payloads
```
- Official Hak5 payload repository
- Can be adapted for Digispark

### 6. **sg0xbd/DigisparkHID**
```
https://github.com/sg0xbd/DigisparkHID
```
- HID attack scripts for Digispark
- **For educational/authorized testing only**

## Important GitHub Search Terms:
- "digispark payloads"
- "digispark scripts" 
- "attiny85 hid"
- "usb rubber ducky digispark"

## ⚠️ **Important Notes:**

### Legal & Ethical:
- **Only use on systems you own**
- **Unauthorized access is illegal**
- **Many repos are for educational/authorized testing only**

### Setup Instructions:
1. Install Arduino IDE
2. Add Digistump AVR boards via Board Manager
3. Install Digispark drivers
4. Select "Digispark (Default - 16.5mhz)" board

### Basic Template Structure:
```cpp
#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  // Your code here
}

void loop() {
  // Empty for one-time execution
}
```

## Recommended Learning Path:
1. Start with basic keyboard simulation
2. Learn about different operating system detection
3. Practice in virtual machines you control
4. Study defensive techniques alongside offensive ones

Would you like me to explain how to set up the development environment or help you understand any specific aspect of Digispark programming?
