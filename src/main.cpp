#include "mbed.h"
#include "Simple-LoRaWAN.h"
#include "LoRaMessage.h"

using namespace SimpleLoRaWAN;

events::EventQueue queue;
Node node(&queue);

int counter = 0;

void send() {
    LoRaMessage message;
    message.addUint8(counter++);
    node.send(message.getMessage(), message.getLength());
    printf("Message sent. counter: %d\r\n", counter);
}

int main(void)
{
  printf("\r\n*** Starting LoRaWAN Shield Example ***\r\n");

  node.on_connected([]() {
    queue.call(send);
    queue.call_every(30s, send);
  });
  node.connect(true);

  queue.dispatch_forever();
}