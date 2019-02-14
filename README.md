# LoRaWAN Shield example

This project is a 'Hello World' application for the LoRaWAN Shield, developed at VIVES. This example makes use of the [Simple LoRaWAN](https://github.com/sillevl/mbed-Simple-LoRaWAN) library for mbed and the [LoRaWAN Serialization](https://github.com/sillevl/mbed-lorawan-serialization) library.

This example will send a single byte every 30 seconds. After each transmit, the counter is incremented by 1.

## LoRaWAN Shield

The LoRaWAN Shield, developed at VIVES. Is a Arduino compatible board that houses an RFM95W LoRaWAN transceiver and a small EEPROM. The shield can be used on every mbed board that has an Arduino compatible header layout.

### Pinmappings

The LoRaWAN Shield uses some fixed pins for SPI, together with some configurable dip switchers at the bottom to configure different mapping. This feature is available to be compatible with different microcontroller boards and other sensor shields.

Signal | Pin | configurable
--- | --- | ---
MISO | D11 | no
MISO | D12 | no
CLK | D13 | no
NSS | D0 or A0 | yes, using dip switch
RESET | D1 or A1 | yes, using dip switch
DIO 0 | D2 or A2 | yes, using dip switch
DIO 1 | D3 or AR | yes, using dip switch

#### Pins DO and D1

Some microcontroller boards like ST Nucleo have hardwired serial connections for the USB UART on the pins D0 and D1. Therefore it is impossible to combine UART communications over USB and the LoRaWAN Shield using D0 and D1. Use the dipswitches to change the configuration and use A0 and A1.

## Simple LoRaWAN library

Note: This library is still in development

[https://github.com/sillevl/mbed-Simple-LoRaWAN](https://github.com/sillevl/mbed-Simple-LoRaWAN)

## LoRaWAN Serialization library

Note: This library is still in development

[https://github.com/sillevl/mbed-lorawan-serialization](https://github.com/sillevl/mbed-lorawan-serialization)


