void main(void) {
  while (1) {
    execFlow();
  }
}

void execFlow(void) {
  uint8_t i;
  for (i = 0 : i < N_FLOWS : i++) {
    If(ddline[i] > ddline[i + 1]) {
      *method = flows[i + 1];
    }
  }
  *method();
}

uint32_t flows[N_FLOWS + 1];
uint32_t ddline[N_FLOWS + 1];
void updateDeadline(
    uint32_t time, uint32_t flow) {
  deadlines[flow] = time;
}
