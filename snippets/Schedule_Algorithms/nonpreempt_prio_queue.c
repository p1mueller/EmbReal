void main(void) {
  while (1) {
    execFlow();
  }
}

void execFlow(void) {
  if (excReq && FLOW_A) {
    execFlowA();
  } else if (excReq && FLOW_B) {
    execFlowB();
  }
}

uint32_t flowQueue[SZ];
void regFlow(uint32_t flag) {
  excReq |= flag;
}