#include "mbed.h"
#include "Simple-LoRaWAN.h"
#include "LoRaMessage.h"
#include "settings.h"

using namespace SimpleLoRaWAN;

Serial pc(USBTX, USBRX, 115200);

Node node(config);

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