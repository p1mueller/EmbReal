void main(void) {
  while (1) {
    executeADscanning();
    executeCalculationCtrlLoop();
    setOutputSignal();
    updateDisplay();
    executeCommunication();
  }
}

void interruptAdcConvertionDone(void) {
  if (ADC_DONE) {
    adcValue = ADC_REGCH1;
    ADC_DONE = 0;
    ADC_set_state(CONVERTION_DONE);
  }
}