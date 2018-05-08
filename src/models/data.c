#include "data.h"

const unsigned char ground_tiles[] = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x01,0x01,0x01,0x7F,0x01,0x7F,
  0xFF,0xFF,0x10,0x10,0x10,0xF7,0x10,0xF7
};

const unsigned char ground_map[] = {
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01
};

const unsigned char blank_map[] = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char hacker_tiles[] = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x07,0x08,0x0F,0x13,0x1C,0x26,0x39,
  0x21,0x3E,0x21,0x3E,0x26,0x39,0x27,0x38,
  0xE0,0xE0,0x10,0xF0,0xF8,0x08,0x4C,0xB4,
  0xB4,0xDC,0xB4,0xDC,0x4C,0xB4,0xFC,0x04,
  0x13,0x1C,0x08,0x0F,0x07,0x07,0x02,0x03,
  0x0C,0x0F,0x12,0x1F,0x12,0x1F,0x1E,0x13,
  0xF8,0x08,0x10,0xF0,0x60,0xE0,0x00,0x80,
  0x60,0xE0,0x30,0xF0,0x30,0xF0,0x20,0xF0,
  0x13,0x1C,0x08,0x0F,0x07,0x07,0x02,0x03,
  0x0C,0x0F,0x12,0x1F,0x3A,0x27,0x3C,0x27,
  0xF8,0x08,0x10,0xF0,0x60,0xE0,0x00,0x80,
  0x60,0xE0,0x30,0xF0,0x38,0xE8,0x38,0xE8,
  0x13,0x1C,0x08,0x0F,0x07,0x07,0x02,0x03,
  0x0C,0x0F,0x14,0x1F,0x3C,0x27,0x3C,0x27,
  0x13,0x1C,0x08,0x0F,0x07,0x07,0x02,0x03,
  0x0C,0x0F,0x12,0x1F,0x17,0x19,0x0F,0x09,
  0xF8,0x08,0x10,0xF0,0x60,0xE0,0x00,0x80,
  0x60,0xE0,0x30,0xF0,0x30,0xF0,0x20,0xE0,
  0x13,0x1C,0x08,0x0F,0x07,0x07,0x03,0x03,
  0x0D,0x0E,0x09,0x0E,0x0F,0x0F,0x08,0x0F,
  0xF8,0x08,0x10,0xF0,0x60,0xE0,0x80,0x80,
  0xE0,0x60,0xE0,0x60,0xE0,0xE0,0x20,0xE0,
  0x1E,0x13,0x0E,0x0D,0x09,0x0E,0x04,0x0F,
  0x07,0x0B,0x0F,0x09,0x0F,0x0F,0x06,0x06,
  0x20,0xF0,0x60,0xA0,0xA0,0x60,0x40,0xE0,
  0xC0,0xA0,0xE0,0x20,0xE0,0xE0,0xC0,0xC0,
  0x18,0x1F,0x0E,0x09,0x09,0x0E,0x04,0x0F,
  0x07,0x0B,0x0F,0x09,0x07,0x07,0x03,0x03,
  0x20,0xF0,0x60,0xA0,0xA0,0x60,0x40,0xE0,
  0xC0,0xA0,0xE0,0x20,0xC0,0xC0,0x80,0x80,
  0x18,0x1F,0x0E,0x09,0x09,0x0E,0x02,0x0F,
  0x0F,0x0B,0x0F,0x0B,0x0F,0x0F,0x04,0x04,
  0x20,0xF0,0x60,0xA0,0xA0,0x60,0x40,0xE0,
  0x80,0xC0,0xC0,0x40,0x80,0x80,0x00,0x00,
  0x1E,0x13,0x0E,0x0D,0x09,0x0E,0x08,0x0F,
  0x0F,0x09,0x0F,0x09,0x07,0x07,0x02,0x02,
  0x20,0xF0,0x60,0xA0,0xA0,0x60,0x40,0xE0,
  0xC0,0xA0,0xE0,0xA0,0xC0,0xC0,0x00,0x00,
  0x0E,0x0F,0x0E,0x09,0x09,0x0E,0x04,0x0F,
  0x3F,0x33,0x3F,0x31,0x1E,0x1E,0x00,0x00,
  0x20,0xE0,0x60,0xA0,0xA0,0x60,0x40,0xF0,
  0xF8,0x88,0x78,0x78,0x30,0x30,0x00,0x00,
  0x08,0x0F,0x0E,0x09,0x09,0x0E,0x24,0x3F,
  0x7F,0x63,0x7C,0x64,0x38,0x38,0x00,0x00,
  0x20,0xE0,0x60,0xA0,0xA0,0x60,0x48,0xF8,
  0xFC,0x8C,0x7C,0x4C,0x38,0x38,0x00,0x00
};

const unsigned char fly_tiles[] = {
  0x00,0x00,0x00,0x00,0x38,0x00,0x6E,0x02,
  0xF7,0x01,0xF7,0x01,0xFF,0x01,0x7B,0x03,
  0x3F,0x07,0x00,0x0E,0x00,0x18,0x00,0xF0,
  0x07,0x87,0x04,0x04,0x00,0x00,0x00,0x00,
  0x00,0x03,0x03,0x0C,0x0D,0x31,0x27,0xC6,
  0xB6,0xF8,0xB6,0xFF,0x26,0xFF,0xFD,0xFF,
  0xBC,0xFC,0x39,0x3D,0x70,0x70,0xC0,0xC0,
  0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xC0,0x3F,0x3F,0xFC,0xC0,0x80,0x00,
  0x00,0x00,0xD8,0xF8,0xD8,0xFC,0xB6,0xFF,
  0x90,0x90,0x20,0x20,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x3F,0x07,0x00,0x1E,0x00,0xF0,0x00,0x80,
  0x07,0x07,0x04,0x04,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xC0,
  0xB0,0xF8,0xBE,0xE7,0x3E,0xF9,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xD8,0xF8,0xD8,0xFC,0xF6,0x0F,
  0xFE,0xFE,0x20,0x20,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char cactus_tiles[] = {
  0x02,0x01,0x02,0x05,0x0E,0x05,0x0A,0x05,
  0x1A,0x15,0x0A,0x05,0x0A,0x07,0x0A,0x05,
  0x80,0xC0,0xA0,0x40,0xA8,0x58,0xA0,0x70,
  0xA0,0x50,0xA0,0x50,0xA8,0x58,0xA0,0x50,
  0x1A,0x15,0x0A,0x05,0x3F,0x3F,0x7F,0x40,
  0x40,0x7F,0x2F,0x30,0x21,0x3E,0x1F,0x1F,
  0xE0,0x50,0xA0,0x50,0xFC,0xFC,0xFE,0x02,
  0x0E,0xF2,0xFC,0x04,0xFC,0x04,0xF8,0xF8
};

const UINT8 player_topleft_data[1] = {1};
const UINT8 player_topright_data[1] = {2};
const UINT8 player_midleft_data[player_max_frames] = {3, 5, 7, 3, 3, 8, 10, 3};
const UINT8 player_midright_data[player_max_frames] = {4, 6, 6, 4, 4, 9, 11, 4};
const UINT8 player_botleft_data[player_max_frames] = {12, 14, 16, 18, 12, 20, 22, 20};
const UINT8 player_botright_data[player_max_frames] = {13, 15, 17, 19, 13, 21, 23, 21};

const UINT8 fly_topleft_data[1] = {24};
const UINT8 fly_topmid_data[fly_max_frames] = {26, 26, 31, 31};
const UINT8 fly_topright_data[fly_max_frames] = {28, 28, 32, 32};
const UINT8 fly_botleft_data[fly_max_frames] = {25, 25, 30, 30};
const UINT8 fly_botmid_data[1] = {27};
const UINT8 fly_botright_data[1] = {29};

const UINT8 cactus_topleft_data[1] = {33};
const UINT8 cactus_topright_data[1] = {34};
const UINT8 cactus_botleft_data[1] = {35};
const UINT8 cactus_botright_data[1] = {36};
