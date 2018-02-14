class VoltDisplayClass {
public:
  void renderMeasured(int x, int y, float rawMv);
  void renderSet(int x, int y, float rawMv);
  void boldText(int x, int y, char* text);
  void boldNumber(int x, int y, int digits, int number);
};

extern VoltDisplayClass VOLT_DISPLAY;
