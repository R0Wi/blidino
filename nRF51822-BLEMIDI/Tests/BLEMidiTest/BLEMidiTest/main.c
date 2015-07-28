//
//  main.c
//  BLEMidiTest
//
//  Created by Matthias Frick on 24/07/15.
//  Copyright (c) 2015 Matthias Frick. All rights reserved.
//
#include "BLEParser.h"
#include <stdio.h>
#include <inttypes.h>

static uint8_t testdata[5] = { 0x80, 0x80, 0x90, 0x80, 0x45 };
static uint8_t runningtestdata[8] = { 0x80, 0x80, 0x90, 0x45, 0x45, 0x80, 0x22, 0x45 };
static uint8_t sysexdata[7] = { 0x80, 0x80, 0xf0, 0x90, 0x80, 0x30, 0xf7};
static uint8_t longSysEx[129] =
{
  0x80, 0x80, 0xf0, 0x47, 0x7f, 0x15, 0x5c, 0x00, 0x01,
  0x00, 0xf7, 0x80, 0xf0, 0x47, 0x7f, 0x15, 0x62, 0x00, 0x01,
  0x80, 0x00, 0x80, 0xf7, 0xbb, 0xb0, 0x4f, 0x6c, 0x47, 0x40,
  0x48, 0x00, 0x49, 0x00, 0x4a, 0x00, 0x4b, 0x2a, 0x4c, 0x40,
  0x83, 0xbb, 0xb0, 0x4d, 0x00, 0x4e, 0x4e, 0x80, 0xf0, 0x47,
  0x7f, 0x15, 0x18, 0x00, 0x45, 0x00, 0x53, 0x74, 0x72, 0x53,
  0x80, 0x70, 0x72, 0x74, 0x6e, 0x20, 0x42, 0x6c, 0x6f, 0x63,
  0x6b, 0x44, 0x63, 0x20, 0x50, 0x68, 0x73, 0x49, 0x6e, 0x76,
  0x80, 0x72, 0x74, 0x20, 0x50, 0x68, 0x73, 0x49, 0x6e, 0x76,
  0x72, 0x74, 0x53, 0x67, 0x6e, 0x61, 0x6c, 0x53, 0x72, 0x63,
  0x80, 0x20, 0x50, 0x61, 0x6e, 0x6f, 0x72, 0x61, 0x6d, 0x61,
  0x4d, 0x75, 0x74, 0x65, 0x20, 0x20, 0x20, 0x20, 0x20, 0x47,
  0x80, 0x61, 0x69, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x80, 0xf7
};

int main(int argc, const char * argv[]) {
  // insert code here...
 /* printf("Testing MIDI!\n");
  for (int i = 1; i < 5; i++)
  {
    parseMidiEvent(testdata[1], testdata[i]);
  }
  
  printf("\n\nTesting Sysex");
  for (int i = 1; i < 7; i++)
  {
    parseMidiEvent(sysexdata[1], sysexdata[i]);
  }
  
  printf("\n\nTesting Running Midi");
  for (int i = 1; i < 8; i++)
  {
    parseMidiEvent(runningtestdata[1], runningtestdata[i]);
  } */
  
  printf("\n\nTesting Long Sysex");
  for (int i = 1; i < 20; i++)
  {
    parseMidiEvent(longSysEx[1], longSysEx[i]);
  }
  printf("\n\nTesting Long Sysex");
  for (int i = 1; i < 20; i++)
  {
    parseMidiEvent(longSysEx[1], longSysEx[i]);
  }
  printf("\n\nTesting Long Sysex");
  for (int i = 21; i < 40; i++)
  {
    parseMidiEvent(longSysEx[20], longSysEx[i]);
  }
  printf("\n\nTesting Long Sysex");
  for (int i = 41; i < 60; i++)
  {
    parseMidiEvent(longSysEx[40], longSysEx[i]);
  }
  printf("\n\nTesting Long Sysex");
  for (int i = 61; i < 80; i++)
  {
    parseMidiEvent(longSysEx[60], longSysEx[i]);
  }
  printf("\n\nTesting Long Sysex");
  for (int i = 81; i < 100; i++)
  {
    parseMidiEvent(longSysEx[80], longSysEx[i]);
  }
  printf("\n\nTesting Long Sysex");
  for (int i = 101; i < 120; i++)
  {
    parseMidiEvent(longSysEx[100], longSysEx[i]);
  }
  printf("\n\nTesting Long Sysex");
  for (int i = 121; i < 130; i++)
  {
    parseMidiEvent(longSysEx[120], longSysEx[i]);
  }
    return 0;
}
