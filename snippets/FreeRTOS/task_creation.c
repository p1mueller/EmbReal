BaseType_t xTaskCreate(
    TaskFunction_t pvTaskCode,            // pointer to task function
    const char *const pcName,             // task name
    configSTACK_DEPTH_TYPE usStackDepth,  // number of words (2 bytes) for task stack
    void *pvParameters,                   // parameters used on start
    UBaseType_t uxPriority,               // task priority
    TaskHandle_t *pxCreatedTask           // pointer to the task handle
);

// task to be created.
void vTaskCode(void *pvParameters) {
  /* the parameter value is expected to be 1 as 1 is passed in pvParameters
   value in the call to xTaskCreate() below. */
  configAssert(((uint32_t)pvParameters) == 1);
  for (;;) {
    // task code goes here
  }
}