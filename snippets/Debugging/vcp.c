static void MX_USART3_UART_Init(void);

static void MX_USART3_UART_Init(void) {
  /* USER CODE BEGIN USART3_Init 0 */
  /* USER CODE BEGIN USART3_Init 1 */
  /* USER CODE END USART3_Init 0 */
  /* USER CODE END USART3_Init 1 */
  huart3.Instance = USART3;
  huart3.Init.BaudRate = 115200;
  huart3.Init.WordLength = UART_WORDLENGTH_8B;
  huart3.Init.StopBits = UART_STOPBITS_1;
  huart3.Init.Parity = UART_PARITY_NONE;
  huart3.Init.Mode = UART_MODE_TX_RX;
  huart3.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart3.Init.OverSampling = UART_OVERSAMPLING_16;
  huart3.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart3.Init.ClockPrescaler = UART_PRESCALER_DIV1;
  huart3.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart3) != HAL_OK) {
    Error_Handler();
  }
if (HAL_UARTEx_SetTxFifoThreshold(&huart3, UART_TXFIFO_THRESH
{
    Error_Handler();
}
if (HAL_UARTEx_SetRxFifoThreshold(&huart3, UART_RXFIFO_THRESH
{
    Error_Handler();
}
if (HAL_UARTEx_DisableFifoMode(&huart3) != HAL_OK)
{
    Error_Handler();
}
}

MX_USART3_UART_Init();
HAL_UART_Transmit(&huart3, "VCP\n", 4, 0xFFFF);
