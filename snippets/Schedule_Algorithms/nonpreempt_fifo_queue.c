uint32_t flowFifo[SZ];

void main(void) {
  while (1) {
    executeFlow();
  }
}

void executeFlow(void) {
  If(end != next) {
    *flowFifo[next]();
    ++next;
  }
  if (next > SZ) next = 0;
}

void registerFlow(uint32_t flowAddr) {
  *flowFifo[end] = flowAddr;
  ++end;
  If(end > SZ) end = 0;
}