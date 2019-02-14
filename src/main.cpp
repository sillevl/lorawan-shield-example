#include "mbed.h"
#include "Simple-LoRaWAN.h"
#include "LoRaMessage.h"

using namespace SimpleLoRaWAN;

uint8_t devEui[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
uint8_t appEui[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
uint8_t appKey[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

Serial pc(USBTX, USBRX, 115200);

Node node(devEui, appEui, appKey);

int main(void)
{
  pc.baud(115200);
  pc.printf("\r\n*** Starting LoRaWAN Shield Example ***\r\n");
  
  int counter = 0;

  while(true) {
    LoRaMessage message;
    message.addUint8(counter++);
    node.send(message.getMessage(), message.getLength());
    pc.printf("Message sent. counter: %d\r\n", counter);
    wait(30.0);
  }
}