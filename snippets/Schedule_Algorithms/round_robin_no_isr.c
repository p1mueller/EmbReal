void main(void) {
  while (1) {
    executeADscanning();
    executeCalculationCtrlLoop();
    setOutputSignal();
    updateDisplay();
    executeCommunication();
  }
}