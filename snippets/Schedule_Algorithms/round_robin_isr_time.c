void main(void) {
  while (1) {
    dispatcher();
    waitTimeBase();
  }
}

void dispatcher(void) {
  executeADscanning();
  executeCalculationCtrlLoop();
  setOutputSignal();
  updateDisplay();
  executeCommunication();
}

void interruptAdcConvertionDone(void) {
  if (ADC_DONE) {
    adcValue = ADC_REGCH1;
    ADC_DONE = 0;
    ADC_set_state(CONVERTION_DONE);
  }
}

#TIME_BASE100MS 3277
void waitTimeBase(void) {
  while (TIMER < TIME_BASE100MS) {
    //do nothing
  }
  setbackTimer();
  incSystemTime();
}