#pragma once

#include "config.h"

using namespace SimpleLoRaWAN;

LoRaWANKeys keys = { 
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },         // devEui
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },         // appEui
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } // appKey
};

Pinmapping pins = { D11, D12, D13, A0, A1, D2, D3 };  // miso, mosi, clk, nss, reset, dio0, dio1