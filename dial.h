#define KEYBOARD_1 1
#define KEYBOARD_2 2
#define KEYBOARD_3 3
#define KEYBOARD_4 4
#define KEYBOARD_5 5
#define KEYBOARD_6 6
#define KEYBOARD_7 7
#define KEYBOARD_8 8
#define KEYBOARD_9 9
#define KEYBOARD_0 10

#define KEYBOARD_COMMA 11
#define KEYBOARD_UV 12
#define KEYBOARD_MV 13
#define KEYBOARD_V 14
#define KEYBOARD_BACK 15
#define KEYBOARD_CLR 16

#define KEYBOARD_PLUSMINUS 17
#define KEYBOARD_DIVIDE10 18
#define KEYBOARD_TIMES10 19

#define KEYBOARD_OK 50
#define KEYBOARD_CANCEL 51

#define BUTTON_VOLT_SET 100

#define COLOR_VOLT 0x00F06E
#define COLOR_VOLTAGE_SHADDOW 0x003C00
#define COLOR_CURRENT 0xE8CA3A // yellow
#define COLOR_CURRENT_SHADDOW 0x323200 // yellow shaddow
//GD.ColorRGB(20,170,255) // light blueish



class DialClass {

  int dialEntries[100];
  int digits;
  bool keydepressed = true;
  char *voltDecade = "V ";
  bool negative = false;
  bool dialog = false;
  
public:
  float toMv();
  void clear();
  void handleKeypad();
  void transButton(int x, int y, int sz, char* label, int fontsize);
  void open();

};

extern DialClass DIAL;
