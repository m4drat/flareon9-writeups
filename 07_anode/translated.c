#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s <flag>\n", argv[0]);
    return 1;
  }

  if (strlen(argv[1]) != 44) {
    printf("Flag must be 44 characters long\n");
    return 1;
  }

  unsigned char *flag_ptr = argv[1];
  flag_ptr[29] -= flag_ptr[37] + flag_ptr[23] + flag_ptr[22] + flag_ptr[24] +
                  flag_ptr[26] + flag_ptr[10] + 7;
  flag_ptr[29] &= 255;
  flag_ptr[39] += flag_ptr[34] + flag_ptr[2] + flag_ptr[1] + flag_ptr[43] +
                  flag_ptr[20] + flag_ptr[9] + 79;
  flag_ptr[39] &= 255;
  flag_ptr[19] ^= flag_ptr[26] + flag_ptr[0] + flag_ptr[40] + flag_ptr[37] +
                      flag_ptr[23] + flag_ptr[32] + 255 &
                  255;
  flag_ptr[28] ^= flag_ptr[1] + flag_ptr[23] + flag_ptr[37] + flag_ptr[31] +
                      flag_ptr[43] + flag_ptr[42] + 245 &
                  255;
  flag_ptr[39] += flag_ptr[42] + flag_ptr[10] + flag_ptr[3] + flag_ptr[41] +
                  flag_ptr[14] + flag_ptr[26] + 177;
  flag_ptr[39] &= 255;
  flag_ptr[9] -= flag_ptr[20] + flag_ptr[19] + flag_ptr[22] + flag_ptr[5] +
                 flag_ptr[32] + flag_ptr[35] + 151;
  flag_ptr[9] &= 255;
  flag_ptr[14] -= flag_ptr[4] + flag_ptr[5] + flag_ptr[31] + flag_ptr[15] +
                  flag_ptr[36] + flag_ptr[40] + 67;
  flag_ptr[14] &= 255;
  flag_ptr[33] += flag_ptr[25] + flag_ptr[12] + flag_ptr[14] + flag_ptr[34] +
                  flag_ptr[4] + flag_ptr[36] + 185;
  flag_ptr[33] &= 255;
  flag_ptr[12] -= flag_ptr[21] + flag_ptr[23] + flag_ptr[0] + flag_ptr[32] +
                  flag_ptr[28] + flag_ptr[17] + 252;
  flag_ptr[12] &= 255;
  flag_ptr[43] += flag_ptr[10] + flag_ptr[15] + flag_ptr[28] + flag_ptr[29] +
                  flag_ptr[27] + flag_ptr[26] + 168;
  flag_ptr[43] &= 255;
  flag_ptr[18] ^= flag_ptr[32] + flag_ptr[30] + flag_ptr[26] + flag_ptr[22] +
                      flag_ptr[9] + flag_ptr[33] + 19 &
                  255;
  flag_ptr[8] += flag_ptr[18] + flag_ptr[41] + flag_ptr[1] + flag_ptr[3] +
                 flag_ptr[16] + flag_ptr[43] + 139;
  flag_ptr[8] &= 255;
  flag_ptr[34] += flag_ptr[2] + flag_ptr[22] + flag_ptr[15] + flag_ptr[18] +
                  flag_ptr[7] + flag_ptr[33] + 43;
  flag_ptr[34] &= 255;
  flag_ptr[0] -= flag_ptr[15] + flag_ptr[3] + flag_ptr[29] + flag_ptr[10] +
                 flag_ptr[20] + flag_ptr[39] + 93;
  flag_ptr[0] &= 255;
  flag_ptr[12] += flag_ptr[41] + flag_ptr[21] + flag_ptr[40] + flag_ptr[31] +
                  flag_ptr[17] + flag_ptr[9] + 143;
  flag_ptr[12] &= 255;
  flag_ptr[26] -= flag_ptr[15] + flag_ptr[43] + flag_ptr[11] + flag_ptr[16] +
                  flag_ptr[28] + flag_ptr[30] + 150;
  flag_ptr[26] &= 255;
  flag_ptr[11] += flag_ptr[43] + flag_ptr[37] + flag_ptr[41] + flag_ptr[18] +
                  flag_ptr[29] + flag_ptr[33] + 56;
  flag_ptr[11] &= 255;
  flag_ptr[25] -= flag_ptr[3] + flag_ptr[24] + flag_ptr[18] + flag_ptr[15] +
                  flag_ptr[2] + flag_ptr[12] + 33;
  flag_ptr[25] &= 255;
  flag_ptr[31] -= flag_ptr[14] + flag_ptr[43] + flag_ptr[19] + flag_ptr[36] +
                  flag_ptr[41] + flag_ptr[8] + 106;
  flag_ptr[31] &= 255;
  flag_ptr[31] -= flag_ptr[19] + flag_ptr[4] + flag_ptr[43] + flag_ptr[41] +
                  flag_ptr[36] + flag_ptr[7] + 105;
  flag_ptr[31] &= 255;
  flag_ptr[10] += flag_ptr[15] + flag_ptr[21] + flag_ptr[0] + flag_ptr[42] +
                  flag_ptr[31] + flag_ptr[9] + 61;
  flag_ptr[10] &= 255;
  flag_ptr[10] -= flag_ptr[12] + flag_ptr[16] + flag_ptr[30] + flag_ptr[9] +
                  flag_ptr[34] + flag_ptr[13] + 121;
  flag_ptr[10] &= 255;
  flag_ptr[5] -= flag_ptr[33] + flag_ptr[23] + flag_ptr[15] + flag_ptr[39] +
                 flag_ptr[2] + flag_ptr[31] + 222;
  flag_ptr[5] &= 255;
  flag_ptr[40] ^= flag_ptr[15] + flag_ptr[39] + flag_ptr[14] + flag_ptr[17] +
                      flag_ptr[16] + flag_ptr[9] + 206 &
                  255;
  flag_ptr[16] ^= flag_ptr[31] + flag_ptr[22] + flag_ptr[41] + flag_ptr[14] +
                      flag_ptr[35] + flag_ptr[37] + 74 &
                  255;
  flag_ptr[2] -= flag_ptr[29] + flag_ptr[9] + flag_ptr[11] + flag_ptr[19] +
                 flag_ptr[0] + flag_ptr[27] + 89;
  flag_ptr[2] &= 255;
  flag_ptr[15] -= flag_ptr[28] + flag_ptr[7] + flag_ptr[29] + flag_ptr[13] +
                  flag_ptr[0] + flag_ptr[22] + 189;
  flag_ptr[15] &= 255;
  flag_ptr[24] -= flag_ptr[34] + flag_ptr[12] + flag_ptr[14] + flag_ptr[41] +
                  flag_ptr[21] + flag_ptr[11] + 223;
  flag_ptr[24] &= 255;
  flag_ptr[33] += flag_ptr[4] + flag_ptr[27] + flag_ptr[32] + flag_ptr[43] +
                  flag_ptr[42] + flag_ptr[36] + 209;
  flag_ptr[33] &= 255;
  flag_ptr[19] += flag_ptr[6] + flag_ptr[14] + flag_ptr[35] + flag_ptr[39] +
                  flag_ptr[21] + flag_ptr[42] + 253;
  flag_ptr[19] &= 255;
  flag_ptr[41] -= flag_ptr[27] + flag_ptr[6] + flag_ptr[15] + flag_ptr[42] +
                  flag_ptr[7] + flag_ptr[17] + 162;
  flag_ptr[41] &= 255;
  flag_ptr[16] += flag_ptr[34] + flag_ptr[25] + flag_ptr[24] + flag_ptr[23] +
                  flag_ptr[42] + flag_ptr[14] + 168;
  flag_ptr[16] &= 255;
  flag_ptr[23] ^= flag_ptr[39] + flag_ptr[33] + flag_ptr[27] + flag_ptr[43] +
                      flag_ptr[12] + flag_ptr[2] + 78 &
                  255;
  flag_ptr[6] -= flag_ptr[20] + flag_ptr[41] + flag_ptr[0] + flag_ptr[42] +
                 flag_ptr[12] + flag_ptr[19] + 131;
  flag_ptr[6] &= 255;
  flag_ptr[5] -= flag_ptr[20] + flag_ptr[43] + flag_ptr[9] + flag_ptr[3] +
                 flag_ptr[40] + flag_ptr[25] + 50;
  flag_ptr[5] &= 255;
  flag_ptr[8] += flag_ptr[2] + flag_ptr[14] + flag_ptr[13] + flag_ptr[15] +
                 flag_ptr[7] + flag_ptr[9] + 91;
  flag_ptr[8] &= 255;
  flag_ptr[15] -= flag_ptr[25] + flag_ptr[43] + flag_ptr[8] + flag_ptr[19] +
                  flag_ptr[42] + flag_ptr[36] + 163;
  flag_ptr[15] &= 255;
  flag_ptr[42] ^= flag_ptr[43] + flag_ptr[39] + flag_ptr[36] + flag_ptr[3] +
                      flag_ptr[26] + flag_ptr[23] + 7 &
                  255;
  flag_ptr[20] += flag_ptr[28] + flag_ptr[15] + flag_ptr[21] + flag_ptr[33] +
                  flag_ptr[14] + flag_ptr[9] + 201;
  flag_ptr[20] &= 255;
  flag_ptr[42] += flag_ptr[18] + flag_ptr[37] + flag_ptr[23] + flag_ptr[21] +
                  flag_ptr[41] + flag_ptr[38] + 64;
  flag_ptr[42] &= 255;
  flag_ptr[4] -= flag_ptr[36] + flag_ptr[16] + flag_ptr[6] + flag_ptr[3] +
                 flag_ptr[33] + flag_ptr[23] + 217;
  flag_ptr[4] &= 255;
  flag_ptr[28] += flag_ptr[41] + flag_ptr[9] + flag_ptr[22] + flag_ptr[29] +
                  flag_ptr[18] + flag_ptr[14] + 14;
  flag_ptr[28] &= 255;
  flag_ptr[1] ^= flag_ptr[40] + flag_ptr[42] + flag_ptr[33] + flag_ptr[23] +
                     flag_ptr[7] + flag_ptr[19] + 10 &
                 255;
  flag_ptr[4] ^= flag_ptr[37] + flag_ptr[43] + flag_ptr[15] + flag_ptr[8] +
                     flag_ptr[2] + flag_ptr[10] + 199 &
                 255;
  flag_ptr[21] += flag_ptr[10] + flag_ptr[17] + flag_ptr[34] + flag_ptr[14] +
                  flag_ptr[4] + flag_ptr[43] + 30;
  flag_ptr[21] &= 255;
  flag_ptr[23] -= flag_ptr[30] + flag_ptr[36] + flag_ptr[5] + flag_ptr[7] +
                  flag_ptr[22] + flag_ptr[39] + 221;
  flag_ptr[23] &= 255;
  flag_ptr[35] -= flag_ptr[4] + flag_ptr[29] + flag_ptr[25] + flag_ptr[9] +
                  flag_ptr[6] + flag_ptr[3] + 198;
  flag_ptr[35] &= 255;
  flag_ptr[23] += flag_ptr[17] + flag_ptr[34] + flag_ptr[39] + flag_ptr[3] +
                  flag_ptr[21] + flag_ptr[26] + 251;
  flag_ptr[23] &= 255;
  flag_ptr[38] ^= flag_ptr[25] + flag_ptr[28] + flag_ptr[12] + flag_ptr[23] +
                      flag_ptr[20] + flag_ptr[4] + 220 &
                  255;
  flag_ptr[16] -= flag_ptr[5] + flag_ptr[27] + flag_ptr[21] + flag_ptr[8] +
                  flag_ptr[22] + flag_ptr[28] + 254;
  flag_ptr[16] &= 255;
  flag_ptr[5] += flag_ptr[29] + flag_ptr[23] + flag_ptr[15] + flag_ptr[0] +
                 flag_ptr[14] + flag_ptr[28] + 198;
  flag_ptr[5] &= 255;
  flag_ptr[26] ^= flag_ptr[32] + flag_ptr[0] + flag_ptr[13] + flag_ptr[27] +
                      flag_ptr[43] + flag_ptr[31] + 179 &
                  255;
  flag_ptr[6] ^= flag_ptr[12] + flag_ptr[30] + flag_ptr[10] + flag_ptr[41] +
                     flag_ptr[3] + flag_ptr[37] + 121 &
                 255;
  flag_ptr[40] += flag_ptr[1] + flag_ptr[9] + flag_ptr[18] + flag_ptr[17] +
                  flag_ptr[33] + flag_ptr[39] + 146;
  flag_ptr[40] &= 255;
  flag_ptr[15] += flag_ptr[36] + flag_ptr[13] + flag_ptr[25] + flag_ptr[9] +
                  flag_ptr[0] + flag_ptr[24] + 18;
  flag_ptr[15] &= 255;
  flag_ptr[33] -= flag_ptr[8] + flag_ptr[10] + flag_ptr[30] + flag_ptr[31] +
                  flag_ptr[20] + flag_ptr[42] + 105;
  flag_ptr[33] &= 255;
  flag_ptr[4] ^= flag_ptr[8] + flag_ptr[33] + flag_ptr[19] + flag_ptr[12] +
                     flag_ptr[25] + flag_ptr[15] + 101 &
                 255;
  flag_ptr[38] ^= flag_ptr[39] + flag_ptr[2] + flag_ptr[0] + flag_ptr[31] +
                      flag_ptr[29] + flag_ptr[5] + 160 &
                  255;
  flag_ptr[43] += flag_ptr[40] + flag_ptr[19] + flag_ptr[26] + flag_ptr[4] +
                  flag_ptr[10] + flag_ptr[7] + 56;
  flag_ptr[43] &= 255;
  flag_ptr[34] -= flag_ptr[41] + flag_ptr[14] + flag_ptr[13] + flag_ptr[20] +
                  flag_ptr[17] + flag_ptr[7] + 29;
  flag_ptr[34] &= 255;
  flag_ptr[40] ^= flag_ptr[26] + flag_ptr[25] + flag_ptr[5] + flag_ptr[36] +
                      flag_ptr[7] + flag_ptr[22] + 225 &
                  255;
  flag_ptr[24] ^= flag_ptr[31] + flag_ptr[0] + flag_ptr[27] + flag_ptr[28] +
                      flag_ptr[14] + flag_ptr[34] + 22 &
                  255;
  flag_ptr[25] -= flag_ptr[42] + flag_ptr[24] + flag_ptr[41] + flag_ptr[14] +
                  flag_ptr[36] + flag_ptr[17] + 58;
  flag_ptr[25] &= 255;
  flag_ptr[5] -= flag_ptr[28] + flag_ptr[39] + flag_ptr[25] + flag_ptr[43] +
                 flag_ptr[15] + flag_ptr[7] + 203;
  flag_ptr[5] &= 255;
  flag_ptr[25] += flag_ptr[34] + flag_ptr[28] + flag_ptr[19] + flag_ptr[36] +
                  flag_ptr[0] + flag_ptr[3] + 18;
  flag_ptr[25] &= 255;
  flag_ptr[18] -= flag_ptr[23] + flag_ptr[10] + flag_ptr[2] + flag_ptr[30] +
                  flag_ptr[6] + flag_ptr[17] + 44;
  flag_ptr[18] &= 255;
  flag_ptr[0] ^= flag_ptr[12] + flag_ptr[30] + flag_ptr[6] + flag_ptr[17] +
                     flag_ptr[4] + flag_ptr[20] + 92 &
                 255;
  flag_ptr[30] ^= flag_ptr[34] + flag_ptr[4] + flag_ptr[2] + flag_ptr[13] +
                      flag_ptr[12] + flag_ptr[35] + 110 &
                  255;
  flag_ptr[20] += flag_ptr[42] + flag_ptr[21] + flag_ptr[32] + flag_ptr[30] +
                  flag_ptr[33] + flag_ptr[39] + 230;
  flag_ptr[20] &= 255;
  flag_ptr[6] ^= flag_ptr[12] + flag_ptr[33] + flag_ptr[15] + flag_ptr[35] +
                     flag_ptr[11] + flag_ptr[2] + 164 &
                 255;
  flag_ptr[40] -= flag_ptr[22] + flag_ptr[0] + flag_ptr[28] + flag_ptr[17] +
                  flag_ptr[31] + flag_ptr[11] + 8;
  flag_ptr[40] &= 255;
  flag_ptr[41] ^= flag_ptr[28] + flag_ptr[0] + flag_ptr[23] + flag_ptr[12] +
                      flag_ptr[37] + flag_ptr[29] + 140 &
                  255;
  flag_ptr[12] += flag_ptr[23] + flag_ptr[43] + flag_ptr[17] + flag_ptr[19] +
                  flag_ptr[3] + flag_ptr[30] + 82;
  flag_ptr[12] &= 255;
  flag_ptr[41] ^= flag_ptr[17] + flag_ptr[25] + flag_ptr[9] + flag_ptr[42] +
                      flag_ptr[36] + flag_ptr[10] + 170 &
                  255;
  flag_ptr[28] ^= flag_ptr[41] + flag_ptr[26] + flag_ptr[27] + flag_ptr[37] +
                      flag_ptr[21] + flag_ptr[6] + 153 &
                  255;
  flag_ptr[11] ^= flag_ptr[8] + flag_ptr[33] + flag_ptr[17] + flag_ptr[27] +
                      flag_ptr[2] + flag_ptr[28] + 196 &
                  255;
  flag_ptr[3] += flag_ptr[6] + flag_ptr[26] + flag_ptr[32] + flag_ptr[22] +
                 flag_ptr[39] + flag_ptr[25] + 119;
  flag_ptr[3] &= 255;
  flag_ptr[11] += flag_ptr[42] + flag_ptr[27] + flag_ptr[40] + flag_ptr[0] +
                  flag_ptr[6] + flag_ptr[26] + 177;
  flag_ptr[11] &= 255;
  flag_ptr[12] ^= flag_ptr[19] + flag_ptr[16] + flag_ptr[28] + flag_ptr[14] +
                      flag_ptr[40] + flag_ptr[33] + 158 &
                  255;
  flag_ptr[21] -= flag_ptr[22] + flag_ptr[2] + flag_ptr[33] + flag_ptr[28] +
                  flag_ptr[10] + flag_ptr[31] + 98;
  flag_ptr[21] &= 255;
  flag_ptr[3] -= flag_ptr[23] + flag_ptr[36] + flag_ptr[41] + flag_ptr[17] +
                 flag_ptr[18] + flag_ptr[22] + 172;
  flag_ptr[3] &= 255;
  flag_ptr[6] ^= flag_ptr[8] + flag_ptr[23] + flag_ptr[28] + flag_ptr[17] +
                     flag_ptr[32] + flag_ptr[12] + 66 &
                 255;
  flag_ptr[20] -= flag_ptr[6] + flag_ptr[41] + flag_ptr[42] + flag_ptr[28] +
                  flag_ptr[30] + flag_ptr[12] + 226;
  flag_ptr[20] &= 255;
  flag_ptr[28] += flag_ptr[36] + flag_ptr[26] + flag_ptr[17] + flag_ptr[5] +
                  flag_ptr[1] + flag_ptr[13] + 245;
  flag_ptr[28] &= 255;
  flag_ptr[42] += flag_ptr[29] + flag_ptr[14] + flag_ptr[31] + flag_ptr[22] +
                  flag_ptr[36] + flag_ptr[33] + 60;
  flag_ptr[42] &= 255;
  flag_ptr[27] ^= flag_ptr[39] + flag_ptr[14] + flag_ptr[33] + flag_ptr[22] +
                      flag_ptr[6] + flag_ptr[28] + 28 &
                  255;
  flag_ptr[18] += flag_ptr[26] + flag_ptr[6] + flag_ptr[37] + flag_ptr[36] +
                  flag_ptr[33] + flag_ptr[5] + 177;
  flag_ptr[18] &= 255;
  flag_ptr[10] += flag_ptr[13] + flag_ptr[27] + flag_ptr[23] + flag_ptr[38] +
                  flag_ptr[2] + flag_ptr[18] + 18;
  flag_ptr[10] &= 255;
  flag_ptr[18] -= flag_ptr[21] + flag_ptr[5] + flag_ptr[40] + flag_ptr[34] +
                  flag_ptr[43] + flag_ptr[41] + 87;
  flag_ptr[18] &= 255;
  flag_ptr[27] -= flag_ptr[0] + flag_ptr[6] + flag_ptr[21] + flag_ptr[29] +
                  flag_ptr[38] + flag_ptr[1] + 32;
  flag_ptr[27] &= 255;
  flag_ptr[36] += flag_ptr[9] + flag_ptr[3] + flag_ptr[31] + flag_ptr[41] +
                  flag_ptr[8] + flag_ptr[22] + 42;
  flag_ptr[36] &= 255;
  flag_ptr[3] ^= flag_ptr[14] + flag_ptr[26] + flag_ptr[33] + flag_ptr[17] +
                     flag_ptr[32] + flag_ptr[1] + 230 &
                 255;
  flag_ptr[21] ^= flag_ptr[2] + flag_ptr[3] + flag_ptr[12] + flag_ptr[16] +
                      flag_ptr[6] + flag_ptr[15] + 100 &
                  255;
  flag_ptr[5] ^= flag_ptr[17] + flag_ptr[31] + flag_ptr[28] + flag_ptr[9] +
                     flag_ptr[0] + flag_ptr[34] + 142 &
                 255;
  flag_ptr[43] -= flag_ptr[18] + flag_ptr[14] + flag_ptr[4] + flag_ptr[20] +
                  flag_ptr[40] + flag_ptr[27] + 107;
  flag_ptr[43] &= 255;
  flag_ptr[17] -= flag_ptr[34] + flag_ptr[1] + flag_ptr[14] + flag_ptr[19] +
                  flag_ptr[29] + flag_ptr[18] + 164;
  flag_ptr[17] &= 255;
  flag_ptr[33] -= flag_ptr[43] + flag_ptr[24] + flag_ptr[16] + flag_ptr[7] +
                  flag_ptr[17] + flag_ptr[6] + 156;
  flag_ptr[33] &= 255;
  flag_ptr[13] += flag_ptr[31] + flag_ptr[43] + flag_ptr[26] + flag_ptr[41] +
                  flag_ptr[24] + flag_ptr[42] + 128;
  flag_ptr[13] &= 255;
  flag_ptr[19] ^= flag_ptr[16] + flag_ptr[10] + flag_ptr[3] + flag_ptr[5] +
                      flag_ptr[39] + flag_ptr[0] + 156 &
                  255;
  flag_ptr[43] -= flag_ptr[4] + flag_ptr[20] + flag_ptr[36] + flag_ptr[25] +
                  flag_ptr[22] + flag_ptr[7] + 174;
  flag_ptr[43] &= 255;
  flag_ptr[39] += flag_ptr[28] + flag_ptr[8] + flag_ptr[36] + flag_ptr[42] +
                  flag_ptr[11] + flag_ptr[13] + 68;
  flag_ptr[39] &= 255;
  flag_ptr[34] ^= flag_ptr[35] + flag_ptr[4] + flag_ptr[22] + flag_ptr[41] +
                      flag_ptr[36] + flag_ptr[40] + 159 &
                  255;
  flag_ptr[22] ^= flag_ptr[6] + flag_ptr[10] + flag_ptr[5] + flag_ptr[40] +
                      flag_ptr[17] + flag_ptr[28] + 173 &
                  255;
  flag_ptr[28] -= flag_ptr[22] + flag_ptr[23] + flag_ptr[10] + flag_ptr[20] +
                  flag_ptr[11] + flag_ptr[0] + 191;
  flag_ptr[28] &= 255;
  flag_ptr[17] += flag_ptr[29] + flag_ptr[43] + flag_ptr[1] + flag_ptr[8] +
                  flag_ptr[32] + flag_ptr[35] + 126;
  flag_ptr[17] &= 255;
  flag_ptr[41] ^= flag_ptr[31] + flag_ptr[36] + flag_ptr[2] + flag_ptr[42] +
                      flag_ptr[43] + flag_ptr[4] + 72 &
                  255;
  flag_ptr[5] ^= flag_ptr[36] + flag_ptr[41] + flag_ptr[6] + flag_ptr[26] +
                     flag_ptr[18] + flag_ptr[4] + 29 &
                 255;
  flag_ptr[25] += flag_ptr[41] + flag_ptr[17] + flag_ptr[14] + flag_ptr[10] +
                  flag_ptr[35] + flag_ptr[2] + 41;
  flag_ptr[25] &= 255;
  flag_ptr[6] -= flag_ptr[33] + flag_ptr[11] + flag_ptr[20] + flag_ptr[15] +
                 flag_ptr[1] + flag_ptr[31] + 62;
  flag_ptr[6] &= 255;
  flag_ptr[29] ^= flag_ptr[14] + flag_ptr[1] + flag_ptr[18] + flag_ptr[20] +
                      flag_ptr[17] + flag_ptr[34] + 192 &
                  255;
  flag_ptr[12] ^= flag_ptr[42] + flag_ptr[25] + flag_ptr[19] + flag_ptr[7] +
                      flag_ptr[16] + flag_ptr[43] + 245 &
                  255;
  flag_ptr[6] ^= flag_ptr[36] + flag_ptr[13] + flag_ptr[4] + flag_ptr[38] +
                     flag_ptr[16] + flag_ptr[14] + 53 &
                 255;
  flag_ptr[27] ^= flag_ptr[29] + flag_ptr[21] + flag_ptr[26] + flag_ptr[33] +
                      flag_ptr[10] + flag_ptr[31] + 111 &
                  255;
  flag_ptr[25] -= flag_ptr[37] + flag_ptr[40] + flag_ptr[17] + flag_ptr[21] +
                  flag_ptr[14] + flag_ptr[33] + 52;
  flag_ptr[25] &= 255;
  flag_ptr[24] -= flag_ptr[36] + flag_ptr[39] + flag_ptr[27] + flag_ptr[8] +
                  flag_ptr[14] + flag_ptr[34] + 181;
  flag_ptr[24] &= 255;
  flag_ptr[7] ^= flag_ptr[5] + flag_ptr[37] + flag_ptr[18] + flag_ptr[12] +
                     flag_ptr[27] + flag_ptr[21] + 181 &
                 255;
  flag_ptr[28] -= flag_ptr[7] + flag_ptr[12] + flag_ptr[18] + flag_ptr[30] +
                  flag_ptr[27] + flag_ptr[10] + 24;
  flag_ptr[28] &= 255;
  flag_ptr[40] ^= flag_ptr[30] + flag_ptr[32] + flag_ptr[11] + flag_ptr[24] +
                      flag_ptr[2] + flag_ptr[7] + 205 &
                  255;
  flag_ptr[9] += flag_ptr[14] + flag_ptr[38] + flag_ptr[21] + flag_ptr[30] +
                 flag_ptr[8] + flag_ptr[40] + 179;
  flag_ptr[9] &= 255;
  flag_ptr[9] += flag_ptr[13] + flag_ptr[1] + flag_ptr[5] + flag_ptr[8] +
                 flag_ptr[11] + flag_ptr[32] + 52;
  flag_ptr[9] &= 255;
  flag_ptr[11] -= flag_ptr[24] + flag_ptr[13] + flag_ptr[3] + flag_ptr[6] +
                  flag_ptr[27] + flag_ptr[7] + 206;
  flag_ptr[11] &= 255;
  flag_ptr[4] -= flag_ptr[2] + flag_ptr[31] + flag_ptr[11] + flag_ptr[16] +
                 flag_ptr[8] + flag_ptr[23] + 245;
  flag_ptr[4] &= 255;
  flag_ptr[9] += flag_ptr[2] + flag_ptr[29] + flag_ptr[42] + flag_ptr[19] +
                 flag_ptr[31] + flag_ptr[40] + 131;
  flag_ptr[9] &= 255;
  flag_ptr[38] ^= flag_ptr[20] + flag_ptr[9] + flag_ptr[32] + flag_ptr[2] +
                      flag_ptr[17] + flag_ptr[3] + 160 &
                  255;
  flag_ptr[17] ^= flag_ptr[24] + flag_ptr[7] + flag_ptr[35] + flag_ptr[31] +
                      flag_ptr[28] + flag_ptr[29] + 64 &
                  255;
  flag_ptr[39] ^= flag_ptr[12] + flag_ptr[16] + flag_ptr[35] + flag_ptr[0] +
                      flag_ptr[41] + flag_ptr[2] + 229 &
                  255;
  flag_ptr[42] -= flag_ptr[26] + flag_ptr[43] + flag_ptr[0] + flag_ptr[21] +
                  flag_ptr[4] + flag_ptr[20] + 173;
  flag_ptr[42] &= 255;
  flag_ptr[1] += flag_ptr[37] + flag_ptr[20] + flag_ptr[11] + flag_ptr[15] +
                 flag_ptr[8] + flag_ptr[27] + 26;
  flag_ptr[1] &= 255;
  flag_ptr[35] += flag_ptr[18] + flag_ptr[17] + flag_ptr[30] + flag_ptr[15] +
                  flag_ptr[21] + flag_ptr[6] + 215;
  flag_ptr[35] &= 255;
  flag_ptr[16] ^= flag_ptr[32] + flag_ptr[39] + flag_ptr[13] + flag_ptr[21] +
                      flag_ptr[20] + flag_ptr[2] + 28 &
                  255;
  flag_ptr[4] -= flag_ptr[28] + flag_ptr[38] + flag_ptr[37] + flag_ptr[5] +
                 flag_ptr[32] + flag_ptr[13] + 47;
  flag_ptr[4] &= 255;
  flag_ptr[32] += flag_ptr[29] + flag_ptr[21] + flag_ptr[6] + flag_ptr[4] +
                  flag_ptr[39] + flag_ptr[42] + 251;
  flag_ptr[32] &= 255;
  flag_ptr[23] ^= flag_ptr[33] + flag_ptr[16] + flag_ptr[31] + flag_ptr[26] +
                      flag_ptr[15] + flag_ptr[1] + 3 &
                  255;
  flag_ptr[41] += flag_ptr[13] + flag_ptr[30] + flag_ptr[12] + flag_ptr[1] +
                  flag_ptr[22] + flag_ptr[16] + 211;
  flag_ptr[41] &= 255;
  flag_ptr[31] ^= flag_ptr[8] + flag_ptr[33] + flag_ptr[38] + flag_ptr[40] +
                      flag_ptr[13] + flag_ptr[16] + 112 &
                  255;
  flag_ptr[4] += flag_ptr[35] + flag_ptr[24] + flag_ptr[25] + flag_ptr[36] +
                 flag_ptr[29] + flag_ptr[20] + 234;
  flag_ptr[4] &= 255;
  flag_ptr[10] ^= flag_ptr[4] + flag_ptr[2] + flag_ptr[18] + flag_ptr[38] +
                      flag_ptr[22] + flag_ptr[27] + 40 &
                  255;
  flag_ptr[27] -= flag_ptr[13] + flag_ptr[36] + flag_ptr[10] + flag_ptr[40] +
                  flag_ptr[35] + flag_ptr[42] + 138;
  flag_ptr[27] &= 255;
  flag_ptr[7] ^= flag_ptr[23] + flag_ptr[6] + flag_ptr[21] + flag_ptr[43] +
                     flag_ptr[26] + flag_ptr[22] + 145 &
                 255;
  flag_ptr[18] ^= flag_ptr[1] + flag_ptr[7] + flag_ptr[23] + flag_ptr[2] +
                      flag_ptr[37] + flag_ptr[4] + 152 &
                  255;
  flag_ptr[13] -= flag_ptr[33] + flag_ptr[28] + flag_ptr[19] + flag_ptr[27] +
                  flag_ptr[6] + flag_ptr[12] + 240;
  flag_ptr[13] &= 255;
  flag_ptr[41] ^= flag_ptr[30] + flag_ptr[13] + flag_ptr[21] + flag_ptr[0] +
                      flag_ptr[24] + flag_ptr[1] + 247 &
                  255;
  flag_ptr[14] -= flag_ptr[30] + flag_ptr[5] + flag_ptr[35] + flag_ptr[41] +
                  flag_ptr[3] + flag_ptr[17] + 119;
  flag_ptr[14] &= 255;
  flag_ptr[30] -= flag_ptr[6] + flag_ptr[14] + flag_ptr[28] + flag_ptr[29] +
                  flag_ptr[24] + flag_ptr[15] + 108;
  flag_ptr[30] &= 255;
  flag_ptr[37] -= flag_ptr[24] + flag_ptr[39] + flag_ptr[15] + flag_ptr[10] +
                  flag_ptr[13] + flag_ptr[35] + 225;
  flag_ptr[37] &= 255;
  flag_ptr[3] -= flag_ptr[38] + flag_ptr[37] + flag_ptr[22] + flag_ptr[10] +
                 flag_ptr[8] + flag_ptr[25] + 181;
  flag_ptr[3] &= 255;
  flag_ptr[31] -= flag_ptr[35] + flag_ptr[37] + flag_ptr[5] + flag_ptr[42] +
                  flag_ptr[33] + flag_ptr[41] + 16;
  flag_ptr[31] &= 255;
  flag_ptr[12] += flag_ptr[14] + flag_ptr[31] + flag_ptr[17] + flag_ptr[5] +
                  flag_ptr[22] + flag_ptr[11] + 29;
  flag_ptr[12] &= 255;
  flag_ptr[24] -= flag_ptr[9] + flag_ptr[4] + flag_ptr[28] + flag_ptr[23] +
                  flag_ptr[3] + flag_ptr[14] + 217;
  flag_ptr[24] &= 255;
  flag_ptr[30] ^= flag_ptr[42] + flag_ptr[9] + flag_ptr[2] + flag_ptr[36] +
                      flag_ptr[12] + flag_ptr[16] + 241 &
                  255;
  flag_ptr[27] -= flag_ptr[15] + flag_ptr[14] + flag_ptr[1] + flag_ptr[28] +
                  flag_ptr[18] + flag_ptr[13] + 139;
  flag_ptr[27] &= 255;
  flag_ptr[32] += flag_ptr[7] + flag_ptr[37] + flag_ptr[29] + flag_ptr[16] +
                  flag_ptr[3] + flag_ptr[25] + 62;
  flag_ptr[32] &= 255;
  flag_ptr[40] += flag_ptr[11] + flag_ptr[28] + flag_ptr[42] + flag_ptr[20] +
                  flag_ptr[27] + flag_ptr[13] + 142;
  flag_ptr[40] &= 255;
  flag_ptr[20] += flag_ptr[30] + flag_ptr[8] + flag_ptr[11] + flag_ptr[34] +
                  flag_ptr[21] + flag_ptr[0] + 118;
  flag_ptr[20] &= 255;
  flag_ptr[41] += flag_ptr[1] + flag_ptr[4] + flag_ptr[10] + flag_ptr[16] +
                  flag_ptr[13] + flag_ptr[11] + 6;
  flag_ptr[41] &= 255;
  flag_ptr[36] += flag_ptr[10] + flag_ptr[24] + flag_ptr[34] + flag_ptr[28] +
                  flag_ptr[0] + flag_ptr[3] + 178;
  flag_ptr[36] &= 255;
  flag_ptr[26] -= flag_ptr[25] + flag_ptr[2] + flag_ptr[16] + flag_ptr[19] +
                  flag_ptr[23] + flag_ptr[32] + 119;
  flag_ptr[26] &= 255;
  flag_ptr[37] ^= flag_ptr[2] + flag_ptr[27] + flag_ptr[7] + flag_ptr[20] +
                      flag_ptr[22] + flag_ptr[32] + 130 &
                  255;
  flag_ptr[22] -= flag_ptr[28] + flag_ptr[19] + flag_ptr[39] + flag_ptr[20] +
                  flag_ptr[14] + flag_ptr[4] + 88;
  flag_ptr[22] &= 255;
  flag_ptr[23] -= flag_ptr[14] + flag_ptr[37] + flag_ptr[42] + flag_ptr[11] +
                  flag_ptr[28] + flag_ptr[34] + 104;
  flag_ptr[23] &= 255;
  flag_ptr[36] ^= flag_ptr[40] + flag_ptr[22] + flag_ptr[17] + flag_ptr[27] +
                      flag_ptr[0] + flag_ptr[39] + 200 &
                  255;
  flag_ptr[4] ^= flag_ptr[42] + flag_ptr[18] + flag_ptr[12] + flag_ptr[5] +
                     flag_ptr[16] + flag_ptr[37] + 98 &
                 255;
  flag_ptr[23] ^= flag_ptr[27] + flag_ptr[35] + flag_ptr[43] + flag_ptr[19] +
                      flag_ptr[12] + flag_ptr[20] + 111 &
                  255;
  flag_ptr[30] ^= flag_ptr[18] + flag_ptr[9] + flag_ptr[37] + flag_ptr[25] +
                      flag_ptr[32] + flag_ptr[35] + 0 &
                  255;
  flag_ptr[5] ^= flag_ptr[35] + flag_ptr[9] + flag_ptr[30] + flag_ptr[8] +
                     flag_ptr[27] + flag_ptr[26] + 113 &
                 255;
  flag_ptr[27] += flag_ptr[18] + flag_ptr[23] + flag_ptr[22] + flag_ptr[8] +
                  flag_ptr[2] + flag_ptr[9] + 98;
  flag_ptr[27] &= 255;
  flag_ptr[4] ^= flag_ptr[24] + flag_ptr[17] + flag_ptr[36] + flag_ptr[13] +
                     flag_ptr[10] + flag_ptr[41] + 197 &
                 255;
  flag_ptr[23] += flag_ptr[13] + flag_ptr[24] + flag_ptr[18] + flag_ptr[36] +
                  flag_ptr[34] + flag_ptr[14] + 232;
  flag_ptr[23] &= 255;
  flag_ptr[11] += flag_ptr[17] + flag_ptr[6] + flag_ptr[7] + flag_ptr[32] +
                  flag_ptr[3] + flag_ptr[33] + 162;
  flag_ptr[11] &= 255;
  flag_ptr[18] += flag_ptr[4] + flag_ptr[9] + flag_ptr[3] + flag_ptr[12] +
                  flag_ptr[26] + flag_ptr[1] + 145;
  flag_ptr[18] &= 255;
  flag_ptr[25] -= flag_ptr[9] + flag_ptr[26] + flag_ptr[41] + flag_ptr[43] +
                  flag_ptr[5] + flag_ptr[20] + 3;
  flag_ptr[25] &= 255;
  flag_ptr[29] -= flag_ptr[5] + flag_ptr[7] + flag_ptr[4] + flag_ptr[40] +
                  flag_ptr[0] + flag_ptr[39] + 41;
  flag_ptr[29] &= 255;
  flag_ptr[19] += flag_ptr[38] + flag_ptr[8] + flag_ptr[11] + flag_ptr[35] +
                  flag_ptr[36] + flag_ptr[29] + 241;
  flag_ptr[19] &= 255;
  flag_ptr[43] += flag_ptr[8] + flag_ptr[39] + flag_ptr[2] + flag_ptr[40] +
                  flag_ptr[37] + flag_ptr[10] + 152;
  flag_ptr[43] &= 255;
  flag_ptr[28] += flag_ptr[19] + flag_ptr[37] + flag_ptr[21] + flag_ptr[20] +
                  flag_ptr[14] + flag_ptr[23] + 72;
  flag_ptr[28] &= 255;
  flag_ptr[29] += flag_ptr[10] + flag_ptr[28] + flag_ptr[19] + flag_ptr[38] +
                  flag_ptr[1] + flag_ptr[31] + 224;
  flag_ptr[29] &= 255;
  flag_ptr[31] -= flag_ptr[14] + flag_ptr[29] + flag_ptr[42] + flag_ptr[40] +
                  flag_ptr[30] + flag_ptr[33] + 202;
  flag_ptr[31] &= 255;
  flag_ptr[12] -= flag_ptr[30] + flag_ptr[29] + flag_ptr[10] + flag_ptr[25] +
                  flag_ptr[33] + flag_ptr[23] + 180;
  flag_ptr[12] &= 255;
  flag_ptr[43] += flag_ptr[32] + flag_ptr[27] + flag_ptr[4] + flag_ptr[25] +
                  flag_ptr[8] + flag_ptr[11] + 80;
  flag_ptr[43] &= 255;
  flag_ptr[5] += flag_ptr[4] + flag_ptr[7] + flag_ptr[28] + flag_ptr[43] +
                 flag_ptr[12] + flag_ptr[26] + 54;
  flag_ptr[5] &= 255;
  flag_ptr[15] -= flag_ptr[17] + flag_ptr[29] + flag_ptr[20] + flag_ptr[9] +
                  flag_ptr[0] + flag_ptr[43] + 229;
  flag_ptr[15] &= 255;
  flag_ptr[23] ^= flag_ptr[15] + flag_ptr[41] + flag_ptr[29] + flag_ptr[12] +
                      flag_ptr[39] + flag_ptr[24] + 173 &
                  255;
  flag_ptr[2] -= flag_ptr[36] + flag_ptr[1] + flag_ptr[26] + flag_ptr[30] +
                 flag_ptr[6] + flag_ptr[13] + 234;
  flag_ptr[2] &= 255;
  flag_ptr[29] ^= flag_ptr[24] + flag_ptr[9] + flag_ptr[33] + flag_ptr[36] +
                      flag_ptr[28] + flag_ptr[17] + 123 &
                  255;
  flag_ptr[9] ^= flag_ptr[2] + flag_ptr[13] + flag_ptr[15] + flag_ptr[42] +
                     flag_ptr[39] + flag_ptr[4] + 52 &
                 255;
  flag_ptr[0] ^= flag_ptr[17] + flag_ptr[32] + flag_ptr[8] + flag_ptr[37] +
                     flag_ptr[14] + flag_ptr[1] + 132 &
                 255;
  flag_ptr[33] ^= flag_ptr[4] + flag_ptr[43] + flag_ptr[36] + flag_ptr[16] +
                      flag_ptr[41] + flag_ptr[18] + 146 &
                  255;
  flag_ptr[33] ^= flag_ptr[8] + flag_ptr[26] + flag_ptr[23] + flag_ptr[0] +
                      flag_ptr[30] + flag_ptr[9] + 207 &
                  255;
  flag_ptr[1] ^= flag_ptr[12] + flag_ptr[17] + flag_ptr[21] + flag_ptr[38] +
                     flag_ptr[34] + flag_ptr[39] + 199 &
                 255;
  flag_ptr[3] ^= flag_ptr[34] + flag_ptr[14] + flag_ptr[33] + flag_ptr[28] +
                     flag_ptr[15] + flag_ptr[36] + 3 &
                 255;
  flag_ptr[15] ^= flag_ptr[32] + flag_ptr[26] + flag_ptr[30] + flag_ptr[28] +
                      flag_ptr[40] + flag_ptr[38] + 179 &
                  255;
  flag_ptr[13] ^= flag_ptr[37] + flag_ptr[21] + flag_ptr[22] + flag_ptr[23] +
                      flag_ptr[31] + flag_ptr[26] + 247 &
                  255;
  flag_ptr[1] -= flag_ptr[14] + flag_ptr[10] + flag_ptr[9] + flag_ptr[33] +
                 flag_ptr[41] + flag_ptr[15] + 240;
  flag_ptr[1] &= 255;
  flag_ptr[37] -= flag_ptr[18] + flag_ptr[14] + flag_ptr[30] + flag_ptr[10] +
                  flag_ptr[22] + flag_ptr[5] + 175;
  flag_ptr[37] &= 255;
  flag_ptr[15] -= flag_ptr[26] + flag_ptr[41] + flag_ptr[19] + flag_ptr[24] +
                  flag_ptr[21] + flag_ptr[20] + 77;
  flag_ptr[15] &= 255;
  flag_ptr[43] ^= flag_ptr[41] + flag_ptr[14] + flag_ptr[37] + flag_ptr[38] +
                      flag_ptr[15] + flag_ptr[10] + 217 &
                  255;
  flag_ptr[20] += flag_ptr[34] + flag_ptr[11] + flag_ptr[21] + flag_ptr[0] +
                  flag_ptr[43] + flag_ptr[13] + 213;
  flag_ptr[20] &= 255;
  flag_ptr[19] += flag_ptr[26] + flag_ptr[27] + flag_ptr[29] + flag_ptr[32] +
                  flag_ptr[14] + flag_ptr[21] + 34;
  flag_ptr[19] &= 255;
  flag_ptr[16] ^= flag_ptr[41] + flag_ptr[35] + flag_ptr[32] + flag_ptr[27] +
                      flag_ptr[42] + flag_ptr[43] + 137 &
                  255;
  flag_ptr[5] += flag_ptr[8] + flag_ptr[16] + flag_ptr[38] + flag_ptr[37] +
                 flag_ptr[1] + flag_ptr[18] + 148;
  flag_ptr[5] &= 255;
  flag_ptr[24] += flag_ptr[29] + flag_ptr[40] + flag_ptr[37] + flag_ptr[33] +
                  flag_ptr[28] + flag_ptr[43] + 128;
  flag_ptr[24] &= 255;
  flag_ptr[14] ^= flag_ptr[38] + flag_ptr[43] + flag_ptr[18] + flag_ptr[22] +
                      flag_ptr[17] + flag_ptr[35] + 133 &
                  255;
  flag_ptr[3] -= flag_ptr[34] + flag_ptr[43] + flag_ptr[8] + flag_ptr[1] +
                 flag_ptr[14] + flag_ptr[30] + 74;
  flag_ptr[3] &= 255;
  flag_ptr[4] ^= flag_ptr[22] + flag_ptr[2] + flag_ptr[17] + flag_ptr[1] +
                     flag_ptr[9] + flag_ptr[40] + 26 &
                 255;
  flag_ptr[43] += flag_ptr[28] + flag_ptr[32] + flag_ptr[27] + flag_ptr[18] +
                  flag_ptr[16] + flag_ptr[31] + 15;
  flag_ptr[43] &= 255;
  flag_ptr[12] ^= flag_ptr[3] + flag_ptr[22] + flag_ptr[38] + flag_ptr[29] +
                      flag_ptr[26] + flag_ptr[4] + 213 &
                  255;
  flag_ptr[8] -= flag_ptr[41] + flag_ptr[23] + flag_ptr[11] + flag_ptr[17] +
                 flag_ptr[5] + flag_ptr[39] + 125;
  flag_ptr[8] &= 255;
  flag_ptr[29] -= flag_ptr[19] + flag_ptr[32] + flag_ptr[6] + flag_ptr[40] +
                  flag_ptr[14] + flag_ptr[8] + 162;
  flag_ptr[29] &= 255;
  flag_ptr[41] ^= flag_ptr[2] + flag_ptr[1] + flag_ptr[19] + flag_ptr[17] +
                      flag_ptr[15] + flag_ptr[3] + 86 &
                  255;
  flag_ptr[1] += flag_ptr[32] + flag_ptr[4] + flag_ptr[0] + flag_ptr[5] +
                 flag_ptr[17] + flag_ptr[2] + 159;
  flag_ptr[1] &= 255;
  flag_ptr[5] ^= flag_ptr[20] + flag_ptr[31] + flag_ptr[40] + flag_ptr[10] +
                     flag_ptr[39] + flag_ptr[16] + 196 &
                 255;
  flag_ptr[24] += flag_ptr[5] + flag_ptr[42] + flag_ptr[28] + flag_ptr[18] +
                  flag_ptr[13] + flag_ptr[43] + 10;
  flag_ptr[24] &= 255;
  flag_ptr[22] -= flag_ptr[21] + flag_ptr[32] + flag_ptr[36] + flag_ptr[31] +
                  flag_ptr[33] + flag_ptr[12] + 209;
  flag_ptr[22] &= 255;
  flag_ptr[34] -= flag_ptr[43] + flag_ptr[0] + flag_ptr[24] + flag_ptr[6] +
                  flag_ptr[36] + flag_ptr[41] + 156;
  flag_ptr[34] &= 255;
  flag_ptr[13] -= flag_ptr[7] + flag_ptr[18] + flag_ptr[41] + flag_ptr[2] +
                  flag_ptr[31] + flag_ptr[3] + 214;
  flag_ptr[13] &= 255;
  flag_ptr[25] += flag_ptr[7] + flag_ptr[21] + flag_ptr[12] + flag_ptr[24] +
                  flag_ptr[35] + flag_ptr[42] + 5;
  flag_ptr[25] &= 255;
  flag_ptr[11] ^= flag_ptr[18] + flag_ptr[37] + flag_ptr[23] + flag_ptr[5] +
                      flag_ptr[3] + flag_ptr[7] + 53 &
                  255;
  flag_ptr[13] -= flag_ptr[8] + flag_ptr[21] + flag_ptr[24] + flag_ptr[23] +
                  flag_ptr[3] + flag_ptr[27] + 201;
  flag_ptr[13] &= 255;
  flag_ptr[18] += flag_ptr[31] + flag_ptr[6] + flag_ptr[17] + flag_ptr[12] +
                  flag_ptr[11] + flag_ptr[19] + 220;
  flag_ptr[18] &= 255;
  flag_ptr[20] += flag_ptr[34] + flag_ptr[10] + flag_ptr[12] + flag_ptr[41] +
                  flag_ptr[18] + flag_ptr[43] + 147;
  flag_ptr[20] &= 255;
  flag_ptr[33] ^= flag_ptr[35] + flag_ptr[30] + flag_ptr[36] + flag_ptr[41] +
                      flag_ptr[3] + flag_ptr[28] + 231 &
                  255;
  flag_ptr[9] += flag_ptr[27] + flag_ptr[39] + flag_ptr[31] + flag_ptr[43] +
                 flag_ptr[22] + flag_ptr[28] + 229;
  flag_ptr[9] &= 255;
  flag_ptr[1] -= flag_ptr[27] + flag_ptr[4] + flag_ptr[7] + flag_ptr[21] +
                 flag_ptr[32] + flag_ptr[31] + 165;
  flag_ptr[1] &= 255;
  flag_ptr[24] ^= flag_ptr[15] + flag_ptr[38] + flag_ptr[27] + flag_ptr[23] +
                      flag_ptr[21] + flag_ptr[1] + 244 &
                  255;
  flag_ptr[36] ^= flag_ptr[12] + flag_ptr[21] + flag_ptr[34] + flag_ptr[29] +
                      flag_ptr[28] + flag_ptr[7] + 141 &
                  255;
  flag_ptr[35] += flag_ptr[32] + flag_ptr[29] + flag_ptr[42] + flag_ptr[30] +
                  flag_ptr[43] + flag_ptr[33] + 155;
  flag_ptr[35] &= 255;
  flag_ptr[18] -= flag_ptr[41] + flag_ptr[12] + flag_ptr[21] + flag_ptr[27] +
                  flag_ptr[24] + flag_ptr[6] + 193;
  flag_ptr[18] &= 255;
  flag_ptr[26] -= flag_ptr[8] + flag_ptr[3] + flag_ptr[27] + flag_ptr[28] +
                  flag_ptr[6] + flag_ptr[34] + 7;
  flag_ptr[26] &= 255;
  flag_ptr[13] -= flag_ptr[22] + flag_ptr[4] + flag_ptr[26] + flag_ptr[5] +
                  flag_ptr[10] + flag_ptr[7] + 76;
  flag_ptr[13] &= 255;
  flag_ptr[25] ^= flag_ptr[26] + flag_ptr[32] + flag_ptr[12] + flag_ptr[27] +
                      flag_ptr[28] + flag_ptr[7] + 178 &
                  255;
  flag_ptr[9] += flag_ptr[18] + flag_ptr[4] + flag_ptr[7] + flag_ptr[13] +
                 flag_ptr[29] + flag_ptr[26] + 117;
  flag_ptr[9] &= 255;
  flag_ptr[14] ^= flag_ptr[0] + flag_ptr[7] + flag_ptr[13] + flag_ptr[39] +
                      flag_ptr[21] + flag_ptr[22] + 251 &
                  255;
  flag_ptr[6] += flag_ptr[43] + flag_ptr[35] + flag_ptr[2] + flag_ptr[27] +
                 flag_ptr[21] + flag_ptr[30] + 212;
  flag_ptr[6] &= 255;
  flag_ptr[5] += flag_ptr[26] + flag_ptr[22] + flag_ptr[39] + flag_ptr[0] +
                 flag_ptr[36] + flag_ptr[4] + 1;
  flag_ptr[5] &= 255;
  flag_ptr[23] ^= flag_ptr[11] + flag_ptr[15] + flag_ptr[34] + flag_ptr[8] +
                      flag_ptr[36] + flag_ptr[16] + 62 &
                  255;
  flag_ptr[9] += flag_ptr[4] + flag_ptr[43] + flag_ptr[39] + flag_ptr[16] +
                 flag_ptr[15] + flag_ptr[22] + 183;
  flag_ptr[9] &= 255;
  flag_ptr[8] += flag_ptr[12] + flag_ptr[16] + flag_ptr[14] + flag_ptr[4] +
                 flag_ptr[34] + flag_ptr[23] + 244;
  flag_ptr[8] &= 255;
  flag_ptr[7] -= flag_ptr[14] + flag_ptr[33] + flag_ptr[30] + flag_ptr[6] +
                 flag_ptr[31] + flag_ptr[16] + 185;
  flag_ptr[7] &= 255;
  flag_ptr[36] ^= flag_ptr[42] + flag_ptr[6] + flag_ptr[11] + flag_ptr[40] +
                      flag_ptr[33] + flag_ptr[7] + 207 &
                  255;
  flag_ptr[11] += flag_ptr[15] + flag_ptr[43] + flag_ptr[24] + flag_ptr[34] +
                  flag_ptr[16] + flag_ptr[9] + 166;
  flag_ptr[11] &= 255;
  flag_ptr[33] += flag_ptr[12] + flag_ptr[21] + flag_ptr[4] + flag_ptr[37] +
                  flag_ptr[7] + flag_ptr[9] + 124;
  flag_ptr[33] &= 255;
  flag_ptr[12] ^= flag_ptr[25] + flag_ptr[5] + flag_ptr[15] + flag_ptr[11] +
                      flag_ptr[1] + flag_ptr[9] + 8 &
                  255;
  flag_ptr[21] += flag_ptr[32] + flag_ptr[24] + flag_ptr[34] + flag_ptr[28] +
                  flag_ptr[15] + flag_ptr[0] + 63;
  flag_ptr[21] &= 255;
  flag_ptr[37] -= flag_ptr[39] + flag_ptr[43] + flag_ptr[28] + flag_ptr[17] +
                  flag_ptr[24] + flag_ptr[7] + 3;
  flag_ptr[37] &= 255;
  flag_ptr[28] += flag_ptr[0] + flag_ptr[23] + flag_ptr[14] + flag_ptr[16] +
                  flag_ptr[20] + flag_ptr[25] + 31;
  flag_ptr[28] &= 255;
  flag_ptr[12] ^= flag_ptr[9] + flag_ptr[23] + flag_ptr[34] + flag_ptr[14] +
                      flag_ptr[13] + flag_ptr[10] + 147 &
                  255;
  flag_ptr[9] += flag_ptr[1] + flag_ptr[10] + flag_ptr[23] + flag_ptr[22] +
                 flag_ptr[37] + flag_ptr[21] + 129;
  flag_ptr[9] &= 255;
  flag_ptr[5] -= flag_ptr[29] + flag_ptr[22] + flag_ptr[2] + flag_ptr[30] +
                 flag_ptr[19] + flag_ptr[7] + 181;
  flag_ptr[5] &= 255;
  flag_ptr[38] += flag_ptr[37] + flag_ptr[13] + flag_ptr[8] + flag_ptr[23] +
                  flag_ptr[22] + flag_ptr[27] + 86;
  flag_ptr[38] &= 255;
  flag_ptr[34] ^= flag_ptr[42] + flag_ptr[18] + flag_ptr[9] + flag_ptr[32] +
                      flag_ptr[3] + flag_ptr[11] + 182 &
                  255;
  flag_ptr[29] -= flag_ptr[38] + flag_ptr[14] + flag_ptr[34] + flag_ptr[18] +
                  flag_ptr[43] + flag_ptr[35] + 135;
  flag_ptr[29] &= 255;
  flag_ptr[0] ^= flag_ptr[11] + flag_ptr[37] + flag_ptr[33] + flag_ptr[36] +
                     flag_ptr[38] + flag_ptr[3] + 123 &
                 255;
  flag_ptr[4] -= flag_ptr[37] + flag_ptr[2] + flag_ptr[27] + flag_ptr[13] +
                 flag_ptr[21] + flag_ptr[35] + 194;
  flag_ptr[4] &= 255;
  flag_ptr[27] ^= flag_ptr[17] + flag_ptr[13] + flag_ptr[28] + flag_ptr[12] +
                      flag_ptr[24] + flag_ptr[3] + 116 &
                  255;
  flag_ptr[26] -= flag_ptr[4] + flag_ptr[11] + flag_ptr[31] + flag_ptr[32] +
                  flag_ptr[28] + flag_ptr[16] + 165;
  flag_ptr[26] &= 255;
  flag_ptr[21] ^= flag_ptr[20] + flag_ptr[38] + flag_ptr[14] + flag_ptr[15] +
                      flag_ptr[1] + flag_ptr[13] + 81 &
                  255;
  flag_ptr[5] += flag_ptr[11] + flag_ptr[20] + flag_ptr[24] + flag_ptr[37] +
                 flag_ptr[33] + flag_ptr[38] + 113;
  flag_ptr[5] &= 255;
  flag_ptr[1] -= flag_ptr[32] + flag_ptr[31] + flag_ptr[34] + flag_ptr[16] +
                 flag_ptr[28] + flag_ptr[35] + 141;
  flag_ptr[1] &= 255;
  flag_ptr[40] += flag_ptr[22] + flag_ptr[4] + flag_ptr[28] + flag_ptr[3] +
                  flag_ptr[18] + flag_ptr[23] + 3;
  flag_ptr[40] &= 255;
  flag_ptr[38] ^= flag_ptr[17] + flag_ptr[28] + flag_ptr[4] + flag_ptr[18] +
                      flag_ptr[11] + flag_ptr[3] + 133 &
                  255;
  flag_ptr[22] += flag_ptr[29] + flag_ptr[42] + flag_ptr[40] + flag_ptr[38] +
                  flag_ptr[8] + flag_ptr[6] + 131;
  flag_ptr[22] &= 255;
  flag_ptr[5] -= flag_ptr[19] + flag_ptr[9] + flag_ptr[32] + flag_ptr[7] +
                 flag_ptr[18] + flag_ptr[24] + 241;
  flag_ptr[5] &= 255;
  flag_ptr[15] ^= flag_ptr[2] + flag_ptr[43] + flag_ptr[3] + flag_ptr[5] +
                      flag_ptr[0] + flag_ptr[35] + 10 &
                  255;
  flag_ptr[40] -= flag_ptr[27] + flag_ptr[21] + flag_ptr[22] + flag_ptr[28] +
                  flag_ptr[11] + flag_ptr[15] + 134;
  flag_ptr[40] &= 255;
  flag_ptr[39] -= flag_ptr[23] + flag_ptr[17] + flag_ptr[21] + flag_ptr[36] +
                  flag_ptr[20] + flag_ptr[34] + 12;
  flag_ptr[39] &= 255;
  flag_ptr[16] += flag_ptr[38] + flag_ptr[6] + flag_ptr[21] + flag_ptr[34] +
                  flag_ptr[27] + flag_ptr[10] + 35;
  flag_ptr[16] &= 255;
  flag_ptr[38] -= flag_ptr[0] + flag_ptr[1] + flag_ptr[27] + flag_ptr[36] +
                  flag_ptr[31] + flag_ptr[17] + 247;
  flag_ptr[38] &= 255;
  flag_ptr[35] += flag_ptr[5] + flag_ptr[0] + flag_ptr[14] + flag_ptr[2] +
                  flag_ptr[20] + flag_ptr[6] + 241;
  flag_ptr[35] &= 255;
  flag_ptr[30] -= flag_ptr[35] + flag_ptr[40] + flag_ptr[33] + flag_ptr[4] +
                  flag_ptr[18] + flag_ptr[29] + 149;
  flag_ptr[30] &= 255;
  flag_ptr[30] ^= flag_ptr[43] + flag_ptr[42] + flag_ptr[19] + flag_ptr[3] +
                      flag_ptr[11] + flag_ptr[23] + 221 &
                  255;
  flag_ptr[40] -= flag_ptr[8] + flag_ptr[26] + flag_ptr[31] + flag_ptr[38] +
                  flag_ptr[32] + flag_ptr[37] + 187;
  flag_ptr[40] &= 255;
  flag_ptr[10] += flag_ptr[39] + flag_ptr[37] + flag_ptr[32] + flag_ptr[9] +
                  flag_ptr[29] + flag_ptr[0] + 138;
  flag_ptr[10] &= 255;
  flag_ptr[42] ^= flag_ptr[20] + flag_ptr[38] + flag_ptr[37] + flag_ptr[12] +
                      flag_ptr[35] + flag_ptr[41] + 155 &
                  255;
  flag_ptr[0] -= flag_ptr[43] + flag_ptr[4] + flag_ptr[5] + flag_ptr[29] +
                 flag_ptr[6] + flag_ptr[24] + 208;
  flag_ptr[0] &= 255;
  flag_ptr[35] ^= flag_ptr[2] + flag_ptr[18] + flag_ptr[4] + flag_ptr[1] +
                      flag_ptr[24] + flag_ptr[21] + 103 &
                  255;
  flag_ptr[9] -= flag_ptr[27] + flag_ptr[26] + flag_ptr[37] + flag_ptr[12] +
                 flag_ptr[31] + flag_ptr[30] + 208;
  flag_ptr[9] &= 255;
  flag_ptr[21] += flag_ptr[23] + flag_ptr[34] + flag_ptr[14] + flag_ptr[30] +
                  flag_ptr[39] + flag_ptr[35] + 241;
  flag_ptr[21] &= 255;
  flag_ptr[1] += flag_ptr[5] + flag_ptr[17] + flag_ptr[20] + flag_ptr[43] +
                 flag_ptr[39] + flag_ptr[25] + 81;
  flag_ptr[1] &= 255;
  flag_ptr[13] ^= flag_ptr[27] + flag_ptr[19] + flag_ptr[31] + flag_ptr[38] +
                      flag_ptr[43] + flag_ptr[23] + 33 &
                  255;
  flag_ptr[30] ^= flag_ptr[40] + flag_ptr[36] + flag_ptr[43] + flag_ptr[6] +
                      flag_ptr[11] + flag_ptr[2] + 57 &
                  255;
  flag_ptr[10] -= flag_ptr[37] + flag_ptr[36] + flag_ptr[26] + flag_ptr[9] +
                  flag_ptr[24] + flag_ptr[7] + 86;
  flag_ptr[10] &= 255;
  flag_ptr[40] ^= flag_ptr[33] + flag_ptr[23] + flag_ptr[24] + flag_ptr[41] +
                      flag_ptr[31] + flag_ptr[27] + 58 &
                  255;
  flag_ptr[0] ^= flag_ptr[32] + flag_ptr[20] + flag_ptr[30] + flag_ptr[10] +
                     flag_ptr[37] + flag_ptr[35] + 204 &
                 255;
  flag_ptr[7] += flag_ptr[3] + flag_ptr[0] + flag_ptr[14] + flag_ptr[31] +
                 flag_ptr[40] + flag_ptr[5] + 226;
  flag_ptr[7] &= 255;
  flag_ptr[16] -= flag_ptr[35] + flag_ptr[11] + flag_ptr[36] + flag_ptr[29] +
                  flag_ptr[10] + flag_ptr[26] + 70;
  flag_ptr[16] &= 255;
  flag_ptr[35] ^= flag_ptr[14] + flag_ptr[24] + flag_ptr[26] + flag_ptr[32] +
                      flag_ptr[7] + flag_ptr[19] + 139 &
                  255;
  flag_ptr[11] -= flag_ptr[3] + flag_ptr[20] + flag_ptr[30] + flag_ptr[18] +
                  flag_ptr[1] + flag_ptr[17] + 21;
  flag_ptr[11] &= 255;
  flag_ptr[43] += flag_ptr[13] + flag_ptr[27] + flag_ptr[15] + flag_ptr[12] +
                  flag_ptr[6] + flag_ptr[5] + 69;
  flag_ptr[43] &= 255;
  flag_ptr[42] += flag_ptr[16] + flag_ptr[29] + flag_ptr[3] + flag_ptr[32] +
                  flag_ptr[4] + flag_ptr[5] + 217;
  flag_ptr[42] &= 255;
  flag_ptr[8] += flag_ptr[14] + flag_ptr[40] + flag_ptr[10] + flag_ptr[1] +
                 flag_ptr[28] + flag_ptr[6] + 110;
  flag_ptr[8] &= 255;
  flag_ptr[32] ^= flag_ptr[0] + flag_ptr[40] + flag_ptr[41] + flag_ptr[24] +
                      flag_ptr[22] + flag_ptr[3] + 232 &
                  255;
  flag_ptr[20] += flag_ptr[36] + flag_ptr[42] + flag_ptr[12] + flag_ptr[24] +
                  flag_ptr[10] + flag_ptr[14] + 70;
  flag_ptr[20] &= 255;
  flag_ptr[2] ^= flag_ptr[15] + flag_ptr[40] + flag_ptr[14] + flag_ptr[19] +
                     flag_ptr[8] + flag_ptr[25] + 156 &
                 255;
  flag_ptr[18] ^= flag_ptr[41] + flag_ptr[15] + flag_ptr[32] + flag_ptr[16] +
                      flag_ptr[26] + flag_ptr[23] + 205 &
                  255;
  flag_ptr[35] -= flag_ptr[39] + flag_ptr[12] + flag_ptr[36] + flag_ptr[2] +
                  flag_ptr[9] + flag_ptr[30] + 167;
  flag_ptr[35] &= 255;
  flag_ptr[21] -= flag_ptr[5] + flag_ptr[9] + flag_ptr[19] + flag_ptr[7] +
                  flag_ptr[26] + flag_ptr[18] + 114;
  flag_ptr[21] &= 255;
  flag_ptr[23] -= flag_ptr[24] + flag_ptr[43] + flag_ptr[30] + flag_ptr[37] +
                  flag_ptr[6] + flag_ptr[36] + 58;
  flag_ptr[23] &= 255;
  flag_ptr[40] ^= flag_ptr[35] + flag_ptr[22] + flag_ptr[17] + flag_ptr[2] +
                      flag_ptr[20] + flag_ptr[18] + 80 &
                  255;
  flag_ptr[34] += flag_ptr[33] + flag_ptr[2] + flag_ptr[32] + flag_ptr[6] +
                  flag_ptr[3] + flag_ptr[21] + 216;
  flag_ptr[34] &= 255;
  flag_ptr[30] += flag_ptr[17] + flag_ptr[24] + flag_ptr[8] + flag_ptr[9] +
                  flag_ptr[16] + flag_ptr[18] + 104;
  flag_ptr[30] &= 255;
  flag_ptr[18] ^= flag_ptr[30] + flag_ptr[23] + flag_ptr[36] + flag_ptr[40] +
                      flag_ptr[10] + flag_ptr[33] + 192 &
                  255;
  flag_ptr[6] ^= flag_ptr[35] + flag_ptr[37] + flag_ptr[7] + flag_ptr[31] +
                     flag_ptr[29] + flag_ptr[15] + 217 &
                 255;
  flag_ptr[18] -= flag_ptr[25] + flag_ptr[39] + flag_ptr[0] + flag_ptr[35] +
                  flag_ptr[42] + flag_ptr[6] + 84;
  flag_ptr[18] &= 255;
  flag_ptr[25] ^= flag_ptr[26] + flag_ptr[5] + flag_ptr[0] + flag_ptr[31] +
                      flag_ptr[6] + flag_ptr[39] + 207 &
                  255;
  flag_ptr[13] ^= flag_ptr[20] + flag_ptr[26] + flag_ptr[37] + flag_ptr[9] +
                      flag_ptr[29] + flag_ptr[16] + 195 &
                  255;
  flag_ptr[24] -= flag_ptr[37] + flag_ptr[42] + flag_ptr[7] + flag_ptr[5] +
                  flag_ptr[22] + flag_ptr[11] + 177;
  flag_ptr[24] &= 255;
  flag_ptr[18] += flag_ptr[12] + flag_ptr[0] + flag_ptr[23] + flag_ptr[38] +
                  flag_ptr[37] + flag_ptr[24] + 223;
  flag_ptr[18] &= 255;
  flag_ptr[41] ^= flag_ptr[10] + flag_ptr[17] + flag_ptr[0] + flag_ptr[1] +
                      flag_ptr[40] + flag_ptr[5] + 80 &
                  255;
  flag_ptr[32] -= flag_ptr[8] + flag_ptr[19] + flag_ptr[43] + flag_ptr[0] +
                  flag_ptr[2] + flag_ptr[1] + 120;
  flag_ptr[32] &= 255;
  flag_ptr[10] -= flag_ptr[32] + flag_ptr[1] + flag_ptr[20] + flag_ptr[30] +
                  flag_ptr[23] + flag_ptr[9] + 115;
  flag_ptr[10] &= 255;
  flag_ptr[14] -= flag_ptr[28] + flag_ptr[12] + flag_ptr[36] + flag_ptr[39] +
                  flag_ptr[37] + flag_ptr[40] + 87;
  flag_ptr[14] &= 255;
  flag_ptr[26] += flag_ptr[8] + flag_ptr[12] + flag_ptr[33] + flag_ptr[39] +
                  flag_ptr[19] + flag_ptr[29] + 210;
  flag_ptr[26] &= 255;
  flag_ptr[16] -= flag_ptr[32] + flag_ptr[4] + flag_ptr[31] + flag_ptr[8] +
                  flag_ptr[29] + flag_ptr[14] + 218;
  flag_ptr[16] &= 255;
  flag_ptr[25] += flag_ptr[6] + flag_ptr[4] + flag_ptr[7] + flag_ptr[3] +
                  flag_ptr[26] + flag_ptr[12] + 131;
  flag_ptr[25] &= 255;
  flag_ptr[14] ^= flag_ptr[32] + flag_ptr[41] + flag_ptr[35] + flag_ptr[40] +
                      flag_ptr[9] + flag_ptr[22] + 63 &
                  255;
  flag_ptr[8] ^= flag_ptr[1] + flag_ptr[12] + flag_ptr[11] + flag_ptr[17] +
                     flag_ptr[37] + flag_ptr[2] + 55 &
                 255;
  flag_ptr[39] -= flag_ptr[19] + flag_ptr[17] + flag_ptr[33] + flag_ptr[22] +
                  flag_ptr[31] + flag_ptr[10] + 166;
  flag_ptr[39] &= 255;
  flag_ptr[43] ^= flag_ptr[20] + flag_ptr[34] + flag_ptr[21] + flag_ptr[6] +
                      flag_ptr[17] + flag_ptr[16] + 92 &
                  255;
  flag_ptr[4] ^= flag_ptr[22] + flag_ptr[25] + flag_ptr[28] + flag_ptr[6] +
                     flag_ptr[7] + flag_ptr[24] + 23 &
                 255;
  flag_ptr[28] ^= flag_ptr[5] + flag_ptr[19] + flag_ptr[41] + flag_ptr[23] +
                      flag_ptr[34] + flag_ptr[32] + 227 &
                  255;
  flag_ptr[19] += flag_ptr[31] + flag_ptr[26] + flag_ptr[18] + flag_ptr[27] +
                  flag_ptr[22] + flag_ptr[5] + 222;
  flag_ptr[19] &= 255;
  flag_ptr[3] ^= flag_ptr[1] + flag_ptr[38] + flag_ptr[15] + flag_ptr[35] +
                     flag_ptr[25] + flag_ptr[23] + 225 &
                 255;
  flag_ptr[43] += flag_ptr[40] + flag_ptr[23] + flag_ptr[21] + flag_ptr[26] +
                  flag_ptr[6] + flag_ptr[33] + 76;
  flag_ptr[43] &= 255;
  flag_ptr[22] += flag_ptr[37] + flag_ptr[10] + flag_ptr[38] + flag_ptr[39] +
                  flag_ptr[40] + flag_ptr[23] + 205;
  flag_ptr[22] &= 255;
  flag_ptr[14] ^= flag_ptr[27] + flag_ptr[4] + flag_ptr[33] + flag_ptr[22] +
                      flag_ptr[43] + flag_ptr[5] + 82 &
                  255;
  flag_ptr[32] += flag_ptr[38] + flag_ptr[28] + flag_ptr[42] + flag_ptr[1] +
                  flag_ptr[35] + flag_ptr[17] + 235;
  flag_ptr[32] &= 255;
  flag_ptr[37] += flag_ptr[29] + flag_ptr[35] + flag_ptr[20] + flag_ptr[22] +
                  flag_ptr[43] + flag_ptr[32] + 2;
  flag_ptr[37] &= 255;
  flag_ptr[10] -= flag_ptr[32] + flag_ptr[39] + flag_ptr[7] + flag_ptr[21] +
                  flag_ptr[30] + flag_ptr[1] + 90;
  flag_ptr[10] &= 255;
  flag_ptr[17] ^= flag_ptr[21] + flag_ptr[31] + flag_ptr[9] + flag_ptr[10] +
                      flag_ptr[1] + flag_ptr[18] + 179 &
                  255;
  flag_ptr[14] -= flag_ptr[3] + flag_ptr[12] + flag_ptr[22] + flag_ptr[19] +
                  flag_ptr[35] + flag_ptr[38] + 115;
  flag_ptr[14] &= 255;
  flag_ptr[33] ^= flag_ptr[27] + flag_ptr[25] + flag_ptr[4] + flag_ptr[20] +
                      flag_ptr[16] + flag_ptr[26] + 206 &
                  255;
  flag_ptr[13] -= flag_ptr[26] + flag_ptr[37] + flag_ptr[30] + flag_ptr[27] +
                  flag_ptr[22] + flag_ptr[32] + 167;
  flag_ptr[13] &= 255;
  flag_ptr[31] ^= flag_ptr[38] + flag_ptr[0] + flag_ptr[11] + flag_ptr[29] +
                      flag_ptr[4] + flag_ptr[42] + 220 &
                  255;
  flag_ptr[18] ^= flag_ptr[2] + flag_ptr[41] + flag_ptr[31] + flag_ptr[4] +
                      flag_ptr[6] + flag_ptr[13] + 157 &
                  255;
  flag_ptr[27] -= flag_ptr[16] + flag_ptr[1] + flag_ptr[25] + flag_ptr[34] +
                  flag_ptr[21] + flag_ptr[30] + 43;
  flag_ptr[27] &= 255;
  flag_ptr[27] += flag_ptr[13] + flag_ptr[14] + flag_ptr[35] + flag_ptr[37] +
                  flag_ptr[23] + flag_ptr[31] + 185;
  flag_ptr[27] &= 255;
  flag_ptr[23] += flag_ptr[38] + flag_ptr[34] + flag_ptr[9] + flag_ptr[36] +
                  flag_ptr[1] + flag_ptr[3] + 112;
  flag_ptr[23] &= 255;
  flag_ptr[11] ^= flag_ptr[25] + flag_ptr[18] + flag_ptr[38] + flag_ptr[35] +
                      flag_ptr[39] + flag_ptr[34] + 134 &
                  255;
  flag_ptr[30] ^= flag_ptr[14] + flag_ptr[19] + flag_ptr[24] + flag_ptr[22] +
                      flag_ptr[6] + flag_ptr[10] + 80 &
                  255;
  flag_ptr[43] ^= flag_ptr[31] + flag_ptr[10] + flag_ptr[36] + flag_ptr[24] +
                      flag_ptr[9] + flag_ptr[27] + 11 &
                  255;
  flag_ptr[3] ^= flag_ptr[18] + flag_ptr[9] + flag_ptr[2] + flag_ptr[35] +
                     flag_ptr[34] + flag_ptr[30] + 185 &
                 255;
  flag_ptr[27] -= flag_ptr[17] + flag_ptr[28] + flag_ptr[29] + flag_ptr[2] +
                  flag_ptr[38] + flag_ptr[9] + 9;
  flag_ptr[27] &= 255;
  flag_ptr[17] -= flag_ptr[20] + flag_ptr[31] + flag_ptr[1] + flag_ptr[37] +
                  flag_ptr[32] + flag_ptr[38] + 221;
  flag_ptr[17] &= 255;
  flag_ptr[32] += flag_ptr[10] + flag_ptr[26] + flag_ptr[4] + flag_ptr[7] +
                  flag_ptr[43] + flag_ptr[2] + 145;
  flag_ptr[32] &= 255;
  flag_ptr[33] += flag_ptr[34] + flag_ptr[4] + flag_ptr[21] + flag_ptr[12] +
                  flag_ptr[8] + flag_ptr[14] + 197;
  flag_ptr[33] &= 255;
  flag_ptr[26] ^= flag_ptr[18] + flag_ptr[21] + flag_ptr[8] + flag_ptr[28] +
                      flag_ptr[12] + flag_ptr[15] + 98 &
                  255;
  flag_ptr[11] += flag_ptr[29] + flag_ptr[21] + flag_ptr[41] + flag_ptr[30] +
                  flag_ptr[14] + flag_ptr[23] + 20;
  flag_ptr[11] &= 255;
  flag_ptr[9] += flag_ptr[26] + flag_ptr[20] + flag_ptr[29] + flag_ptr[25] +
                 flag_ptr[6] + flag_ptr[12] + 183;
  flag_ptr[9] &= 255;
  flag_ptr[17] += flag_ptr[23] + flag_ptr[10] + flag_ptr[35] + flag_ptr[3] +
                  flag_ptr[19] + flag_ptr[22] + 140;
  flag_ptr[17] &= 255;
  flag_ptr[1] += flag_ptr[36] + flag_ptr[10] + flag_ptr[37] + flag_ptr[29] +
                 flag_ptr[30] + flag_ptr[12] + 2;
  flag_ptr[1] &= 255;
  flag_ptr[22] += flag_ptr[39] + flag_ptr[27] + flag_ptr[19] + flag_ptr[9] +
                  flag_ptr[7] + flag_ptr[1] + 84;
  flag_ptr[22] &= 255;
  flag_ptr[28] += flag_ptr[16] + flag_ptr[25] + flag_ptr[40] + flag_ptr[23] +
                  flag_ptr[0] + flag_ptr[24] + 198;
  flag_ptr[28] &= 255;
  flag_ptr[21] ^= flag_ptr[12] + flag_ptr[43] + flag_ptr[41] + flag_ptr[37] +
                      flag_ptr[11] + flag_ptr[26] + 19 &
                  255;
  flag_ptr[14] -= flag_ptr[30] + flag_ptr[33] + flag_ptr[8] + flag_ptr[1] +
                  flag_ptr[10] + flag_ptr[26] + 203;
  flag_ptr[14] &= 255;
  flag_ptr[25] += flag_ptr[12] + flag_ptr[27] + flag_ptr[43] + flag_ptr[10] +
                  flag_ptr[36] + flag_ptr[24] + 15;
  flag_ptr[25] &= 255;
  flag_ptr[38] -= flag_ptr[25] + flag_ptr[32] + flag_ptr[36] + flag_ptr[37] +
                  flag_ptr[26] + flag_ptr[35] + 147;
  flag_ptr[38] &= 255;
  flag_ptr[34] += flag_ptr[42] + flag_ptr[35] + flag_ptr[11] + flag_ptr[29] +
                  flag_ptr[22] + flag_ptr[20] + 223;
  flag_ptr[34] &= 255;
  flag_ptr[40] -= flag_ptr[42] + flag_ptr[17] + flag_ptr[38] + flag_ptr[14] +
                  flag_ptr[41] + flag_ptr[30] + 197;
  flag_ptr[40] &= 255;
  flag_ptr[0] ^= flag_ptr[41] + flag_ptr[16] + flag_ptr[15] + flag_ptr[39] +
                     flag_ptr[18] + flag_ptr[9] + 175 &
                 255;
  flag_ptr[33] ^= flag_ptr[40] + flag_ptr[20] + flag_ptr[19] + flag_ptr[16] +
                      flag_ptr[5] + flag_ptr[37] + 240 &
                  255;
  flag_ptr[3] ^= flag_ptr[28] + flag_ptr[41] + flag_ptr[27] + flag_ptr[1] +
                     flag_ptr[15] + flag_ptr[26] + 116 &
                 255;
  flag_ptr[41] -= flag_ptr[42] + flag_ptr[29] + flag_ptr[35] + flag_ptr[11] +
                  flag_ptr[6] + flag_ptr[34] + 83;
  flag_ptr[41] &= 255;
  flag_ptr[12] -= flag_ptr[4] + flag_ptr[24] + flag_ptr[1] + flag_ptr[18] +
                  flag_ptr[40] + flag_ptr[33] + 48;
  flag_ptr[12] &= 255;
  flag_ptr[7] += flag_ptr[1] + flag_ptr[32] + flag_ptr[35] + flag_ptr[21] +
                 flag_ptr[23] + flag_ptr[4] + 89;
  flag_ptr[7] &= 255;
  flag_ptr[40] += flag_ptr[16] + flag_ptr[24] + flag_ptr[12] + flag_ptr[5] +
                  flag_ptr[26] + flag_ptr[38] + 53;
  flag_ptr[40] &= 255;
  flag_ptr[13] += flag_ptr[12] + flag_ptr[41] + flag_ptr[29] + flag_ptr[27] +
                  flag_ptr[7] + flag_ptr[5] + 91;
  flag_ptr[13] &= 255;
  flag_ptr[5] += flag_ptr[30] + flag_ptr[23] + flag_ptr[6] + flag_ptr[24] +
                 flag_ptr[15] + flag_ptr[18] + 38;
  flag_ptr[5] &= 255;
  flag_ptr[16] += flag_ptr[42] + flag_ptr[29] + flag_ptr[25] + flag_ptr[0] +
                  flag_ptr[12] + flag_ptr[26] + 92;
  flag_ptr[16] &= 255;
  flag_ptr[12] += flag_ptr[7] + flag_ptr[31] + flag_ptr[37] + flag_ptr[14] +
                  flag_ptr[29] + flag_ptr[9] + 180;
  flag_ptr[12] &= 255;
  flag_ptr[17] -= flag_ptr[11] + flag_ptr[32] + flag_ptr[14] + flag_ptr[16] +
                  flag_ptr[28] + flag_ptr[9] + 167;
  flag_ptr[17] &= 255;
  flag_ptr[33] += flag_ptr[16] + flag_ptr[29] + flag_ptr[3] + flag_ptr[37] +
                  flag_ptr[30] + flag_ptr[41] + 204;
  flag_ptr[33] &= 255;
  flag_ptr[18] ^= flag_ptr[9] + flag_ptr[21] + flag_ptr[4] + flag_ptr[2] +
                      flag_ptr[42] + flag_ptr[5] + 103 &
                  255;
  flag_ptr[15] ^= flag_ptr[42] + flag_ptr[21] + flag_ptr[12] + flag_ptr[34] +
                      flag_ptr[26] + flag_ptr[22] + 30 &
                  255;
  flag_ptr[4] ^= flag_ptr[16] + flag_ptr[43] + flag_ptr[41] + flag_ptr[8] +
                     flag_ptr[3] + flag_ptr[37] + 224 &
                 255;
  flag_ptr[2] += flag_ptr[26] + flag_ptr[41] + flag_ptr[35] + flag_ptr[1] +
                 flag_ptr[18] + flag_ptr[34] + 75;
  flag_ptr[2] &= 255;
  flag_ptr[34] += flag_ptr[32] + flag_ptr[5] + flag_ptr[20] + flag_ptr[17] +
                  flag_ptr[15] + flag_ptr[19] + 25;
  flag_ptr[34] &= 255;
  flag_ptr[35] += flag_ptr[6] + flag_ptr[1] + flag_ptr[37] + flag_ptr[15] +
                  flag_ptr[40] + flag_ptr[25] + 133;
  flag_ptr[35] &= 255;
  flag_ptr[3] ^= flag_ptr[35] + flag_ptr[2] + flag_ptr[26] + flag_ptr[24] +
                     flag_ptr[17] + flag_ptr[14] + 66 &
                 255;
  flag_ptr[24] -= flag_ptr[22] + flag_ptr[38] + flag_ptr[33] + flag_ptr[36] +
                  flag_ptr[15] + flag_ptr[43] + 57;
  flag_ptr[24] &= 255;
  flag_ptr[2] ^= flag_ptr[32] + flag_ptr[25] + flag_ptr[29] + flag_ptr[23] +
                     flag_ptr[11] + flag_ptr[7] + 58 &
                 255;
  flag_ptr[10] += flag_ptr[5] + flag_ptr[31] + flag_ptr[18] + flag_ptr[9] +
                  flag_ptr[24] + flag_ptr[27] + 246;
  flag_ptr[10] &= 255;
  flag_ptr[6] += flag_ptr[43] + flag_ptr[36] + flag_ptr[42] + flag_ptr[4] +
                 flag_ptr[19] + flag_ptr[24] + 91;
  flag_ptr[6] &= 255;
  flag_ptr[37] ^= flag_ptr[39] + flag_ptr[32] + flag_ptr[40] + flag_ptr[5] +
                      flag_ptr[41] + flag_ptr[10] + 146 &
                  255;
  flag_ptr[33] -= flag_ptr[12] + flag_ptr[5] + flag_ptr[42] + flag_ptr[2] +
                  flag_ptr[21] + flag_ptr[15] + 201;
  flag_ptr[33] &= 255;
  flag_ptr[15] ^= flag_ptr[12] + flag_ptr[27] + flag_ptr[32] + flag_ptr[35] +
                      flag_ptr[40] + flag_ptr[0] + 212 &
                  255;
  flag_ptr[20] -= flag_ptr[40] + flag_ptr[10] + flag_ptr[19] + flag_ptr[24] +
                  flag_ptr[0] + flag_ptr[11] + 147;
  flag_ptr[20] &= 255;
  flag_ptr[25] -= flag_ptr[33] + flag_ptr[26] + flag_ptr[2] + flag_ptr[29] +
                  flag_ptr[17] + flag_ptr[4] + 52;
  flag_ptr[25] &= 255;
  flag_ptr[42] += flag_ptr[43] + flag_ptr[24] + flag_ptr[7] + flag_ptr[35] +
                  flag_ptr[30] + flag_ptr[3] + 1;
  flag_ptr[42] &= 255;
  flag_ptr[36] -= flag_ptr[7] + flag_ptr[21] + flag_ptr[15] + flag_ptr[29] +
                  flag_ptr[31] + flag_ptr[2] + 130;
  flag_ptr[36] &= 255;
  flag_ptr[11] += flag_ptr[2] + flag_ptr[6] + flag_ptr[43] + flag_ptr[25] +
                  flag_ptr[35] + flag_ptr[26] + 210;
  flag_ptr[11] &= 255;
  flag_ptr[34] -= flag_ptr[33] + flag_ptr[41] + flag_ptr[11] + flag_ptr[15] +
                  flag_ptr[32] + flag_ptr[31] + 254;
  flag_ptr[34] &= 255;
  flag_ptr[8] ^= flag_ptr[12] + flag_ptr[10] + flag_ptr[3] + flag_ptr[2] +
                     flag_ptr[34] + flag_ptr[31] + 203 &
                 255;
  flag_ptr[12] ^= flag_ptr[7] + flag_ptr[38] + flag_ptr[20] + flag_ptr[21] +
                      flag_ptr[1] + flag_ptr[36] + 136 &
                  255;
  flag_ptr[33] += flag_ptr[34] + flag_ptr[30] + flag_ptr[39] + flag_ptr[37] +
                  flag_ptr[13] + flag_ptr[4] + 182;
  flag_ptr[33] &= 255;
  flag_ptr[39] -= flag_ptr[40] + flag_ptr[2] + flag_ptr[22] + flag_ptr[25] +
                  flag_ptr[10] + flag_ptr[13] + 94;
  flag_ptr[39] &= 255;
  flag_ptr[1] ^= flag_ptr[25] + flag_ptr[41] + flag_ptr[12] + flag_ptr[36] +
                     flag_ptr[34] + flag_ptr[5] + 14 &
                 255;
  flag_ptr[2] -= flag_ptr[21] + flag_ptr[30] + flag_ptr[16] + flag_ptr[41] +
                 flag_ptr[10] + flag_ptr[11] + 235;
  flag_ptr[2] &= 255;
  flag_ptr[9] -= flag_ptr[33] + flag_ptr[20] + flag_ptr[43] + flag_ptr[17] +
                 flag_ptr[15] + flag_ptr[28] + 13;
  flag_ptr[9] &= 255;
  flag_ptr[0] ^= flag_ptr[21] + flag_ptr[1] + flag_ptr[27] + flag_ptr[17] +
                     flag_ptr[8] + flag_ptr[31] + 92 &
                 255;
  flag_ptr[27] ^= flag_ptr[19] + flag_ptr[2] + flag_ptr[40] + flag_ptr[14] +
                      flag_ptr[9] + flag_ptr[36] + 147 &
                  255;
  flag_ptr[33] ^= flag_ptr[39] + flag_ptr[12] + flag_ptr[10] + flag_ptr[18] +
                      flag_ptr[37] + flag_ptr[15] + 22 &
                  255;
  flag_ptr[35] ^= flag_ptr[19] + flag_ptr[24] + flag_ptr[39] + flag_ptr[42] +
                      flag_ptr[28] + flag_ptr[4] + 184 &
                  255;
  flag_ptr[40] ^= flag_ptr[35] + flag_ptr[22] + flag_ptr[9] + flag_ptr[31] +
                      flag_ptr[23] + flag_ptr[12] + 7 &
                  255;
  flag_ptr[25] -= flag_ptr[37] + flag_ptr[8] + flag_ptr[39] + flag_ptr[17] +
                  flag_ptr[9] + flag_ptr[43] + 3;
  flag_ptr[25] &= 255;
  flag_ptr[35] -= flag_ptr[43] + flag_ptr[23] + flag_ptr[22] + flag_ptr[33] +
                  flag_ptr[30] + flag_ptr[0] + 147;
  flag_ptr[35] &= 255;
  flag_ptr[39] -= flag_ptr[43] + flag_ptr[35] + flag_ptr[4] + flag_ptr[37] +
                  flag_ptr[9] + flag_ptr[32] + 223;
  flag_ptr[39] &= 255;
  flag_ptr[39] ^= flag_ptr[9] + flag_ptr[18] + flag_ptr[20] + flag_ptr[15] +
                      flag_ptr[40] + flag_ptr[10] + 175 &
                  255;
  flag_ptr[25] ^= flag_ptr[9] + flag_ptr[26] + flag_ptr[29] + flag_ptr[23] +
                      flag_ptr[35] + flag_ptr[24] + 65 &
                  255;
  flag_ptr[29] -= flag_ptr[42] + flag_ptr[12] + flag_ptr[2] + flag_ptr[24] +
                  flag_ptr[6] + flag_ptr[39] + 200;
  flag_ptr[29] &= 255;
  flag_ptr[36] += flag_ptr[30] + flag_ptr[3] + flag_ptr[32] + flag_ptr[37] +
                  flag_ptr[24] + flag_ptr[18] + 148;
  flag_ptr[36] &= 255;
  flag_ptr[34] ^= flag_ptr[12] + flag_ptr[0] + flag_ptr[35] + flag_ptr[9] +
                      flag_ptr[38] + flag_ptr[30] + 1 &
                  255;
  flag_ptr[25] -= flag_ptr[18] + flag_ptr[32] + flag_ptr[12] + flag_ptr[2] +
                  flag_ptr[27] + flag_ptr[8] + 127;
  flag_ptr[25] &= 255;
  flag_ptr[23] ^= flag_ptr[11] + flag_ptr[32] + flag_ptr[35] + flag_ptr[5] +
                      flag_ptr[10] + flag_ptr[18] + 150 &
                  255;
  flag_ptr[9] += flag_ptr[5] + flag_ptr[15] + flag_ptr[19] + flag_ptr[27] +
                 flag_ptr[17] + flag_ptr[25] + 161;
  flag_ptr[9] &= 255;
  flag_ptr[38] ^= flag_ptr[29] + flag_ptr[9] + flag_ptr[15] + flag_ptr[33] +
                      flag_ptr[32] + flag_ptr[3] + 187 &
                  255;
  flag_ptr[43] -= flag_ptr[36] + flag_ptr[23] + flag_ptr[15] + flag_ptr[21] +
                  flag_ptr[32] + flag_ptr[38] + 79;
  flag_ptr[43] &= 255;
  flag_ptr[8] -= flag_ptr[10] + flag_ptr[36] + flag_ptr[38] + flag_ptr[20] +
                 flag_ptr[39] + flag_ptr[41] + 105;
  flag_ptr[8] &= 255;
  flag_ptr[34] ^= flag_ptr[9] + flag_ptr[5] + flag_ptr[31] + flag_ptr[42] +
                      flag_ptr[1] + flag_ptr[3] + 244 &
                  255;
  flag_ptr[41] += flag_ptr[33] + flag_ptr[9] + flag_ptr[34] + flag_ptr[26] +
                  flag_ptr[3] + flag_ptr[14] + 28;
  flag_ptr[41] &= 255;
  flag_ptr[31] ^= flag_ptr[1] + flag_ptr[16] + flag_ptr[23] + flag_ptr[25] +
                      flag_ptr[29] + flag_ptr[4] + 2 &
                  255;
  flag_ptr[42] -= flag_ptr[23] + flag_ptr[28] + flag_ptr[39] + flag_ptr[16] +
                  flag_ptr[17] + flag_ptr[2] + 49;
  flag_ptr[42] &= 255;
  flag_ptr[35] += flag_ptr[37] + flag_ptr[23] + flag_ptr[18] + flag_ptr[26] +
                  flag_ptr[20] + flag_ptr[30] + 140;
  flag_ptr[35] &= 255;
  flag_ptr[33] -= flag_ptr[14] + flag_ptr[35] + flag_ptr[41] + flag_ptr[0] +
                  flag_ptr[6] + flag_ptr[8] + 45;
  flag_ptr[33] &= 255;
  flag_ptr[10] ^= flag_ptr[3] + flag_ptr[11] + flag_ptr[8] + flag_ptr[26] +
                      flag_ptr[36] + flag_ptr[6] + 6 &
                  255;
  flag_ptr[18] += flag_ptr[22] + flag_ptr[24] + flag_ptr[25] + flag_ptr[40] +
                  flag_ptr[27] + flag_ptr[42] + 196;
  flag_ptr[18] &= 255;
  flag_ptr[38] += flag_ptr[10] + flag_ptr[18] + flag_ptr[39] + flag_ptr[0] +
                  flag_ptr[35] + flag_ptr[37] + 69;
  flag_ptr[38] &= 255;
  flag_ptr[24] -= flag_ptr[33] + flag_ptr[37] + flag_ptr[21] + flag_ptr[1] +
                  flag_ptr[36] + flag_ptr[12] + 29;
  flag_ptr[24] &= 255;
  flag_ptr[22] ^= flag_ptr[29] + flag_ptr[33] + flag_ptr[20] + flag_ptr[30] +
                      flag_ptr[0] + flag_ptr[25] + 9 &
                  255;
  flag_ptr[12] -= flag_ptr[23] + flag_ptr[2] + flag_ptr[10] + flag_ptr[5] +
                  flag_ptr[30] + flag_ptr[27] + 195;
  flag_ptr[12] &= 255;
  flag_ptr[22] ^= flag_ptr[6] + flag_ptr[32] + flag_ptr[27] + flag_ptr[2] +
                      flag_ptr[13] + flag_ptr[3] + 191 &
                  255;
  flag_ptr[31] += flag_ptr[42] + flag_ptr[30] + flag_ptr[1] + flag_ptr[20] +
                  flag_ptr[40] + flag_ptr[18] + 198;
  flag_ptr[31] &= 255;
  flag_ptr[34] ^= flag_ptr[30] + flag_ptr[6] + flag_ptr[13] + flag_ptr[35] +
                      flag_ptr[3] + flag_ptr[26] + 241 &
                  255;
  flag_ptr[39] ^= flag_ptr[1] + flag_ptr[38] + flag_ptr[10] + flag_ptr[5] +
                      flag_ptr[23] + flag_ptr[19] + 138 &
                  255;
  flag_ptr[38] += flag_ptr[2] + flag_ptr[5] + flag_ptr[24] + flag_ptr[8] +
                  flag_ptr[11] + flag_ptr[20] + 115;
  flag_ptr[38] &= 255;
  flag_ptr[33] -= flag_ptr[30] + flag_ptr[12] + flag_ptr[32] + flag_ptr[34] +
                  flag_ptr[18] + flag_ptr[40] + 2;
  flag_ptr[33] &= 255;
  flag_ptr[13] += flag_ptr[11] + flag_ptr[41] + flag_ptr[17] + flag_ptr[6] +
                  flag_ptr[22] + flag_ptr[8] + 130;
  flag_ptr[13] &= 255;
  flag_ptr[33] += flag_ptr[27] + flag_ptr[9] + flag_ptr[21] + flag_ptr[38] +
                  flag_ptr[23] + flag_ptr[5] + 150;
  flag_ptr[33] &= 255;
  flag_ptr[5] += flag_ptr[39] + flag_ptr[18] + flag_ptr[43] + flag_ptr[8] +
                 flag_ptr[15] + flag_ptr[14] + 95;
  flag_ptr[5] &= 255;
  flag_ptr[6] -= flag_ptr[10] + flag_ptr[34] + flag_ptr[17] + flag_ptr[28] +
                 flag_ptr[26] + flag_ptr[13] + 142;
  flag_ptr[6] &= 255;
  flag_ptr[3] -= flag_ptr[37] + flag_ptr[33] + flag_ptr[6] + flag_ptr[19] +
                 flag_ptr[22] + flag_ptr[21] + 15;
  flag_ptr[3] &= 255;
  flag_ptr[11] ^= flag_ptr[40] + flag_ptr[18] + flag_ptr[21] + flag_ptr[31] +
                      flag_ptr[5] + flag_ptr[15] + 125 &
                  255;
  flag_ptr[21] -= flag_ptr[40] + flag_ptr[1] + flag_ptr[9] + flag_ptr[38] +
                  flag_ptr[34] + flag_ptr[25] + 186;
  flag_ptr[21] &= 255;
  flag_ptr[15] ^= flag_ptr[20] + flag_ptr[3] + flag_ptr[36] + flag_ptr[7] +
                      flag_ptr[9] + flag_ptr[39] + 218 &
                  255;
  flag_ptr[28] += flag_ptr[12] + flag_ptr[26] + flag_ptr[3] + flag_ptr[22] +
                  flag_ptr[41] + flag_ptr[36] + 178;
  flag_ptr[28] &= 255;
  flag_ptr[7] -= flag_ptr[38] + flag_ptr[42] + flag_ptr[28] + flag_ptr[6] +
                 flag_ptr[16] + flag_ptr[25] + 127;
  flag_ptr[7] &= 255;
  flag_ptr[39] ^= flag_ptr[30] + flag_ptr[13] + flag_ptr[42] + flag_ptr[17] +
                      flag_ptr[37] + flag_ptr[1] + 213 &
                  255;
  flag_ptr[1] -= flag_ptr[36] + flag_ptr[28] + flag_ptr[19] + flag_ptr[30] +
                 flag_ptr[21] + flag_ptr[17] + 98;
  flag_ptr[1] &= 255;
  flag_ptr[41] ^= flag_ptr[5] + flag_ptr[40] + flag_ptr[39] + flag_ptr[2] +
                      flag_ptr[3] + flag_ptr[31] + 16 &
                  255;
  flag_ptr[14] ^= flag_ptr[25] + flag_ptr[4] + flag_ptr[33] + flag_ptr[9] +
                      flag_ptr[17] + flag_ptr[0] + 221 &
                  255;
  flag_ptr[34] += flag_ptr[14] + flag_ptr[10] + flag_ptr[4] + flag_ptr[29] +
                  flag_ptr[12] + flag_ptr[30] + 205;
  flag_ptr[34] &= 255;
  flag_ptr[27] -= flag_ptr[41] + flag_ptr[26] + flag_ptr[11] + flag_ptr[22] +
                  flag_ptr[17] + flag_ptr[16] + 244;
  flag_ptr[27] &= 255;
  flag_ptr[26] ^= flag_ptr[33] + flag_ptr[15] + flag_ptr[20] + flag_ptr[37] +
                      flag_ptr[5] + flag_ptr[36] + 78 &
                  255;
  flag_ptr[25] += flag_ptr[31] + flag_ptr[36] + flag_ptr[12] + flag_ptr[5] +
                  flag_ptr[9] + flag_ptr[3] + 94;
  flag_ptr[25] &= 255;
  flag_ptr[32] -= flag_ptr[4] + flag_ptr[22] + flag_ptr[25] + flag_ptr[13] +
                  flag_ptr[27] + flag_ptr[1] + 79;
  flag_ptr[32] &= 255;
  flag_ptr[3] += flag_ptr[5] + flag_ptr[18] + flag_ptr[10] + flag_ptr[14] +
                 flag_ptr[43] + flag_ptr[31] + 44;
  flag_ptr[3] &= 255;
  flag_ptr[13] -= flag_ptr[34] + flag_ptr[1] + flag_ptr[31] + flag_ptr[15] +
                  flag_ptr[12] + flag_ptr[8] + 206;
  flag_ptr[13] &= 255;
  flag_ptr[11] += flag_ptr[14] + flag_ptr[0] + flag_ptr[4] + flag_ptr[20] +
                  flag_ptr[7] + flag_ptr[27] + 253;
  flag_ptr[11] &= 255;
  flag_ptr[21] += flag_ptr[29] + flag_ptr[3] + flag_ptr[17] + flag_ptr[22] +
                  flag_ptr[41] + flag_ptr[18] + 133;
  flag_ptr[21] &= 255;
  flag_ptr[9] += flag_ptr[37] + flag_ptr[41] + flag_ptr[4] + flag_ptr[20] +
                 flag_ptr[0] + flag_ptr[18] + 175;
  flag_ptr[9] &= 255;
  flag_ptr[41] ^= flag_ptr[2] + flag_ptr[38] + flag_ptr[5] + flag_ptr[9] +
                      flag_ptr[23] + flag_ptr[31] + 230 &
                  255;
  flag_ptr[18] += flag_ptr[19] + flag_ptr[6] + flag_ptr[15] + flag_ptr[40] +
                  flag_ptr[3] + flag_ptr[32] + 191;
  flag_ptr[18] &= 255;
  flag_ptr[26] += flag_ptr[8] + flag_ptr[15] + flag_ptr[16] + flag_ptr[17] +
                  flag_ptr[39] + flag_ptr[42] + 151;
  flag_ptr[26] &= 255;
  flag_ptr[42] ^= flag_ptr[37] + flag_ptr[35] + flag_ptr[18] + flag_ptr[36] +
                      flag_ptr[1] + flag_ptr[14] + 95 &
                  255;
  flag_ptr[40] ^= flag_ptr[10] + flag_ptr[30] + flag_ptr[6] + flag_ptr[27] +
                      flag_ptr[39] + flag_ptr[9] + 254 &
                  255;
  flag_ptr[29] -= flag_ptr[37] + flag_ptr[9] + flag_ptr[0] + flag_ptr[16] +
                  flag_ptr[2] + flag_ptr[28] + 203;
  flag_ptr[29] &= 255;
  flag_ptr[23] += flag_ptr[33] + flag_ptr[15] + flag_ptr[16] + flag_ptr[41] +
                  flag_ptr[12] + flag_ptr[25] + 182;
  flag_ptr[23] &= 255;
  flag_ptr[20] ^= flag_ptr[40] + flag_ptr[15] + flag_ptr[25] + flag_ptr[34] +
                      flag_ptr[19] + flag_ptr[42] + 251 &
                  255;
  flag_ptr[14] += flag_ptr[20] + flag_ptr[11] + flag_ptr[21] + flag_ptr[38] +
                  flag_ptr[28] + flag_ptr[6] + 166;
  flag_ptr[14] &= 255;
  flag_ptr[26] ^= flag_ptr[24] + flag_ptr[7] + flag_ptr[11] + flag_ptr[12] +
                      flag_ptr[38] + flag_ptr[3] + 20 &
                  255;
  flag_ptr[12] ^= flag_ptr[5] + flag_ptr[8] + flag_ptr[25] + flag_ptr[3] +
                      flag_ptr[7] + flag_ptr[13] + 145 &
                  255;
  flag_ptr[12] -= flag_ptr[26] + flag_ptr[30] + flag_ptr[17] + flag_ptr[32] +
                  flag_ptr[22] + flag_ptr[43] + 72;
  flag_ptr[12] &= 255;
  flag_ptr[19] ^= flag_ptr[8] + flag_ptr[3] + flag_ptr[22] + flag_ptr[30] +
                      flag_ptr[26] + flag_ptr[2] + 4 &
                  255;
  flag_ptr[24] -= flag_ptr[10] + flag_ptr[39] + flag_ptr[23] + flag_ptr[28] +
                  flag_ptr[14] + flag_ptr[2] + 121;
  flag_ptr[24] &= 255;
  flag_ptr[26] -= flag_ptr[18] + flag_ptr[1] + flag_ptr[32] + flag_ptr[39] +
                  flag_ptr[0] + flag_ptr[7] + 200;
  flag_ptr[26] &= 255;
  flag_ptr[8] += flag_ptr[41] + flag_ptr[25] + flag_ptr[32] + flag_ptr[1] +
                 flag_ptr[15] + flag_ptr[6] + 182;
  flag_ptr[8] &= 255;
  flag_ptr[37] += flag_ptr[8] + flag_ptr[6] + flag_ptr[10] + flag_ptr[2] +
                  flag_ptr[36] + flag_ptr[14] + 116;
  flag_ptr[37] &= 255;
  flag_ptr[6] ^= flag_ptr[23] + flag_ptr[13] + flag_ptr[20] + flag_ptr[11] +
                     flag_ptr[40] + flag_ptr[16] + 23 &
                 255;
  flag_ptr[41] -= flag_ptr[17] + flag_ptr[20] + flag_ptr[19] + flag_ptr[38] +
                  flag_ptr[18] + flag_ptr[29] + 30;
  flag_ptr[41] &= 255;
  flag_ptr[11] ^= flag_ptr[31] + flag_ptr[20] + flag_ptr[13] + flag_ptr[27] +
                      flag_ptr[24] + flag_ptr[21] + 114 &
                  255;
  flag_ptr[41] += flag_ptr[24] + flag_ptr[30] + flag_ptr[13] + flag_ptr[23] +
                  flag_ptr[5] + flag_ptr[17] + 64;
  flag_ptr[41] &= 255;
  flag_ptr[34] ^= flag_ptr[19] + flag_ptr[42] + flag_ptr[22] + flag_ptr[13] +
                      flag_ptr[8] + flag_ptr[3] + 68 &
                  255;
  flag_ptr[38] ^= flag_ptr[22] + flag_ptr[36] + flag_ptr[17] + flag_ptr[14] +
                      flag_ptr[35] + flag_ptr[25] + 55 &
                  255;
  flag_ptr[4] += flag_ptr[5] + flag_ptr[28] + flag_ptr[39] + flag_ptr[15] +
                 flag_ptr[6] + flag_ptr[3] + 154;
  flag_ptr[4] &= 255;
  flag_ptr[34] -= flag_ptr[4] + flag_ptr[3] + flag_ptr[43] + flag_ptr[38] +
                  flag_ptr[23] + flag_ptr[7] + 236;
  flag_ptr[34] &= 255;
  flag_ptr[0] ^= flag_ptr[7] + flag_ptr[11] + flag_ptr[4] + flag_ptr[23] +
                     flag_ptr[42] + flag_ptr[14] + 73 &
                 255;
  flag_ptr[9] += flag_ptr[7] + flag_ptr[19] + flag_ptr[29] + flag_ptr[30] +
                 flag_ptr[38] + flag_ptr[13] + 60;
  flag_ptr[9] &= 255;
  flag_ptr[40] ^= flag_ptr[13] + flag_ptr[15] + flag_ptr[22] + flag_ptr[24] +
                      flag_ptr[43] + flag_ptr[39] + 144 &
                  255;
  flag_ptr[6] ^= flag_ptr[2] + flag_ptr[9] + flag_ptr[16] + flag_ptr[5] +
                     flag_ptr[10] + flag_ptr[12] + 37 &
                 255;
  flag_ptr[30] ^= flag_ptr[23] + flag_ptr[12] + flag_ptr[3] + flag_ptr[28] +
                      flag_ptr[2] + flag_ptr[18] + 53 &
                  255;
  flag_ptr[41] -= flag_ptr[25] + flag_ptr[0] + flag_ptr[40] + flag_ptr[8] +
                  flag_ptr[5] + flag_ptr[26] + 80;
  flag_ptr[41] &= 255;
  flag_ptr[39] ^= flag_ptr[41] + flag_ptr[25] + flag_ptr[43] + flag_ptr[30] +
                      flag_ptr[11] + flag_ptr[1] + 63 &
                  255;
  flag_ptr[18] ^= flag_ptr[28] + flag_ptr[23] + flag_ptr[35] + flag_ptr[29] +
                      flag_ptr[13] + flag_ptr[24] + 57 &
                  255;
  flag_ptr[21] -= flag_ptr[16] + flag_ptr[41] + flag_ptr[5] + flag_ptr[30] +
                  flag_ptr[20] + flag_ptr[32] + 51;
  flag_ptr[21] &= 255;
  flag_ptr[40] += flag_ptr[39] + flag_ptr[38] + flag_ptr[24] + flag_ptr[20] +
                  flag_ptr[1] + flag_ptr[9] + 228;
  flag_ptr[40] &= 255;
  flag_ptr[31] += flag_ptr[29] + flag_ptr[22] + flag_ptr[15] + flag_ptr[10] +
                  flag_ptr[36] + flag_ptr[18] + 227;
  flag_ptr[31] &= 255;
  flag_ptr[19] -= flag_ptr[38] + flag_ptr[31] + flag_ptr[9] + flag_ptr[35] +
                  flag_ptr[29] + flag_ptr[39] + 51;
  flag_ptr[19] &= 255;
  flag_ptr[35] ^= flag_ptr[1] + flag_ptr[29] + flag_ptr[25] + flag_ptr[5] +
                      flag_ptr[16] + flag_ptr[10] + 221 &
                  255;
  flag_ptr[2] += flag_ptr[39] + flag_ptr[43] + flag_ptr[38] + flag_ptr[6] +
                 flag_ptr[18] + flag_ptr[5] + 22;
  flag_ptr[2] &= 255;
  flag_ptr[14] += flag_ptr[6] + flag_ptr[26] + flag_ptr[3] + flag_ptr[23] +
                  flag_ptr[17] + flag_ptr[43] + 15;
  flag_ptr[14] &= 255;
  flag_ptr[33] += flag_ptr[18] + flag_ptr[31] + flag_ptr[4] + flag_ptr[9] +
                  flag_ptr[35] + flag_ptr[10] + 49;
  flag_ptr[33] &= 255;
  flag_ptr[33] -= flag_ptr[5] + flag_ptr[41] + flag_ptr[16] + flag_ptr[32] +
                  flag_ptr[35] + flag_ptr[36] + 200;
  flag_ptr[33] &= 255;
  flag_ptr[22] ^= flag_ptr[32] + flag_ptr[13] + flag_ptr[42] + flag_ptr[12] +
                      flag_ptr[33] + flag_ptr[25] + 4 &
                  255;
  flag_ptr[36] -= flag_ptr[1] + flag_ptr[33] + flag_ptr[27] + flag_ptr[20] +
                  flag_ptr[42] + flag_ptr[17] + 173;
  flag_ptr[36] &= 255;
  flag_ptr[32] ^= flag_ptr[28] + flag_ptr[16] + flag_ptr[41] + flag_ptr[36] +
                      flag_ptr[22] + flag_ptr[33] + 146 &
                  255;
  flag_ptr[5] -= flag_ptr[15] + flag_ptr[33] + flag_ptr[18] + flag_ptr[20] +
                 flag_ptr[3] + flag_ptr[22] + 88;
  flag_ptr[5] &= 255;
  flag_ptr[10] ^= flag_ptr[18] + flag_ptr[1] + flag_ptr[20] + flag_ptr[11] +
                      flag_ptr[31] + flag_ptr[41] + 10 &
                  255;
  flag_ptr[23] += flag_ptr[3] + flag_ptr[28] + flag_ptr[4] + flag_ptr[27] +
                  flag_ptr[25] + flag_ptr[10] + 21;
  flag_ptr[23] &= 255;
  flag_ptr[36] ^= flag_ptr[28] + flag_ptr[6] + flag_ptr[34] + flag_ptr[21] +
                      flag_ptr[41] + flag_ptr[35] + 245 &
                  255;
  flag_ptr[22] += flag_ptr[3] + flag_ptr[21] + flag_ptr[6] + flag_ptr[18] +
                  flag_ptr[43] + flag_ptr[0] + 13;
  flag_ptr[22] &= 255;
  flag_ptr[30] -= flag_ptr[33] + flag_ptr[40] + flag_ptr[38] + flag_ptr[19] +
                  flag_ptr[36] + flag_ptr[16] + 196;
  flag_ptr[30] &= 255;
  flag_ptr[7] ^= flag_ptr[19] + flag_ptr[3] + flag_ptr[16] + flag_ptr[1] +
                     flag_ptr[34] + flag_ptr[33] + 110 &
                 255;
  flag_ptr[37] += flag_ptr[10] + flag_ptr[15] + flag_ptr[41] + flag_ptr[36] +
                  flag_ptr[1] + flag_ptr[38] + 181;
  flag_ptr[37] &= 255;
  flag_ptr[31] -= flag_ptr[29] + flag_ptr[40] + flag_ptr[13] + flag_ptr[24] +
                  flag_ptr[43] + flag_ptr[30] + 59;
  flag_ptr[31] &= 255;
  flag_ptr[35] ^= flag_ptr[12] + flag_ptr[18] + flag_ptr[39] + flag_ptr[0] +
                      flag_ptr[10] + flag_ptr[3] + 148 &
                  255;
  flag_ptr[15] ^= flag_ptr[1] + flag_ptr[17] + flag_ptr[43] + flag_ptr[19] +
                      flag_ptr[11] + flag_ptr[39] + 153 &
                  255;
  flag_ptr[4] ^= flag_ptr[36] + flag_ptr[42] + flag_ptr[22] + flag_ptr[20] +
                     flag_ptr[15] + flag_ptr[0] + 219 &
                 255;
  flag_ptr[13] -= flag_ptr[27] + flag_ptr[28] + flag_ptr[15] + flag_ptr[40] +
                  flag_ptr[14] + flag_ptr[8] + 70;
  flag_ptr[13] &= 255;
  flag_ptr[22] += flag_ptr[43] + flag_ptr[18] + flag_ptr[23] + flag_ptr[42] +
                  flag_ptr[17] + flag_ptr[33] + 225;
  flag_ptr[22] &= 255;
  flag_ptr[21] -= flag_ptr[8] + flag_ptr[30] + flag_ptr[13] + flag_ptr[22] +
                  flag_ptr[0] + flag_ptr[5] + 34;
  flag_ptr[21] &= 255;
  flag_ptr[23] += flag_ptr[0] + flag_ptr[25] + flag_ptr[10] + flag_ptr[26] +
                  flag_ptr[38] + flag_ptr[24] + 236;
  flag_ptr[23] &= 255;
  flag_ptr[27] += flag_ptr[29] + flag_ptr[16] + flag_ptr[33] + flag_ptr[18] +
                  flag_ptr[19] + flag_ptr[35] + 222;
  flag_ptr[27] &= 255;
  flag_ptr[32] += flag_ptr[40] + flag_ptr[41] + flag_ptr[19] + flag_ptr[7] +
                  flag_ptr[36] + flag_ptr[18] + 29;
  flag_ptr[32] &= 255;
  flag_ptr[36] -= flag_ptr[8] + flag_ptr[7] + flag_ptr[27] + flag_ptr[43] +
                  flag_ptr[24] + flag_ptr[15] + 174;
  flag_ptr[36] &= 255;
  flag_ptr[40] -= flag_ptr[13] + flag_ptr[21] + flag_ptr[8] + flag_ptr[3] +
                  flag_ptr[10] + flag_ptr[17] + 248;
  flag_ptr[40] &= 255;
  flag_ptr[9] ^= flag_ptr[27] + flag_ptr[15] + flag_ptr[21] + flag_ptr[36] +
                     flag_ptr[29] + flag_ptr[25] + 178 &
                 255;
  flag_ptr[3] -= flag_ptr[8] + flag_ptr[40] + flag_ptr[10] + flag_ptr[39] +
                 flag_ptr[16] + flag_ptr[28] + 98;
  flag_ptr[3] &= 255;
  flag_ptr[38] += flag_ptr[1] + flag_ptr[8] + flag_ptr[31] + flag_ptr[39] +
                  flag_ptr[7] + flag_ptr[18] + 150;
  flag_ptr[38] &= 255;
  flag_ptr[6] -= flag_ptr[30] + flag_ptr[21] + flag_ptr[2] + flag_ptr[19] +
                 flag_ptr[35] + flag_ptr[20] + 249;
  flag_ptr[6] &= 255;
  flag_ptr[15] -= flag_ptr[13] + flag_ptr[42] + flag_ptr[32] + flag_ptr[39] +
                  flag_ptr[34] + flag_ptr[28] + 116;
  flag_ptr[15] &= 255;
  flag_ptr[27] -= flag_ptr[14] + flag_ptr[28] + flag_ptr[34] + flag_ptr[16] +
                  flag_ptr[41] + flag_ptr[31] + 225;
  flag_ptr[27] &= 255;
  flag_ptr[29] ^= flag_ptr[31] + flag_ptr[38] + flag_ptr[2] + flag_ptr[43] +
                      flag_ptr[15] + flag_ptr[33] + 61 &
                  255;
  flag_ptr[37] += flag_ptr[18] + flag_ptr[29] + flag_ptr[11] + flag_ptr[28] +
                  flag_ptr[13] + flag_ptr[3] + 248;
  flag_ptr[37] &= 255;
  flag_ptr[19] += flag_ptr[9] + flag_ptr[41] + flag_ptr[42] + flag_ptr[31] +
                  flag_ptr[32] + flag_ptr[15] + 14;
  flag_ptr[19] &= 255;
  flag_ptr[35] += flag_ptr[13] + flag_ptr[21] + flag_ptr[32] + flag_ptr[1] +
                  flag_ptr[10] + flag_ptr[43] + 148;
  flag_ptr[35] &= 255;
  flag_ptr[10] += flag_ptr[24] + flag_ptr[28] + flag_ptr[12] + flag_ptr[3] +
                  flag_ptr[34] + flag_ptr[8] + 83;
  flag_ptr[10] &= 255;
  flag_ptr[24] ^= flag_ptr[39] + flag_ptr[38] + flag_ptr[0] + flag_ptr[20] +
                      flag_ptr[5] + flag_ptr[10] + 158 &
                  255;
  flag_ptr[0] ^= flag_ptr[6] + flag_ptr[24] + flag_ptr[12] + flag_ptr[35] +
                     flag_ptr[18] + flag_ptr[20] + 222 &
                 255;
  flag_ptr[16] ^= flag_ptr[11] + flag_ptr[33] + flag_ptr[22] + flag_ptr[7] +
                      flag_ptr[0] + flag_ptr[29] + 8 &
                  255;
  flag_ptr[5] -= flag_ptr[39] + flag_ptr[26] + flag_ptr[32] + flag_ptr[13] +
                 flag_ptr[40] + flag_ptr[31] + 242;
  flag_ptr[5] &= 255;
  flag_ptr[8] ^= flag_ptr[33] + flag_ptr[18] + flag_ptr[35] + flag_ptr[41] +
                     flag_ptr[39] + flag_ptr[36] + 142 &
                 255;
  flag_ptr[15] += flag_ptr[28] + flag_ptr[16] + flag_ptr[1] + flag_ptr[8] +
                  flag_ptr[3] + flag_ptr[19] + 5;
  flag_ptr[15] &= 255;
  flag_ptr[19] -= flag_ptr[36] + flag_ptr[41] + flag_ptr[40] + flag_ptr[24] +
                  flag_ptr[33] + flag_ptr[10] + 138;
  flag_ptr[19] &= 255;
  flag_ptr[1] -= flag_ptr[12] + flag_ptr[17] + flag_ptr[2] + flag_ptr[36] +
                 flag_ptr[4] + flag_ptr[35] + 13;
  flag_ptr[1] &= 255;
  flag_ptr[6] ^= flag_ptr[41] + flag_ptr[28] + flag_ptr[20] + flag_ptr[36] +
                     flag_ptr[40] + flag_ptr[13] + 212 &
                 255;
  flag_ptr[25] += flag_ptr[16] + flag_ptr[21] + flag_ptr[28] + flag_ptr[35] +
                  flag_ptr[14] + flag_ptr[37] + 212;
  flag_ptr[25] &= 255;
  flag_ptr[38] += flag_ptr[4] + flag_ptr[29] + flag_ptr[22] + flag_ptr[2] +
                  flag_ptr[14] + flag_ptr[37] + 224;
  flag_ptr[38] &= 255;
  flag_ptr[1] ^= flag_ptr[21] + flag_ptr[5] + flag_ptr[27] + flag_ptr[36] +
                     flag_ptr[9] + flag_ptr[23] + 51 &
                 255;
  flag_ptr[16] -= flag_ptr[39] + flag_ptr[1] + flag_ptr[19] + flag_ptr[10] +
                  flag_ptr[14] + flag_ptr[26] + 225;
  flag_ptr[16] &= 255;
  flag_ptr[18] -= flag_ptr[10] + flag_ptr[5] + flag_ptr[25] + flag_ptr[35] +
                  flag_ptr[34] + flag_ptr[20] + 228;
  flag_ptr[18] &= 255;
  flag_ptr[25] ^= flag_ptr[29] + flag_ptr[41] + flag_ptr[32] + flag_ptr[27] +
                      flag_ptr[3] + flag_ptr[33] + 34 &
                  255;
  flag_ptr[8] -= flag_ptr[4] + flag_ptr[19] + flag_ptr[32] + flag_ptr[43] +
                 flag_ptr[16] + flag_ptr[27] + 75;
  flag_ptr[8] &= 255;
  flag_ptr[3] -= flag_ptr[31] + flag_ptr[37] + flag_ptr[34] + flag_ptr[25] +
                 flag_ptr[11] + flag_ptr[13] + 6;
  flag_ptr[3] &= 255;
  flag_ptr[6] += flag_ptr[36] + flag_ptr[29] + flag_ptr[27] + flag_ptr[23] +
                 flag_ptr[3] + flag_ptr[19] + 190;
  flag_ptr[6] &= 255;
  flag_ptr[20] += flag_ptr[7] + flag_ptr[37] + flag_ptr[5] + flag_ptr[0] +
                  flag_ptr[34] + flag_ptr[17] + 57;
  flag_ptr[20] &= 255;
  flag_ptr[1] += flag_ptr[20] + flag_ptr[2] + flag_ptr[25] + flag_ptr[31] +
                 flag_ptr[4] + flag_ptr[18] + 7;
  flag_ptr[1] &= 255;
  flag_ptr[34] -= flag_ptr[5] + flag_ptr[10] + flag_ptr[15] + flag_ptr[2] +
                  flag_ptr[25] + flag_ptr[26] + 41;
  flag_ptr[34] &= 255;
  flag_ptr[23] ^= flag_ptr[17] + flag_ptr[16] + flag_ptr[3] + flag_ptr[30] +
                      flag_ptr[24] + flag_ptr[43] + 7 &
                  255;
  flag_ptr[35] ^= flag_ptr[4] + flag_ptr[0] + flag_ptr[29] + flag_ptr[18] +
                      flag_ptr[28] + flag_ptr[22] + 218 &
                  255;
  flag_ptr[40] -= flag_ptr[2] + flag_ptr[17] + flag_ptr[26] + flag_ptr[8] +
                  flag_ptr[24] + flag_ptr[23] + 239;
  flag_ptr[40] &= 255;
  flag_ptr[21] ^= flag_ptr[36] + flag_ptr[31] + flag_ptr[1] + flag_ptr[20] +
                      flag_ptr[43] + flag_ptr[17] + 224 &
                  255;
  flag_ptr[12] -= flag_ptr[18] + flag_ptr[2] + flag_ptr[17] + flag_ptr[7] +
                  flag_ptr[41] + flag_ptr[32] + 165;
  flag_ptr[12] &= 255;
  flag_ptr[3] ^= flag_ptr[13] + flag_ptr[29] + flag_ptr[8] + flag_ptr[11] +
                     flag_ptr[38] + flag_ptr[21] + 140 &
                 255;
  flag_ptr[14] += flag_ptr[24] + flag_ptr[26] + flag_ptr[11] + flag_ptr[19] +
                  flag_ptr[6] + flag_ptr[17] + 150;
  flag_ptr[14] &= 255;
  flag_ptr[38] -= flag_ptr[15] + flag_ptr[13] + flag_ptr[3] + flag_ptr[22] +
                  flag_ptr[34] + flag_ptr[12] + 184;
  flag_ptr[38] &= 255;
  flag_ptr[14] -= flag_ptr[35] + flag_ptr[20] + flag_ptr[10] + flag_ptr[4] +
                  flag_ptr[16] + flag_ptr[28] + 173;
  flag_ptr[14] &= 255;
  flag_ptr[39] += flag_ptr[18] + flag_ptr[27] + flag_ptr[15] + flag_ptr[20] +
                  flag_ptr[28] + flag_ptr[9] + 242;
  flag_ptr[39] &= 255;
  flag_ptr[8] += flag_ptr[36] + flag_ptr[38] + flag_ptr[6] + flag_ptr[33] +
                 flag_ptr[27] + flag_ptr[32] + 188;
  flag_ptr[8] &= 255;
  flag_ptr[6] += flag_ptr[17] + flag_ptr[7] + flag_ptr[32] + flag_ptr[39] +
                 flag_ptr[31] + flag_ptr[14] + 1;
  flag_ptr[6] &= 255;
  flag_ptr[34] += flag_ptr[37] + flag_ptr[2] + flag_ptr[43] + flag_ptr[28] +
                  flag_ptr[16] + flag_ptr[30] + 214;
  flag_ptr[34] &= 255;
  flag_ptr[34] -= flag_ptr[28] + flag_ptr[8] + flag_ptr[13] + flag_ptr[16] +
                  flag_ptr[24] + flag_ptr[1] + 237;
  flag_ptr[34] &= 255;
  flag_ptr[36] -= flag_ptr[5] + flag_ptr[41] + flag_ptr[23] + flag_ptr[27] +
                  flag_ptr[16] + flag_ptr[31] + 110;
  flag_ptr[36] &= 255;
  flag_ptr[4] -= flag_ptr[8] + flag_ptr[24] + flag_ptr[29] + flag_ptr[30] +
                 flag_ptr[41] + flag_ptr[43] + 121;
  flag_ptr[4] &= 255;
  flag_ptr[31] -= flag_ptr[39] + flag_ptr[35] + flag_ptr[34] + flag_ptr[43] +
                  flag_ptr[38] + flag_ptr[20] + 173;
  flag_ptr[31] &= 255;
  flag_ptr[16] += flag_ptr[13] + flag_ptr[41] + flag_ptr[6] + flag_ptr[3] +
                  flag_ptr[29] + flag_ptr[39] + 206;
  flag_ptr[16] &= 255;
  flag_ptr[9] += flag_ptr[31] + flag_ptr[37] + flag_ptr[29] + flag_ptr[27] +
                 flag_ptr[11] + flag_ptr[13] + 216;
  flag_ptr[9] &= 255;
  flag_ptr[24] -= flag_ptr[43] + flag_ptr[5] + flag_ptr[36] + flag_ptr[9] +
                  flag_ptr[30] + flag_ptr[3] + 160;
  flag_ptr[24] &= 255;
  flag_ptr[24] ^= flag_ptr[23] + flag_ptr[19] + flag_ptr[1] + flag_ptr[13] +
                      flag_ptr[3] + flag_ptr[2] + 245 &
                  255;
  flag_ptr[3] -= flag_ptr[31] + flag_ptr[37] + flag_ptr[33] + flag_ptr[7] +
                 flag_ptr[23] + flag_ptr[32] + 157;
  flag_ptr[3] &= 255;
  flag_ptr[27] -= flag_ptr[21] + flag_ptr[18] + flag_ptr[38] + flag_ptr[1] +
                  flag_ptr[40] + flag_ptr[12] + 174;
  flag_ptr[27] &= 255;
  flag_ptr[22] += flag_ptr[41] + flag_ptr[28] + flag_ptr[25] + flag_ptr[26] +
                  flag_ptr[0] + flag_ptr[23] + 162;
  flag_ptr[22] &= 255;
  flag_ptr[18] += flag_ptr[17] + flag_ptr[43] + flag_ptr[26] + flag_ptr[10] +
                  flag_ptr[30] + flag_ptr[16] + 6;
  flag_ptr[18] &= 255;
  flag_ptr[4] += flag_ptr[29] + flag_ptr[33] + flag_ptr[34] + flag_ptr[20] +
                 flag_ptr[9] + flag_ptr[17] + 77;
  flag_ptr[4] &= 255;
  flag_ptr[21] ^= flag_ptr[30] + flag_ptr[4] + flag_ptr[41] + flag_ptr[6] +
                      flag_ptr[22] + flag_ptr[9] + 224 &
                  255;
  flag_ptr[3] -= flag_ptr[29] + flag_ptr[14] + flag_ptr[12] + flag_ptr[39] +
                 flag_ptr[32] + flag_ptr[28] + 145;
  flag_ptr[3] &= 255;
  flag_ptr[27] ^= flag_ptr[25] + flag_ptr[29] + flag_ptr[34] + flag_ptr[13] +
                      flag_ptr[41] + flag_ptr[5] + 145 &
                  255;
  flag_ptr[39] ^= flag_ptr[11] + flag_ptr[23] + flag_ptr[31] + flag_ptr[20] +
                      flag_ptr[42] + flag_ptr[30] + 94 &
                  255;
  flag_ptr[4] -= flag_ptr[11] + flag_ptr[36] + flag_ptr[40] + flag_ptr[38] +
                 flag_ptr[16] + flag_ptr[6] + 149;
  flag_ptr[4] &= 255;
  flag_ptr[11] += flag_ptr[5] + flag_ptr[30] + flag_ptr[23] + flag_ptr[35] +
                  flag_ptr[26] + flag_ptr[41] + 80;
  flag_ptr[11] &= 255;
  flag_ptr[27] -= flag_ptr[43] + flag_ptr[35] + flag_ptr[6] + flag_ptr[22] +
                  flag_ptr[12] + flag_ptr[42] + 49;
  flag_ptr[27] &= 255;
  flag_ptr[33] += flag_ptr[17] + flag_ptr[7] + flag_ptr[26] + flag_ptr[18] +
                  flag_ptr[36] + flag_ptr[11] + 113;
  flag_ptr[33] &= 255;
  flag_ptr[35] += flag_ptr[30] + flag_ptr[7] + flag_ptr[3] + flag_ptr[40] +
                  flag_ptr[20] + flag_ptr[34] + 255;
  flag_ptr[35] &= 255;
  flag_ptr[29] ^= flag_ptr[34] + flag_ptr[20] + flag_ptr[30] + flag_ptr[35] +
                      flag_ptr[8] + flag_ptr[5] + 90 &
                  255;
  flag_ptr[3] -= flag_ptr[13] + flag_ptr[30] + flag_ptr[9] + flag_ptr[28] +
                 flag_ptr[32] + flag_ptr[38] + 241;
  flag_ptr[3] &= 255;
  flag_ptr[18] -= flag_ptr[14] + flag_ptr[23] + flag_ptr[13] + flag_ptr[37] +
                  flag_ptr[20] + flag_ptr[32] + 70;
  flag_ptr[18] &= 255;
  flag_ptr[29] += flag_ptr[13] + flag_ptr[1] + flag_ptr[28] + flag_ptr[14] +
                  flag_ptr[41] + flag_ptr[26] + 3;
  flag_ptr[29] &= 255;
  flag_ptr[8] -= flag_ptr[40] + flag_ptr[12] + flag_ptr[41] + flag_ptr[20] +
                 flag_ptr[5] + flag_ptr[30] + 146;
  flag_ptr[8] &= 255;
  flag_ptr[3] ^= flag_ptr[19] + flag_ptr[31] + flag_ptr[1] + flag_ptr[26] +
                     flag_ptr[6] + flag_ptr[36] + 149 &
                 255;
  flag_ptr[0] -= flag_ptr[43] + flag_ptr[42] + flag_ptr[30] + flag_ptr[40] +
                 flag_ptr[11] + flag_ptr[29] + 98;
  flag_ptr[0] &= 255;
  flag_ptr[23] += flag_ptr[18] + flag_ptr[1] + flag_ptr[38] + flag_ptr[22] +
                  flag_ptr[20] + flag_ptr[4] + 124;
  flag_ptr[23] &= 255;
  flag_ptr[7] -= flag_ptr[30] + flag_ptr[35] + flag_ptr[16] + flag_ptr[23] +
                 flag_ptr[40] + flag_ptr[22] + 160;
  flag_ptr[7] &= 255;
  flag_ptr[38] += flag_ptr[22] + flag_ptr[26] + flag_ptr[9] + flag_ptr[29] +
                  flag_ptr[40] + flag_ptr[1] + 10;
  flag_ptr[38] &= 255;
  flag_ptr[7] -= flag_ptr[41] + flag_ptr[40] + flag_ptr[13] + flag_ptr[19] +
                 flag_ptr[17] + flag_ptr[38] + 45;
  flag_ptr[7] &= 255;
  flag_ptr[7] -= flag_ptr[11] + flag_ptr[43] + flag_ptr[13] + flag_ptr[8] +
                 flag_ptr[19] + flag_ptr[23] + 19;
  flag_ptr[7] &= 255;
  flag_ptr[26] += flag_ptr[9] + flag_ptr[2] + flag_ptr[43] + flag_ptr[10] +
                  flag_ptr[18] + flag_ptr[11] + 190;
  flag_ptr[26] &= 255;
  flag_ptr[33] += flag_ptr[21] + flag_ptr[13] + flag_ptr[25] + flag_ptr[29] +
                  flag_ptr[36] + flag_ptr[18] + 139;
  flag_ptr[33] &= 255;
  flag_ptr[38] ^= flag_ptr[6] + flag_ptr[42] + flag_ptr[15] + flag_ptr[31] +
                      flag_ptr[36] + flag_ptr[7] + 155 &
                  255;
  flag_ptr[34] += flag_ptr[11] + flag_ptr[6] + flag_ptr[35] + flag_ptr[15] +
                  flag_ptr[36] + flag_ptr[21] + 159;
  flag_ptr[34] &= 255;
  flag_ptr[17] ^= flag_ptr[10] + flag_ptr[0] + flag_ptr[43] + flag_ptr[36] +
                      flag_ptr[26] + flag_ptr[33] + 175 &
                  255;
  flag_ptr[32] += flag_ptr[22] + flag_ptr[25] + flag_ptr[2] + flag_ptr[43] +
                  flag_ptr[37] + flag_ptr[28] + 77;
  flag_ptr[32] &= 255;
  flag_ptr[4] += flag_ptr[23] + flag_ptr[19] + flag_ptr[28] + flag_ptr[41] +
                 flag_ptr[31] + flag_ptr[43] + 205;
  flag_ptr[4] &= 255;
  flag_ptr[14] -= flag_ptr[24] + flag_ptr[16] + flag_ptr[41] + flag_ptr[28] +
                  flag_ptr[34] + flag_ptr[5] + 255;
  flag_ptr[14] &= 255;
  flag_ptr[43] += flag_ptr[1] + flag_ptr[24] + flag_ptr[31] + flag_ptr[29] +
                  flag_ptr[35] + flag_ptr[42] + 3;
  flag_ptr[43] &= 255;
  flag_ptr[25] -= flag_ptr[11] + flag_ptr[17] + flag_ptr[34] + flag_ptr[36] +
                  flag_ptr[4] + flag_ptr[41] + 109;
  flag_ptr[25] &= 255;
  flag_ptr[6] -= flag_ptr[11] + flag_ptr[8] + flag_ptr[37] + flag_ptr[39] +
                 flag_ptr[12] + flag_ptr[33] + 185;
  flag_ptr[6] &= 255;
  flag_ptr[27] += flag_ptr[16] + flag_ptr[5] + flag_ptr[12] + flag_ptr[2] +
                  flag_ptr[43] + flag_ptr[20] + 84;
  flag_ptr[27] &= 255;
  flag_ptr[9] += flag_ptr[41] + flag_ptr[31] + flag_ptr[7] + flag_ptr[36] +
                 flag_ptr[20] + flag_ptr[42] + 182;
  flag_ptr[9] &= 255;
  flag_ptr[1] -= flag_ptr[27] + flag_ptr[6] + flag_ptr[10] + flag_ptr[23] +
                 flag_ptr[35] + flag_ptr[22] + 110;
  flag_ptr[1] &= 255;
  flag_ptr[27] += flag_ptr[13] + flag_ptr[37] + flag_ptr[23] + flag_ptr[17] +
                  flag_ptr[2] + flag_ptr[43] + 254;
  flag_ptr[27] &= 255;
  flag_ptr[28] += flag_ptr[40] + flag_ptr[23] + flag_ptr[19] + flag_ptr[20] +
                  flag_ptr[13] + flag_ptr[43] + 220;
  flag_ptr[28] &= 255;
  flag_ptr[9] += flag_ptr[38] + flag_ptr[29] + flag_ptr[25] + flag_ptr[2] +
                 flag_ptr[32] + flag_ptr[21] + 73;
  flag_ptr[9] &= 255;
  flag_ptr[8] += flag_ptr[30] + flag_ptr[19] + flag_ptr[3] + flag_ptr[13] +
                 flag_ptr[35] + flag_ptr[18] + 222;
  flag_ptr[8] &= 255;
  flag_ptr[18] ^= flag_ptr[36] + flag_ptr[26] + flag_ptr[27] + flag_ptr[7] +
                      flag_ptr[14] + flag_ptr[15] + 22 &
                  255;
  flag_ptr[8] ^= flag_ptr[33] + flag_ptr[32] + flag_ptr[39] + flag_ptr[12] +
                     flag_ptr[20] + flag_ptr[7] + 34 &
                 255;
  flag_ptr[13] += flag_ptr[25] + flag_ptr[26] + flag_ptr[22] + flag_ptr[15] +
                  flag_ptr[19] + flag_ptr[14] + 68;
  flag_ptr[13] &= 255;
  flag_ptr[19] ^= flag_ptr[12] + flag_ptr[1] + flag_ptr[34] + flag_ptr[8] +
                      flag_ptr[4] + flag_ptr[37] + 22 &
                  255;
  flag_ptr[18] += flag_ptr[41] + flag_ptr[12] + flag_ptr[19] + flag_ptr[4] +
                  flag_ptr[9] + flag_ptr[21] + 22;
  flag_ptr[18] &= 255;
  flag_ptr[20] += flag_ptr[21] + flag_ptr[0] + flag_ptr[32] + flag_ptr[13] +
                  flag_ptr[8] + flag_ptr[11] + 37;
  flag_ptr[20] &= 255;
  flag_ptr[33] ^= flag_ptr[39] + flag_ptr[15] + flag_ptr[37] + flag_ptr[20] +
                      flag_ptr[5] + flag_ptr[29] + 42 &
                  255;
  flag_ptr[24] ^= flag_ptr[29] + flag_ptr[39] + flag_ptr[20] + flag_ptr[38] +
                      flag_ptr[37] + flag_ptr[10] + 148 &
                  255;
  flag_ptr[11] ^= flag_ptr[24] + flag_ptr[26] + flag_ptr[20] + flag_ptr[28] +
                      flag_ptr[15] + flag_ptr[35] + 7 &
                  255;
  flag_ptr[26] += flag_ptr[16] + flag_ptr[36] + flag_ptr[33] + flag_ptr[2] +
                  flag_ptr[13] + flag_ptr[20] + 17;
  flag_ptr[26] &= 255;
  flag_ptr[13] ^= flag_ptr[32] + flag_ptr[35] + flag_ptr[10] + flag_ptr[16] +
                      flag_ptr[40] + flag_ptr[22] + 187 &
                  255;
  flag_ptr[27] -= flag_ptr[7] + flag_ptr[1] + flag_ptr[42] + flag_ptr[29] +
                  flag_ptr[32] + flag_ptr[16] + 128;
  flag_ptr[27] &= 255;
  flag_ptr[15] ^= flag_ptr[36] + flag_ptr[23] + flag_ptr[31] + flag_ptr[0] +
                      flag_ptr[20] + flag_ptr[5] + 20 &
                  255;
  flag_ptr[37] -= flag_ptr[3] + flag_ptr[31] + flag_ptr[12] + flag_ptr[28] +
                  flag_ptr[41] + flag_ptr[2] + 222;
  flag_ptr[37] &= 255;
  flag_ptr[25] -= flag_ptr[2] + flag_ptr[19] + flag_ptr[29] + flag_ptr[3] +
                  flag_ptr[14] + flag_ptr[40] + 151;
  flag_ptr[25] &= 255;
  flag_ptr[8] += flag_ptr[1] + flag_ptr[25] + flag_ptr[39] + flag_ptr[34] +
                 flag_ptr[24] + flag_ptr[9] + 172;
  flag_ptr[8] &= 255;
  flag_ptr[2] ^= flag_ptr[29] + flag_ptr[1] + flag_ptr[26] + flag_ptr[42] +
                     flag_ptr[12] + flag_ptr[10] + 81 &
                 255;
  flag_ptr[24] ^= flag_ptr[8] + flag_ptr[30] + flag_ptr[3] + flag_ptr[41] +
                      flag_ptr[36] + flag_ptr[7] + 136 &
                  255;
  flag_ptr[25] ^= flag_ptr[43] + flag_ptr[5] + flag_ptr[32] + flag_ptr[38] +
                      flag_ptr[35] + flag_ptr[21] + 32 &
                  255;
  flag_ptr[30] ^= flag_ptr[27] + flag_ptr[40] + flag_ptr[17] + flag_ptr[43] +
                      flag_ptr[16] + flag_ptr[6] + 73 &
                  255;
  flag_ptr[24] += flag_ptr[39] + flag_ptr[14] + flag_ptr[18] + flag_ptr[36] +
                  flag_ptr[15] + flag_ptr[27] + 142;
  flag_ptr[24] &= 255;
  flag_ptr[8] += flag_ptr[3] + flag_ptr[20] + flag_ptr[16] + flag_ptr[17] +
                 flag_ptr[22] + flag_ptr[24] + 15;
  flag_ptr[8] &= 255;
  flag_ptr[17] ^= flag_ptr[20] + flag_ptr[32] + flag_ptr[10] + flag_ptr[38] +
                      flag_ptr[24] + flag_ptr[29] + 57 &
                  255;
  flag_ptr[25] -= flag_ptr[17] + flag_ptr[0] + flag_ptr[37] + flag_ptr[39] +
                  flag_ptr[11] + flag_ptr[28] + 228;
  flag_ptr[25] &= 255;
  flag_ptr[32] ^= flag_ptr[18] + flag_ptr[11] + flag_ptr[42] + flag_ptr[1] +
                      flag_ptr[27] + flag_ptr[14] + 241 &
                  255;
  flag_ptr[40] += flag_ptr[12] + flag_ptr[8] + flag_ptr[31] + flag_ptr[28] +
                  flag_ptr[4] + flag_ptr[2] + 26;
  flag_ptr[40] &= 255;
  flag_ptr[16] ^= flag_ptr[13] + flag_ptr[41] + flag_ptr[3] + flag_ptr[40] +
                      flag_ptr[8] + flag_ptr[14] + 17 &
                  255;
  flag_ptr[43] += flag_ptr[26] + flag_ptr[3] + flag_ptr[25] + flag_ptr[0] +
                  flag_ptr[31] + flag_ptr[21] + 81;
  flag_ptr[43] &= 255;
  flag_ptr[31] += flag_ptr[13] + flag_ptr[16] + flag_ptr[43] + flag_ptr[33] +
                  flag_ptr[35] + flag_ptr[41] + 129;
  flag_ptr[31] &= 255;
  flag_ptr[38] -= flag_ptr[14] + flag_ptr[3] + flag_ptr[35] + flag_ptr[40] +
                  flag_ptr[6] + flag_ptr[5] + 122;
  flag_ptr[38] &= 255;
  flag_ptr[17] += flag_ptr[3] + flag_ptr[13] + flag_ptr[37] + flag_ptr[25] +
                  flag_ptr[8] + flag_ptr[0] + 53;
  flag_ptr[17] &= 255;
  flag_ptr[39] -= flag_ptr[8] + flag_ptr[14] + flag_ptr[41] + flag_ptr[13] +
                  flag_ptr[15] + flag_ptr[33] + 164;
  flag_ptr[39] &= 255;
  flag_ptr[29] += flag_ptr[43] + flag_ptr[39] + flag_ptr[38] + flag_ptr[26] +
                  flag_ptr[28] + flag_ptr[17] + 103;
  flag_ptr[29] &= 255;
  flag_ptr[25] -= flag_ptr[31] + flag_ptr[7] + flag_ptr[30] + flag_ptr[38] +
                  flag_ptr[39] + flag_ptr[29] + 174;
  flag_ptr[25] &= 255;
  flag_ptr[38] -= flag_ptr[24] + flag_ptr[23] + flag_ptr[36] + flag_ptr[32] +
                  flag_ptr[7] + flag_ptr[2] + 136;
  flag_ptr[38] &= 255;
  flag_ptr[4] -= flag_ptr[42] + flag_ptr[6] + flag_ptr[26] + flag_ptr[39] +
                 flag_ptr[35] + flag_ptr[16] + 80;
  flag_ptr[4] &= 255;
  flag_ptr[19] ^= flag_ptr[13] + flag_ptr[36] + flag_ptr[38] + flag_ptr[1] +
                      flag_ptr[2] + flag_ptr[24] + 210 &
                  255;
  flag_ptr[6] += flag_ptr[24] + flag_ptr[36] + flag_ptr[43] + flag_ptr[29] +
                 flag_ptr[16] + flag_ptr[10] + 182;
  flag_ptr[6] &= 255;
  flag_ptr[20] ^= flag_ptr[28] + flag_ptr[7] + flag_ptr[15] + flag_ptr[3] +
                      flag_ptr[12] + flag_ptr[19] + 246 &
                  255;
  flag_ptr[30] ^= flag_ptr[17] + flag_ptr[15] + flag_ptr[18] + flag_ptr[43] +
                      flag_ptr[29] + flag_ptr[16] + 27 &
                  255;
  flag_ptr[27] ^= flag_ptr[6] + flag_ptr[24] + flag_ptr[16] + flag_ptr[19] +
                      flag_ptr[13] + flag_ptr[14] + 35 &
                  255;
  flag_ptr[4] += flag_ptr[34] + flag_ptr[7] + flag_ptr[2] + flag_ptr[39] +
                 flag_ptr[5] + flag_ptr[43] + 139;
  flag_ptr[4] &= 255;
  flag_ptr[39] += flag_ptr[27] + flag_ptr[20] + flag_ptr[15] + flag_ptr[29] +
                  flag_ptr[36] + flag_ptr[16] + 196;
  flag_ptr[39] &= 255;
  flag_ptr[7] += flag_ptr[6] + flag_ptr[35] + flag_ptr[1] + flag_ptr[40] +
                 flag_ptr[36] + flag_ptr[33] + 95;
  flag_ptr[7] &= 255;
  flag_ptr[27] -= flag_ptr[1] + flag_ptr[26] + flag_ptr[10] + flag_ptr[29] +
                  flag_ptr[14] + flag_ptr[4] + 32;
  flag_ptr[27] &= 255;
  flag_ptr[8] ^= flag_ptr[13] + flag_ptr[26] + flag_ptr[10] + flag_ptr[4] +
                     flag_ptr[32] + flag_ptr[21] + 142 &
                 255;
  flag_ptr[20] ^= flag_ptr[24] + flag_ptr[32] + flag_ptr[29] + flag_ptr[9] +
                      flag_ptr[6] + flag_ptr[35] + 217 &
                  255;
  flag_ptr[32] += flag_ptr[42] + flag_ptr[43] + flag_ptr[34] + flag_ptr[17] +
                  flag_ptr[5] + flag_ptr[0] + 94;
  flag_ptr[32] &= 255;
  flag_ptr[19] ^= flag_ptr[3] + flag_ptr[6] + flag_ptr[5] + flag_ptr[33] +
                      flag_ptr[32] + flag_ptr[10] + 194 &
                  255;
  flag_ptr[0] ^= flag_ptr[20] + flag_ptr[18] + flag_ptr[34] + flag_ptr[43] +
                     flag_ptr[26] + flag_ptr[2] + 224 &
                 255;
  flag_ptr[42] ^= flag_ptr[14] + flag_ptr[6] + flag_ptr[29] + flag_ptr[16] +
                      flag_ptr[10] + flag_ptr[43] + 254 &
                  255;
  flag_ptr[42] ^= flag_ptr[13] + flag_ptr[2] + flag_ptr[20] + flag_ptr[16] +
                      flag_ptr[6] + flag_ptr[34] + 159 &
                  255;
  flag_ptr[14] ^= flag_ptr[41] + flag_ptr[5] + flag_ptr[40] + flag_ptr[33] +
                      flag_ptr[35] + flag_ptr[10] + 94 &
                  255;
  flag_ptr[22] ^= flag_ptr[0] + flag_ptr[36] + flag_ptr[28] + flag_ptr[14] +
                      flag_ptr[4] + flag_ptr[18] + 25 &
                  255;
  flag_ptr[11] ^= flag_ptr[36] + flag_ptr[0] + flag_ptr[6] + flag_ptr[21] +
                      flag_ptr[32] + flag_ptr[18] + 134 &
                  255;
  flag_ptr[8] += flag_ptr[13] + flag_ptr[4] + flag_ptr[36] + flag_ptr[28] +
                 flag_ptr[17] + flag_ptr[39] + 118;
  flag_ptr[8] &= 255;
  flag_ptr[32] -= flag_ptr[4] + flag_ptr[35] + flag_ptr[22] + flag_ptr[40] +
                  flag_ptr[28] + flag_ptr[39] + 46;
  flag_ptr[32] &= 255;
  flag_ptr[31] -= flag_ptr[22] + flag_ptr[41] + flag_ptr[24] + flag_ptr[34] +
                  flag_ptr[3] + flag_ptr[37] + 95;
  flag_ptr[31] &= 255;
  flag_ptr[19] ^= flag_ptr[26] + flag_ptr[28] + flag_ptr[24] + flag_ptr[20] +
                      flag_ptr[29] + flag_ptr[30] + 198 &
                  255;
  flag_ptr[5] += flag_ptr[6] + flag_ptr[36] + flag_ptr[20] + flag_ptr[33] +
                 flag_ptr[23] + flag_ptr[26] + 186;
  flag_ptr[5] &= 255;
  flag_ptr[22] -= flag_ptr[33] + flag_ptr[18] + flag_ptr[11] + flag_ptr[27] +
                  flag_ptr[41] + flag_ptr[31] + 208;
  flag_ptr[22] &= 255;
  flag_ptr[26] += flag_ptr[16] + flag_ptr[38] + flag_ptr[12] + flag_ptr[25] +
                  flag_ptr[24] + flag_ptr[0] + 68;
  flag_ptr[26] &= 255;
  flag_ptr[38] += flag_ptr[4] + flag_ptr[32] + flag_ptr[6] + flag_ptr[26] +
                  flag_ptr[25] + flag_ptr[22] + 44;
  flag_ptr[38] &= 255;
  flag_ptr[14] ^= flag_ptr[32] + flag_ptr[30] + flag_ptr[20] + flag_ptr[11] +
                      flag_ptr[3] + flag_ptr[41] + 154 &
                  255;
  flag_ptr[40] -= flag_ptr[21] + flag_ptr[3] + flag_ptr[14] + flag_ptr[13] +
                  flag_ptr[20] + flag_ptr[5] + 5;
  flag_ptr[40] &= 255;
  flag_ptr[31] ^= flag_ptr[26] + flag_ptr[43] + flag_ptr[7] + flag_ptr[37] +
                      flag_ptr[25] + flag_ptr[34] + 192 &
                  255;
  flag_ptr[6] += flag_ptr[4] + flag_ptr[40] + flag_ptr[15] + flag_ptr[37] +
                 flag_ptr[12] + flag_ptr[23] + 160;
  flag_ptr[6] &= 255;
  flag_ptr[31] += flag_ptr[21] + flag_ptr[35] + flag_ptr[22] + flag_ptr[17] +
                  flag_ptr[7] + flag_ptr[0] + 20;
  flag_ptr[31] &= 255;
  flag_ptr[13] ^= flag_ptr[14] + flag_ptr[35] + flag_ptr[22] + flag_ptr[4] +
                      flag_ptr[23] + flag_ptr[20] + 101 &
                  255;
  flag_ptr[31] ^= flag_ptr[28] + flag_ptr[32] + flag_ptr[14] + flag_ptr[26] +
                      flag_ptr[18] + flag_ptr[35] + 246 &
                  255;
  flag_ptr[34] ^= flag_ptr[23] + flag_ptr[28] + flag_ptr[8] + flag_ptr[20] +
                      flag_ptr[33] + flag_ptr[5] + 71 &
                  255;
  flag_ptr[2] ^= flag_ptr[8] + flag_ptr[28] + flag_ptr[29] + flag_ptr[26] +
                     flag_ptr[37] + flag_ptr[39] + 54 &
                 255;
  flag_ptr[21] += flag_ptr[1] + flag_ptr[30] + flag_ptr[36] + flag_ptr[43] +
                  flag_ptr[3] + flag_ptr[25] + 219;
  flag_ptr[21] &= 255;
  flag_ptr[26] -= flag_ptr[23] + flag_ptr[16] + flag_ptr[41] + flag_ptr[7] +
                  flag_ptr[27] + flag_ptr[18] + 119;
  flag_ptr[26] &= 255;
  flag_ptr[33] += flag_ptr[11] + flag_ptr[10] + flag_ptr[29] + flag_ptr[31] +
                  flag_ptr[42] + flag_ptr[1] + 145;
  flag_ptr[33] &= 255;
  flag_ptr[28] += flag_ptr[40] + flag_ptr[23] + flag_ptr[20] + flag_ptr[36] +
                  flag_ptr[22] + flag_ptr[27] + 232;
  flag_ptr[28] &= 255;
  flag_ptr[43] += flag_ptr[11] + flag_ptr[15] + flag_ptr[33] + flag_ptr[35] +
                  flag_ptr[21] + flag_ptr[25] + 197;
  flag_ptr[43] &= 255;
  flag_ptr[32] ^= flag_ptr[16] + flag_ptr[4] + flag_ptr[23] + flag_ptr[8] +
                      flag_ptr[41] + flag_ptr[29] + 142 &
                  255;
  flag_ptr[33] -= flag_ptr[16] + flag_ptr[13] + flag_ptr[1] + flag_ptr[29] +
                  flag_ptr[30] + flag_ptr[40] + 77;
  flag_ptr[33] &= 255;
  flag_ptr[20] += flag_ptr[3] + flag_ptr[12] + flag_ptr[40] + flag_ptr[43] +
                  flag_ptr[15] + flag_ptr[28] + 205;
  flag_ptr[20] &= 255;
  flag_ptr[24] ^= flag_ptr[14] + flag_ptr[33] + flag_ptr[2] + flag_ptr[26] +
                      flag_ptr[19] + flag_ptr[8] + 75 &
                  255;
  flag_ptr[37] -= flag_ptr[30] + flag_ptr[21] + flag_ptr[35] + flag_ptr[13] +
                  flag_ptr[19] + flag_ptr[26] + 208;
  flag_ptr[37] &= 255;
  flag_ptr[25] += flag_ptr[40] + flag_ptr[2] + flag_ptr[18] + flag_ptr[35] +
                  flag_ptr[15] + flag_ptr[32] + 16;
  flag_ptr[25] &= 255;
  flag_ptr[8] -= flag_ptr[12] + flag_ptr[6] + flag_ptr[1] + flag_ptr[21] +
                 flag_ptr[28] + flag_ptr[25] + 55;
  flag_ptr[8] &= 255;
  flag_ptr[30] ^= flag_ptr[29] + flag_ptr[4] + flag_ptr[10] + flag_ptr[40] +
                      flag_ptr[7] + flag_ptr[9] + 189 &
                  255;
  flag_ptr[4] -= flag_ptr[38] + flag_ptr[0] + flag_ptr[13] + flag_ptr[16] +
                 flag_ptr[3] + flag_ptr[18] + 170;
  flag_ptr[4] &= 255;
  flag_ptr[25] += flag_ptr[10] + flag_ptr[31] + flag_ptr[30] + flag_ptr[21] +
                  flag_ptr[3] + flag_ptr[40] + 227;
  flag_ptr[25] &= 255;
  flag_ptr[4] -= flag_ptr[1] + flag_ptr[17] + flag_ptr[0] + flag_ptr[15] +
                 flag_ptr[19] + flag_ptr[41] + 192;
  flag_ptr[4] &= 255;
  flag_ptr[8] += flag_ptr[30] + flag_ptr[1] + flag_ptr[37] + flag_ptr[6] +
                 flag_ptr[26] + flag_ptr[10] + 198;
  flag_ptr[8] &= 255;
  flag_ptr[20] -= flag_ptr[19] + flag_ptr[7] + flag_ptr[11] + flag_ptr[33] +
                  flag_ptr[18] + flag_ptr[1] + 177;
  flag_ptr[20] &= 255;
  flag_ptr[11] -= flag_ptr[6] + flag_ptr[19] + flag_ptr[33] + flag_ptr[43] +
                  flag_ptr[3] + flag_ptr[21] + 60;
  flag_ptr[11] &= 255;
  flag_ptr[31] += flag_ptr[4] + flag_ptr[21] + flag_ptr[19] + flag_ptr[27] +
                  flag_ptr[37] + flag_ptr[33] + 251;
  flag_ptr[31] &= 255;
  flag_ptr[10] -= flag_ptr[9] + flag_ptr[32] + flag_ptr[42] + flag_ptr[41] +
                  flag_ptr[21] + flag_ptr[8] + 100;
  flag_ptr[10] &= 255;
  flag_ptr[20] += flag_ptr[34] + flag_ptr[25] + flag_ptr[10] + flag_ptr[3] +
                  flag_ptr[31] + flag_ptr[37] + 136;
  flag_ptr[20] &= 255;
  flag_ptr[1] -= flag_ptr[37] + flag_ptr[40] + flag_ptr[30] + flag_ptr[6] +
                 flag_ptr[38] + flag_ptr[19] + 192;
  flag_ptr[1] &= 255;
  flag_ptr[34] -= flag_ptr[15] + flag_ptr[29] + flag_ptr[5] + flag_ptr[2] +
                  flag_ptr[39] + flag_ptr[0] + 153;
  flag_ptr[34] &= 255;
  flag_ptr[10] -= flag_ptr[23] + flag_ptr[32] + flag_ptr[37] + flag_ptr[28] +
                  flag_ptr[39] + flag_ptr[21] + 233;
  flag_ptr[10] &= 255;
  flag_ptr[4] += flag_ptr[8] + flag_ptr[13] + flag_ptr[3] + flag_ptr[34] +
                 flag_ptr[22] + flag_ptr[14] + 246;
  flag_ptr[4] &= 255;
  flag_ptr[36] += flag_ptr[6] + flag_ptr[21] + flag_ptr[18] + flag_ptr[31] +
                  flag_ptr[15] + flag_ptr[7] + 176;
  flag_ptr[36] &= 255;
  flag_ptr[42] += flag_ptr[43] + flag_ptr[7] + flag_ptr[18] + flag_ptr[20] +
                  flag_ptr[2] + flag_ptr[9] + 43;
  flag_ptr[42] &= 255;
  flag_ptr[24] ^= flag_ptr[38] + flag_ptr[40] + flag_ptr[42] + flag_ptr[25] +
                      flag_ptr[13] + flag_ptr[43] + 64 &
                  255;
  flag_ptr[11] ^= flag_ptr[5] + flag_ptr[20] + flag_ptr[14] + flag_ptr[28] +
                      flag_ptr[42] + flag_ptr[22] + 149 &
                  255;
  flag_ptr[1] -= flag_ptr[20] + flag_ptr[32] + flag_ptr[25] + flag_ptr[35] +
                 flag_ptr[10] + flag_ptr[18] + 147;
  flag_ptr[1] &= 255;
  flag_ptr[27] += flag_ptr[17] + flag_ptr[7] + flag_ptr[0] + flag_ptr[1] +
                  flag_ptr[34] + flag_ptr[14] + 128;
  flag_ptr[27] &= 255;
  flag_ptr[12] -= flag_ptr[1] + flag_ptr[33] + flag_ptr[11] + flag_ptr[10] +
                  flag_ptr[37] + flag_ptr[8] + 155;
  flag_ptr[12] &= 255;
  flag_ptr[6] ^= flag_ptr[24] + flag_ptr[19] + flag_ptr[12] + flag_ptr[10] +
                     flag_ptr[8] + flag_ptr[34] + 3 &
                 255;
  flag_ptr[33] += flag_ptr[40] + flag_ptr[17] + flag_ptr[43] + flag_ptr[21] +
                  flag_ptr[36] + flag_ptr[23] + 76;
  flag_ptr[33] &= 255;
  flag_ptr[10] += flag_ptr[9] + flag_ptr[39] + flag_ptr[6] + flag_ptr[32] +
                  flag_ptr[11] + flag_ptr[35] + 18;
  flag_ptr[10] &= 255;
  flag_ptr[10] -= flag_ptr[25] + flag_ptr[0] + flag_ptr[28] + flag_ptr[35] +
                  flag_ptr[5] + flag_ptr[30] + 240;
  flag_ptr[10] &= 255;
  flag_ptr[21] -= flag_ptr[4] + flag_ptr[31] + flag_ptr[25] + flag_ptr[22] +
                  flag_ptr[2] + flag_ptr[3] + 237;
  flag_ptr[21] &= 255;
  flag_ptr[28] ^= flag_ptr[13] + flag_ptr[9] + flag_ptr[35] + flag_ptr[23] +
                      flag_ptr[18] + flag_ptr[39] + 117 &
                  255;
  flag_ptr[22] += flag_ptr[37] + flag_ptr[26] + flag_ptr[14] + flag_ptr[41] +
                  flag_ptr[30] + flag_ptr[6] + 248;
  flag_ptr[22] &= 255;
  flag_ptr[34] += flag_ptr[30] + flag_ptr[17] + flag_ptr[38] + flag_ptr[41] +
                  flag_ptr[5] + flag_ptr[42] + 170;
  flag_ptr[34] &= 255;
  flag_ptr[22] -= flag_ptr[13] + flag_ptr[6] + flag_ptr[1] + flag_ptr[23] +
                  flag_ptr[43] + flag_ptr[32] + 120;
  flag_ptr[22] &= 255;
  flag_ptr[0] += flag_ptr[17] + flag_ptr[10] + flag_ptr[16] + flag_ptr[38] +
                 flag_ptr[22] + flag_ptr[15] + 112;
  flag_ptr[0] &= 255;
  flag_ptr[0] ^= flag_ptr[21] + flag_ptr[10] + flag_ptr[29] + flag_ptr[30] +
                     flag_ptr[13] + flag_ptr[17] + 60 &
                 255;
  flag_ptr[23] += flag_ptr[36] + flag_ptr[26] + flag_ptr[8] + flag_ptr[4] +
                  flag_ptr[10] + flag_ptr[7] + 147;
  flag_ptr[23] &= 255;
  flag_ptr[32] ^= flag_ptr[41] + flag_ptr[30] + flag_ptr[5] + flag_ptr[23] +
                      flag_ptr[28] + flag_ptr[39] + 217 &
                  255;
  flag_ptr[0] -= flag_ptr[34] + flag_ptr[3] + flag_ptr[41] + flag_ptr[28] +
                 flag_ptr[29] + flag_ptr[36] + 187;
  flag_ptr[0] &= 255;
  flag_ptr[0] ^= flag_ptr[26] + flag_ptr[4] + flag_ptr[34] + flag_ptr[16] +
                     flag_ptr[15] + flag_ptr[7] + 115 &
                 255;
  flag_ptr[43] ^= flag_ptr[11] + flag_ptr[17] + flag_ptr[36] + flag_ptr[26] +
                      flag_ptr[30] + flag_ptr[8] + 200 &
                  255;
  flag_ptr[5] -= flag_ptr[31] + flag_ptr[43] + flag_ptr[1] + flag_ptr[8] +
                 flag_ptr[6] + flag_ptr[41] + 246;
  flag_ptr[5] &= 255;
  flag_ptr[30] ^= flag_ptr[43] + flag_ptr[38] + flag_ptr[12] + flag_ptr[33] +
                      flag_ptr[34] + flag_ptr[11] + 8 &
                  255;
  flag_ptr[21] ^= flag_ptr[5] + flag_ptr[27] + flag_ptr[17] + flag_ptr[2] +
                      flag_ptr[9] + flag_ptr[6] + 122 &
                  255;
  flag_ptr[16] += flag_ptr[30] + flag_ptr[0] + flag_ptr[3] + flag_ptr[34] +
                  flag_ptr[15] + flag_ptr[21] + 26;
  flag_ptr[16] &= 255;
  flag_ptr[14] -= flag_ptr[35] + flag_ptr[18] + flag_ptr[2] + flag_ptr[22] +
                  flag_ptr[33] + flag_ptr[25] + 213;
  flag_ptr[14] &= 255;
  flag_ptr[3] -= flag_ptr[26] + flag_ptr[35] + flag_ptr[23] + flag_ptr[36] +
                 flag_ptr[10] + flag_ptr[5] + 33;
  flag_ptr[3] &= 255;
  flag_ptr[12] += flag_ptr[40] + flag_ptr[9] + flag_ptr[38] + flag_ptr[37] +
                  flag_ptr[36] + flag_ptr[31] + 169;
  flag_ptr[12] &= 255;
  flag_ptr[42] += flag_ptr[36] + flag_ptr[41] + flag_ptr[12] + flag_ptr[21] +
                  flag_ptr[19] + flag_ptr[23] + 89;
  flag_ptr[42] &= 255;
  flag_ptr[0] += flag_ptr[39] + flag_ptr[5] + flag_ptr[14] + flag_ptr[43] +
                 flag_ptr[25] + flag_ptr[36] + 164;
  flag_ptr[0] &= 255;
  flag_ptr[30] ^= flag_ptr[16] + flag_ptr[40] + flag_ptr[42] + flag_ptr[32] +
                      flag_ptr[2] + flag_ptr[41] + 149 &
                  255;
  flag_ptr[22] -= flag_ptr[1] + flag_ptr[40] + flag_ptr[13] + flag_ptr[17] +
                  flag_ptr[38] + flag_ptr[20] + 151;
  flag_ptr[22] &= 255;
  flag_ptr[23] += flag_ptr[15] + flag_ptr[32] + flag_ptr[35] + flag_ptr[0] +
                  flag_ptr[8] + flag_ptr[22] + 146;
  flag_ptr[23] &= 255;
  flag_ptr[26] -= flag_ptr[31] + flag_ptr[22] + flag_ptr[40] + flag_ptr[23] +
                  flag_ptr[4] + flag_ptr[25] + 15;
  flag_ptr[26] &= 255;
  flag_ptr[28] ^= flag_ptr[23] + flag_ptr[19] + flag_ptr[38] + flag_ptr[31] +
                      flag_ptr[32] + flag_ptr[18] + 118 &
                  255;
  flag_ptr[7] += flag_ptr[4] + flag_ptr[34] + flag_ptr[24] + flag_ptr[30] +
                 flag_ptr[35] + flag_ptr[20] + 225;
  flag_ptr[7] &= 255;
  flag_ptr[12] -= flag_ptr[8] + flag_ptr[0] + flag_ptr[3] + flag_ptr[24] +
                  flag_ptr[33] + flag_ptr[42] + 152;
  flag_ptr[12] &= 255;
  flag_ptr[31] -= flag_ptr[33] + flag_ptr[6] + flag_ptr[1] + flag_ptr[29] +
                  flag_ptr[23] + flag_ptr[4] + 89;
  flag_ptr[31] &= 255;
  flag_ptr[23] += flag_ptr[30] + flag_ptr[6] + flag_ptr[10] + flag_ptr[40] +
                  flag_ptr[15] + flag_ptr[37] + 35;
  flag_ptr[23] &= 255;
  flag_ptr[25] -= flag_ptr[20] + flag_ptr[5] + flag_ptr[21] + flag_ptr[22] +
                  flag_ptr[17] + flag_ptr[1] + 130;
  flag_ptr[25] &= 255;
  flag_ptr[6] -= flag_ptr[16] + flag_ptr[25] + flag_ptr[36] + flag_ptr[40] +
                 flag_ptr[31] + flag_ptr[5] + 50;
  flag_ptr[6] &= 255;
  flag_ptr[42] -= flag_ptr[24] + flag_ptr[9] + flag_ptr[29] + flag_ptr[41] +
                  flag_ptr[23] + flag_ptr[33] + 28;
  flag_ptr[42] &= 255;
  flag_ptr[2] -= flag_ptr[10] + flag_ptr[36] + flag_ptr[13] + flag_ptr[22] +
                 flag_ptr[27] + flag_ptr[14] + 61;
  flag_ptr[2] &= 255;
  flag_ptr[1] -= flag_ptr[32] + flag_ptr[42] + flag_ptr[41] + flag_ptr[33] +
                 flag_ptr[39] + flag_ptr[28] + 75;
  flag_ptr[1] &= 255;
  flag_ptr[37] ^= flag_ptr[33] + flag_ptr[7] + flag_ptr[1] + flag_ptr[35] +
                      flag_ptr[36] + flag_ptr[19] + 206 &
                  255;
  flag_ptr[11] -= flag_ptr[24] + flag_ptr[9] + flag_ptr[13] + flag_ptr[33] +
                  flag_ptr[39] + flag_ptr[22] + 116;
  flag_ptr[11] &= 255;
  flag_ptr[14] += flag_ptr[39] + flag_ptr[4] + flag_ptr[25] + flag_ptr[27] +
                  flag_ptr[35] + flag_ptr[7] + 0;
  flag_ptr[14] &= 255;
  flag_ptr[32] ^= flag_ptr[4] + flag_ptr[14] + flag_ptr[43] + flag_ptr[42] +
                      flag_ptr[9] + flag_ptr[27] + 187 &
                  255;
  flag_ptr[39] -= flag_ptr[30] + flag_ptr[27] + flag_ptr[6] + flag_ptr[31] +
                  flag_ptr[13] + flag_ptr[42] + 106;
  flag_ptr[39] &= 255;
  flag_ptr[22] -= flag_ptr[29] + flag_ptr[7] + flag_ptr[32] + flag_ptr[34] +
                  flag_ptr[4] + flag_ptr[36] + 113;
  flag_ptr[22] &= 255;
  flag_ptr[17] -= flag_ptr[2] + flag_ptr[34] + flag_ptr[10] + flag_ptr[20] +
                  flag_ptr[13] + flag_ptr[37] + 205;
  flag_ptr[17] &= 255;
  flag_ptr[21] -= flag_ptr[31] + flag_ptr[13] + flag_ptr[2] + flag_ptr[15] +
                  flag_ptr[34] + flag_ptr[37] + 41;
  flag_ptr[21] &= 255;
  flag_ptr[13] += flag_ptr[14] + flag_ptr[35] + flag_ptr[43] + flag_ptr[3] +
                  flag_ptr[16] + flag_ptr[31] + 210;
  flag_ptr[13] &= 255;
  flag_ptr[35] ^= flag_ptr[37] + flag_ptr[43] + flag_ptr[27] + flag_ptr[22] +
                      flag_ptr[31] + flag_ptr[15] + 150 &
                  255;
  flag_ptr[3] ^= flag_ptr[17] + flag_ptr[22] + flag_ptr[20] + flag_ptr[7] +
                     flag_ptr[12] + flag_ptr[14] + 152 &
                 255;
  flag_ptr[11] ^= flag_ptr[30] + flag_ptr[38] + flag_ptr[6] + flag_ptr[22] +
                      flag_ptr[3] + flag_ptr[18] + 218 &
                  255;
  flag_ptr[7] ^= flag_ptr[16] + flag_ptr[24] + flag_ptr[28] + flag_ptr[32] +
                     flag_ptr[4] + flag_ptr[5] + 246 &
                 255;
  flag_ptr[35] ^= flag_ptr[24] + flag_ptr[43] + flag_ptr[21] + flag_ptr[2] +
                      flag_ptr[34] + flag_ptr[40] + 28 &
                  255;
  flag_ptr[5] += flag_ptr[25] + flag_ptr[38] + flag_ptr[18] + flag_ptr[34] +
                 flag_ptr[24] + flag_ptr[20] + 89;
  flag_ptr[5] &= 255;
  flag_ptr[3] -= flag_ptr[38] + flag_ptr[9] + flag_ptr[11] + flag_ptr[8] +
                 flag_ptr[34] + flag_ptr[7] + 167;
  flag_ptr[3] &= 255;
  flag_ptr[32] += flag_ptr[1] + flag_ptr[2] + flag_ptr[18] + flag_ptr[43] +
                  flag_ptr[27] + flag_ptr[29] + 127;
  flag_ptr[32] &= 255;
  flag_ptr[33] += flag_ptr[21] + flag_ptr[9] + flag_ptr[31] + flag_ptr[6] +
                  flag_ptr[20] + flag_ptr[11] + 1;
  flag_ptr[33] &= 255;
  flag_ptr[23] += flag_ptr[34] + flag_ptr[7] + flag_ptr[32] + flag_ptr[2] +
                  flag_ptr[12] + flag_ptr[11] + 30;
  flag_ptr[23] &= 255;
  flag_ptr[41] -= flag_ptr[27] + flag_ptr[21] + flag_ptr[24] + flag_ptr[22] +
                  flag_ptr[28] + flag_ptr[12] + 139;
  flag_ptr[41] &= 255;
  flag_ptr[31] -= flag_ptr[29] + flag_ptr[17] + flag_ptr[0] + flag_ptr[13] +
                  flag_ptr[5] + flag_ptr[40] + 136;
  flag_ptr[31] &= 255;
  flag_ptr[42] ^= flag_ptr[43] + flag_ptr[6] + flag_ptr[18] + flag_ptr[1] +
                      flag_ptr[12] + flag_ptr[23] + 96 &
                  255;
  flag_ptr[5] += flag_ptr[15] + flag_ptr[20] + flag_ptr[28] + flag_ptr[38] +
                 flag_ptr[35] + flag_ptr[16] + 190;
  flag_ptr[5] &= 255;
  flag_ptr[6] -= flag_ptr[30] + flag_ptr[29] + flag_ptr[14] + flag_ptr[35] +
                 flag_ptr[15] + flag_ptr[20] + 20;
  flag_ptr[6] &= 255;
  flag_ptr[33] -= flag_ptr[28] + flag_ptr[34] + flag_ptr[27] + flag_ptr[36] +
                  flag_ptr[3] + flag_ptr[39] + 238;
  flag_ptr[33] &= 255;
  flag_ptr[40] ^= flag_ptr[30] + flag_ptr[28] + flag_ptr[20] + flag_ptr[33] +
                      flag_ptr[9] + flag_ptr[22] + 84 &
                  255;
  flag_ptr[26] += flag_ptr[29] + flag_ptr[27] + flag_ptr[2] + flag_ptr[3] +
                  flag_ptr[5] + flag_ptr[9] + 244;
  flag_ptr[26] &= 255;
  flag_ptr[42] += flag_ptr[7] + flag_ptr[13] + flag_ptr[3] + flag_ptr[6] +
                  flag_ptr[28] + flag_ptr[5] + 243;
  flag_ptr[42] &= 255;
  flag_ptr[20] ^= flag_ptr[34] + flag_ptr[23] + flag_ptr[21] + flag_ptr[0] +
                      flag_ptr[25] + flag_ptr[12] + 14 &
                  255;
  flag_ptr[24] -= flag_ptr[8] + flag_ptr[35] + flag_ptr[21] + flag_ptr[9] +
                  flag_ptr[2] + flag_ptr[22] + 20;
  flag_ptr[24] &= 255;
  flag_ptr[38] += flag_ptr[27] + flag_ptr[5] + flag_ptr[3] + flag_ptr[19] +
                  flag_ptr[2] + flag_ptr[18] + 8;
  flag_ptr[38] &= 255;
  flag_ptr[31] += flag_ptr[8] + flag_ptr[42] + flag_ptr[38] + flag_ptr[19] +
                  flag_ptr[22] + flag_ptr[25] + 138;
  flag_ptr[31] &= 255;
  flag_ptr[39] -= flag_ptr[18] + flag_ptr[28] + flag_ptr[42] + flag_ptr[40] +
                  flag_ptr[2] + flag_ptr[11] + 91;
  flag_ptr[39] &= 255;
  flag_ptr[0] ^= flag_ptr[40] + flag_ptr[36] + flag_ptr[42] + flag_ptr[23] +
                     flag_ptr[17] + flag_ptr[34] + 149 &
                 255;
  flag_ptr[23] -= flag_ptr[32] + flag_ptr[13] + flag_ptr[35] + flag_ptr[34] +
                  flag_ptr[14] + flag_ptr[1] + 195;
  flag_ptr[23] &= 255;
  flag_ptr[20] ^= flag_ptr[14] + flag_ptr[7] + flag_ptr[4] + flag_ptr[0] +
                      flag_ptr[29] + flag_ptr[8] + 172 &
                  255;
  flag_ptr[2] ^= flag_ptr[32] + flag_ptr[41] + flag_ptr[24] + flag_ptr[22] +
                     flag_ptr[17] + flag_ptr[21] + 18 &
                 255;
  flag_ptr[21] += flag_ptr[32] + flag_ptr[16] + flag_ptr[27] + flag_ptr[17] +
                  flag_ptr[10] + flag_ptr[15] + 37;
  flag_ptr[21] &= 255;
  flag_ptr[27] -= flag_ptr[13] + flag_ptr[31] + flag_ptr[1] + flag_ptr[23] +
                  flag_ptr[43] + flag_ptr[17] + 248;
  flag_ptr[27] &= 255;
  flag_ptr[18] -= flag_ptr[29] + flag_ptr[0] + flag_ptr[14] + flag_ptr[21] +
                  flag_ptr[24] + flag_ptr[2] + 70;
  flag_ptr[18] &= 255;
  flag_ptr[39] ^= flag_ptr[38] + flag_ptr[37] + flag_ptr[22] + flag_ptr[32] +
                      flag_ptr[26] + flag_ptr[9] + 229 &
                  255;
  flag_ptr[5] ^= flag_ptr[20] + flag_ptr[25] + flag_ptr[35] + flag_ptr[42] +
                     flag_ptr[18] + flag_ptr[12] + 137 &
                 255;
  flag_ptr[42] -= flag_ptr[32] + flag_ptr[27] + flag_ptr[40] + flag_ptr[28] +
                  flag_ptr[33] + flag_ptr[9] + 74;
  flag_ptr[42] &= 255;
  flag_ptr[30] -= flag_ptr[34] + flag_ptr[23] + flag_ptr[5] + flag_ptr[37] +
                  flag_ptr[33] + flag_ptr[12] + 60;
  flag_ptr[30] &= 255;
  flag_ptr[11] += flag_ptr[17] + flag_ptr[25] + flag_ptr[9] + flag_ptr[2] +
                  flag_ptr[34] + flag_ptr[18] + 115;
  flag_ptr[11] &= 255;
  flag_ptr[32] += flag_ptr[26] + flag_ptr[15] + flag_ptr[4] + flag_ptr[21] +
                  flag_ptr[6] + flag_ptr[29] + 27;
  flag_ptr[32] &= 255;
  flag_ptr[26] -= flag_ptr[29] + flag_ptr[20] + flag_ptr[22] + flag_ptr[5] +
                  flag_ptr[13] + flag_ptr[27] + 202;
  flag_ptr[26] &= 255;
  flag_ptr[18] += flag_ptr[13] + flag_ptr[28] + flag_ptr[30] + flag_ptr[22] +
                  flag_ptr[1] + flag_ptr[11] + 104;
  flag_ptr[18] &= 255;
  flag_ptr[43] += flag_ptr[29] + flag_ptr[35] + flag_ptr[36] + flag_ptr[2] +
                  flag_ptr[33] + flag_ptr[28] + 236;
  flag_ptr[43] &= 255;
  flag_ptr[1] ^= flag_ptr[16] + flag_ptr[36] + flag_ptr[17] + flag_ptr[39] +
                     flag_ptr[35] + flag_ptr[9] + 108 &
                 255;
  flag_ptr[9] += flag_ptr[27] + flag_ptr[19] + flag_ptr[33] + flag_ptr[24] +
                 flag_ptr[10] + flag_ptr[17] + 159;
  flag_ptr[9] &= 255;
  flag_ptr[7] -= flag_ptr[19] + flag_ptr[32] + flag_ptr[13] + flag_ptr[29] +
                 flag_ptr[35] + flag_ptr[43] + 62;
  flag_ptr[7] &= 255;
  flag_ptr[11] -= flag_ptr[16] + flag_ptr[9] + flag_ptr[43] + flag_ptr[21] +
                  flag_ptr[7] + flag_ptr[25] + 219;
  flag_ptr[11] &= 255;
  flag_ptr[16] ^= flag_ptr[11] + flag_ptr[30] + flag_ptr[37] + flag_ptr[26] +
                      flag_ptr[6] + flag_ptr[33] + 43 &
                  255;
  flag_ptr[12] -= flag_ptr[29] + flag_ptr[2] + flag_ptr[32] + flag_ptr[7] +
                  flag_ptr[6] + flag_ptr[23] + 5;
  flag_ptr[12] &= 255;
  flag_ptr[43] -= flag_ptr[32] + flag_ptr[34] + flag_ptr[16] + flag_ptr[29] +
                  flag_ptr[39] + flag_ptr[4] + 243;
  flag_ptr[43] &= 255;
  flag_ptr[39] += flag_ptr[24] + flag_ptr[5] + flag_ptr[41] + flag_ptr[6] +
                  flag_ptr[8] + flag_ptr[33] + 137;
  flag_ptr[39] &= 255;
  flag_ptr[3] ^= flag_ptr[22] + flag_ptr[15] + flag_ptr[43] + flag_ptr[26] +
                     flag_ptr[13] + flag_ptr[41] + 238 &
                 255;
  flag_ptr[26] -= flag_ptr[23] + flag_ptr[24] + flag_ptr[34] + flag_ptr[11] +
                  flag_ptr[15] + flag_ptr[3] + 125;
  flag_ptr[26] &= 255;
  flag_ptr[11] ^= flag_ptr[2] + flag_ptr[21] + flag_ptr[40] + flag_ptr[42] +
                      flag_ptr[43] + flag_ptr[35] + 255 &
                  255;
  flag_ptr[7] ^= flag_ptr[6] + flag_ptr[43] + flag_ptr[37] + flag_ptr[12] +
                     flag_ptr[38] + flag_ptr[32] + 9 &
                 255;
  flag_ptr[28] -= flag_ptr[1] + flag_ptr[9] + flag_ptr[6] + flag_ptr[43] +
                  flag_ptr[3] + flag_ptr[10] + 51;
  flag_ptr[28] &= 255;
  flag_ptr[36] ^= flag_ptr[11] + flag_ptr[9] + flag_ptr[37] + flag_ptr[32] +
                      flag_ptr[12] + flag_ptr[27] + 20 &
                  255;
  flag_ptr[13] ^= flag_ptr[34] + flag_ptr[25] + flag_ptr[40] + flag_ptr[6] +
                      flag_ptr[39] + flag_ptr[17] + 19 &
                  255;
  flag_ptr[37] ^= flag_ptr[6] + flag_ptr[3] + flag_ptr[31] + flag_ptr[9] +
                      flag_ptr[42] + flag_ptr[32] + 22 &
                  255;
  flag_ptr[27] -= flag_ptr[12] + flag_ptr[17] + flag_ptr[9] + flag_ptr[33] +
                  flag_ptr[3] + flag_ptr[21] + 161;
  flag_ptr[27] &= 255;
  flag_ptr[11] ^= flag_ptr[25] + flag_ptr[10] + flag_ptr[9] + flag_ptr[2] +
                      flag_ptr[8] + flag_ptr[26] + 44 &
                  255;
  flag_ptr[7] ^= flag_ptr[31] + flag_ptr[32] + flag_ptr[1] + flag_ptr[36] +
                     flag_ptr[12] + flag_ptr[40] + 68 &
                 255;
  flag_ptr[13] += flag_ptr[17] + flag_ptr[40] + flag_ptr[32] + flag_ptr[21] +
                  flag_ptr[5] + flag_ptr[12] + 5;
  flag_ptr[13] &= 255;
  flag_ptr[25] -= flag_ptr[38] + flag_ptr[26] + flag_ptr[39] + flag_ptr[33] +
                  flag_ptr[40] + flag_ptr[20] + 129;
  flag_ptr[25] &= 255;
  flag_ptr[3] -= flag_ptr[35] + flag_ptr[28] + flag_ptr[24] + flag_ptr[7] +
                 flag_ptr[17] + flag_ptr[6] + 202;
  flag_ptr[3] &= 255;
  flag_ptr[8] += flag_ptr[16] + flag_ptr[38] + flag_ptr[27] + flag_ptr[21] +
                 flag_ptr[31] + flag_ptr[3] + 10;
  flag_ptr[8] &= 255;
  flag_ptr[43] ^= flag_ptr[34] + flag_ptr[28] + flag_ptr[20] + flag_ptr[31] +
                      flag_ptr[7] + flag_ptr[5] + 175 &
                  255;
  flag_ptr[1] ^= flag_ptr[22] + flag_ptr[43] + flag_ptr[37] + flag_ptr[11] +
                     flag_ptr[27] + flag_ptr[15] + 99 &
                 255;
  flag_ptr[29] ^= flag_ptr[19] + flag_ptr[0] + flag_ptr[11] + flag_ptr[25] +
                      flag_ptr[4] + flag_ptr[36] + 32 &
                  255;
  flag_ptr[34] -= flag_ptr[2] + flag_ptr[27] + flag_ptr[31] + flag_ptr[28] +
                  flag_ptr[18] + flag_ptr[5] + 29;
  flag_ptr[34] &= 255;
  flag_ptr[22] += flag_ptr[5] + flag_ptr[4] + flag_ptr[2] + flag_ptr[15] +
                  flag_ptr[25] + flag_ptr[23] + 123;
  flag_ptr[22] &= 255;
  flag_ptr[11] -= flag_ptr[43] + flag_ptr[24] + flag_ptr[34] + flag_ptr[5] +
                  flag_ptr[32] + flag_ptr[17] + 15;
  flag_ptr[11] &= 255;
  flag_ptr[25] += flag_ptr[15] + flag_ptr[16] + flag_ptr[29] + flag_ptr[37] +
                  flag_ptr[1] + flag_ptr[40] + 24;
  flag_ptr[25] &= 255;
  flag_ptr[25] += flag_ptr[22] + flag_ptr[3] + flag_ptr[0] + flag_ptr[43] +
                  flag_ptr[40] + flag_ptr[26] + 76;
  flag_ptr[25] &= 255;
  flag_ptr[19] += flag_ptr[31] + flag_ptr[15] + flag_ptr[6] + flag_ptr[20] +
                  flag_ptr[26] + flag_ptr[25] + 254;
  flag_ptr[19] &= 255;
  flag_ptr[40] -= flag_ptr[29] + flag_ptr[0] + flag_ptr[14] + flag_ptr[10] +
                  flag_ptr[15] + flag_ptr[31] + 244;
  flag_ptr[40] &= 255;
  flag_ptr[35] ^= flag_ptr[12] + flag_ptr[20] + flag_ptr[21] + flag_ptr[18] +
                      flag_ptr[13] + flag_ptr[14] + 241 &
                  255;
  flag_ptr[12] += flag_ptr[39] + flag_ptr[11] + flag_ptr[40] + flag_ptr[18] +
                  flag_ptr[8] + flag_ptr[17] + 210;
  flag_ptr[12] &= 255;
  flag_ptr[1] ^= flag_ptr[29] + flag_ptr[38] + flag_ptr[34] + flag_ptr[42] +
                     flag_ptr[13] + flag_ptr[41] + 214 &
                 255;
  flag_ptr[28] += flag_ptr[11] + flag_ptr[22] + flag_ptr[17] + flag_ptr[0] +
                  flag_ptr[8] + flag_ptr[31] + 109;
  flag_ptr[28] &= 255;
  flag_ptr[27] -= flag_ptr[10] + flag_ptr[22] + flag_ptr[17] + flag_ptr[9] +
                  flag_ptr[24] + flag_ptr[26] + 43;
  flag_ptr[27] &= 255;
  flag_ptr[26] -= flag_ptr[27] + flag_ptr[9] + flag_ptr[21] + flag_ptr[39] +
                  flag_ptr[6] + flag_ptr[25] + 65;
  flag_ptr[26] &= 255;
  flag_ptr[24] -= flag_ptr[39] + flag_ptr[14] + flag_ptr[26] + flag_ptr[12] +
                  flag_ptr[13] + flag_ptr[41] + 108;
  flag_ptr[24] &= 255;
  flag_ptr[16] ^= flag_ptr[4] + flag_ptr[22] + flag_ptr[18] + flag_ptr[13] +
                      flag_ptr[8] + flag_ptr[9] + 84 &
                  255;
  flag_ptr[23] += flag_ptr[42] + flag_ptr[33] + flag_ptr[32] + flag_ptr[19] +
                  flag_ptr[3] + flag_ptr[35] + 112;
  flag_ptr[23] &= 255;
  flag_ptr[1] += flag_ptr[2] + flag_ptr[28] + flag_ptr[40] + flag_ptr[37] +
                 flag_ptr[34] + flag_ptr[11] + 25;
  flag_ptr[1] &= 255;
  flag_ptr[42] ^= flag_ptr[25] + flag_ptr[34] + flag_ptr[32] + flag_ptr[0] +
                      flag_ptr[5] + flag_ptr[17] + 127 &
                  255;
  flag_ptr[24] ^= flag_ptr[41] + flag_ptr[19] + flag_ptr[4] + flag_ptr[16] +
                      flag_ptr[37] + flag_ptr[20] + 80 &
                  255;
  flag_ptr[42] ^= flag_ptr[8] + flag_ptr[4] + flag_ptr[28] + flag_ptr[10] +
                      flag_ptr[33] + flag_ptr[6] + 226 &
                  255;
  flag_ptr[14] ^= flag_ptr[17] + flag_ptr[37] + flag_ptr[26] + flag_ptr[33] +
                      flag_ptr[3] + flag_ptr[30] + 57 &
                  255;
  flag_ptr[37] += flag_ptr[30] + flag_ptr[10] + flag_ptr[11] + flag_ptr[2] +
                  flag_ptr[34] + flag_ptr[41] + 206;
  flag_ptr[37] &= 255;
  flag_ptr[8] ^= flag_ptr[39] + flag_ptr[10] + flag_ptr[15] + flag_ptr[14] +
                     flag_ptr[19] + flag_ptr[0] + 177 &
                 255;
  flag_ptr[35] += flag_ptr[3] + flag_ptr[12] + flag_ptr[36] + flag_ptr[28] +
                  flag_ptr[7] + flag_ptr[41] + 227;
  flag_ptr[35] &= 255;
  flag_ptr[29] ^= flag_ptr[27] + flag_ptr[23] + flag_ptr[8] + flag_ptr[14] +
                      flag_ptr[16] + flag_ptr[10] + 250 &
                  255;
  flag_ptr[14] ^= flag_ptr[4] + flag_ptr[35] + flag_ptr[26] + flag_ptr[1] +
                      flag_ptr[0] + flag_ptr[7] + 81 &
                  255;
  flag_ptr[29] += flag_ptr[23] + flag_ptr[31] + flag_ptr[18] + flag_ptr[15] +
                  flag_ptr[11] + flag_ptr[37] + 58;
  flag_ptr[29] &= 255;
  flag_ptr[3] ^= flag_ptr[31] + flag_ptr[13] + flag_ptr[37] + flag_ptr[39] +
                     flag_ptr[8] + flag_ptr[29] + 76 &
                 255;
  flag_ptr[16] -= flag_ptr[25] + flag_ptr[37] + flag_ptr[42] + flag_ptr[23] +
                  flag_ptr[3] + flag_ptr[1] + 157;
  flag_ptr[16] &= 255;
  flag_ptr[40] += flag_ptr[35] + flag_ptr[42] + flag_ptr[2] + flag_ptr[24] +
                  flag_ptr[22] + flag_ptr[0] + 14;
  flag_ptr[40] &= 255;
  flag_ptr[26] += flag_ptr[35] + flag_ptr[37] + flag_ptr[34] + flag_ptr[43] +
                  flag_ptr[4] + flag_ptr[19] + 244;
  flag_ptr[26] &= 255;
  flag_ptr[11] -= flag_ptr[42] + flag_ptr[40] + flag_ptr[38] + flag_ptr[3] +
                  flag_ptr[26] + flag_ptr[1] + 101;
  flag_ptr[11] &= 255;
  flag_ptr[18] -= flag_ptr[11] + flag_ptr[27] + flag_ptr[32] + flag_ptr[8] +
                  flag_ptr[37] + flag_ptr[4] + 51;
  flag_ptr[18] &= 255;
  flag_ptr[14] ^= flag_ptr[27] + flag_ptr[11] + flag_ptr[31] + flag_ptr[38] +
                      flag_ptr[16] + flag_ptr[19] + 72 &
                  255;
  flag_ptr[38] += flag_ptr[43] + flag_ptr[17] + flag_ptr[14] + flag_ptr[27] +
                  flag_ptr[0] + flag_ptr[22] + 167;
  flag_ptr[38] &= 255;
  flag_ptr[18] -= flag_ptr[38] + flag_ptr[20] + flag_ptr[16] + flag_ptr[24] +
                  flag_ptr[34] + flag_ptr[26] + 49;
  flag_ptr[18] &= 255;
  flag_ptr[22] += flag_ptr[10] + flag_ptr[37] + flag_ptr[34] + flag_ptr[12] +
                  flag_ptr[16] + flag_ptr[2] + 92;
  flag_ptr[22] &= 255;
  flag_ptr[7] ^= flag_ptr[26] + flag_ptr[4] + flag_ptr[20] + flag_ptr[34] +
                     flag_ptr[9] + flag_ptr[38] + 2 &
                 255;
  flag_ptr[40] ^= flag_ptr[35] + flag_ptr[9] + flag_ptr[27] + flag_ptr[28] +
                      flag_ptr[3] + flag_ptr[36] + 118 &
                  255;
  flag_ptr[18] += flag_ptr[19] + flag_ptr[28] + flag_ptr[40] + flag_ptr[22] +
                  flag_ptr[5] + flag_ptr[17] + 162;
  flag_ptr[18] &= 255;
  flag_ptr[21] += flag_ptr[24] + flag_ptr[22] + flag_ptr[26] + flag_ptr[0] +
                  flag_ptr[36] + flag_ptr[6] + 234;
  flag_ptr[21] &= 255;
  flag_ptr[31] += flag_ptr[2] + flag_ptr[8] + flag_ptr[32] + flag_ptr[27] +
                  flag_ptr[18] + flag_ptr[35] + 193;
  flag_ptr[31] &= 255;
  flag_ptr[36] += flag_ptr[30] + flag_ptr[26] + flag_ptr[3] + flag_ptr[37] +
                  flag_ptr[4] + flag_ptr[28] + 207;
  flag_ptr[36] &= 255;
  flag_ptr[27] -= flag_ptr[10] + flag_ptr[33] + flag_ptr[16] + flag_ptr[22] +
                  flag_ptr[25] + flag_ptr[4] + 212;
  flag_ptr[27] &= 255;
  flag_ptr[16] ^= flag_ptr[24] + flag_ptr[29] + flag_ptr[6] + flag_ptr[35] +
                      flag_ptr[0] + flag_ptr[9] + 70 &
                  255;
  flag_ptr[2] += flag_ptr[15] + flag_ptr[16] + flag_ptr[6] + flag_ptr[34] +
                 flag_ptr[39] + flag_ptr[12] + 131;
  flag_ptr[2] &= 255;
  flag_ptr[12] -= flag_ptr[15] + flag_ptr[34] + flag_ptr[31] + flag_ptr[30] +
                  flag_ptr[37] + flag_ptr[0] + 234;
  flag_ptr[12] &= 255;
  flag_ptr[15] += flag_ptr[21] + flag_ptr[42] + flag_ptr[25] + flag_ptr[1] +
                  flag_ptr[18] + flag_ptr[32] + 251;
  flag_ptr[15] &= 255;
  flag_ptr[14] -= flag_ptr[7] + flag_ptr[16] + flag_ptr[5] + flag_ptr[26] +
                  flag_ptr[21] + flag_ptr[28] + 65;
  flag_ptr[14] &= 255;
  flag_ptr[11] -= flag_ptr[3] + flag_ptr[34] + flag_ptr[1] + flag_ptr[14] +
                  flag_ptr[20] + flag_ptr[22] + 237;
  flag_ptr[11] &= 255;
  flag_ptr[18] ^= flag_ptr[33] + flag_ptr[23] + flag_ptr[19] + flag_ptr[34] +
                      flag_ptr[3] + flag_ptr[42] + 133 &
                  255;
  flag_ptr[35] -= flag_ptr[33] + flag_ptr[31] + flag_ptr[40] + flag_ptr[41] +
                  flag_ptr[0] + flag_ptr[32] + 134;
  flag_ptr[35] &= 255;
  flag_ptr[7] += flag_ptr[21] + flag_ptr[25] + flag_ptr[38] + flag_ptr[43] +
                 flag_ptr[42] + flag_ptr[41] + 22;
  flag_ptr[7] &= 255;
  flag_ptr[7] -= flag_ptr[23] + flag_ptr[4] + flag_ptr[20] + flag_ptr[22] +
                 flag_ptr[0] + flag_ptr[11] + 113;
  flag_ptr[7] &= 255;
  flag_ptr[34] -= flag_ptr[21] + flag_ptr[5] + flag_ptr[41] + flag_ptr[10] +
                  flag_ptr[24] + flag_ptr[38] + 122;
  flag_ptr[34] &= 255;
  flag_ptr[21] -= flag_ptr[20] + flag_ptr[13] + flag_ptr[41] + flag_ptr[1] +
                  flag_ptr[7] + flag_ptr[33] + 140;
  flag_ptr[21] &= 255;
  flag_ptr[9] ^= flag_ptr[30] + flag_ptr[12] + flag_ptr[23] + flag_ptr[2] +
                     flag_ptr[13] + flag_ptr[34] + 165 &
                 255;
  flag_ptr[43] -= flag_ptr[1] + flag_ptr[32] + flag_ptr[9] + flag_ptr[4] +
                  flag_ptr[33] + flag_ptr[22] + 217;
  flag_ptr[43] &= 255;
  flag_ptr[7] += flag_ptr[29] + flag_ptr[38] + flag_ptr[39] + flag_ptr[26] +
                 flag_ptr[23] + flag_ptr[36] + 86;
  flag_ptr[7] &= 255;
  flag_ptr[22] ^= flag_ptr[34] + flag_ptr[42] + flag_ptr[20] + flag_ptr[14] +
                      flag_ptr[1] + flag_ptr[7] + 41 &
                  255;
  flag_ptr[9] -= flag_ptr[10] + flag_ptr[18] + flag_ptr[25] + flag_ptr[31] +
                 flag_ptr[7] + flag_ptr[40] + 123;
  flag_ptr[9] &= 255;
  flag_ptr[22] ^= flag_ptr[17] + flag_ptr[0] + flag_ptr[40] + flag_ptr[34] +
                      flag_ptr[4] + flag_ptr[5] + 36 &
                  255;
  flag_ptr[34] += flag_ptr[1] + flag_ptr[43] + flag_ptr[3] + flag_ptr[41] +
                  flag_ptr[38] + flag_ptr[31] + 168;
  flag_ptr[34] &= 255;
  flag_ptr[18] -= flag_ptr[5] + flag_ptr[42] + flag_ptr[22] + flag_ptr[0] +
                  flag_ptr[23] + flag_ptr[28] + 19;
  flag_ptr[18] &= 255;
  flag_ptr[18] -= flag_ptr[37] + flag_ptr[15] + flag_ptr[16] + flag_ptr[27] +
                  flag_ptr[14] + flag_ptr[0] + 161;
  flag_ptr[18] &= 255;
  flag_ptr[3] += flag_ptr[39] + flag_ptr[2] + flag_ptr[43] + flag_ptr[24] +
                 flag_ptr[5] + flag_ptr[23] + 6;
  flag_ptr[3] &= 255;
  flag_ptr[13] ^= flag_ptr[8] + flag_ptr[22] + flag_ptr[33] + flag_ptr[29] +
                      flag_ptr[5] + flag_ptr[17] + 167 &
                  255;
  flag_ptr[1] -= flag_ptr[41] + flag_ptr[33] + flag_ptr[32] + flag_ptr[17] +
                 flag_ptr[35] + flag_ptr[2] + 65;
  flag_ptr[1] &= 255;
  flag_ptr[20] ^= flag_ptr[2] + flag_ptr[16] + flag_ptr[34] + flag_ptr[1] +
                      flag_ptr[36] + flag_ptr[33] + 189 &
                  255;
  flag_ptr[23] += flag_ptr[21] + flag_ptr[42] + flag_ptr[18] + flag_ptr[5] +
                  flag_ptr[7] + flag_ptr[22] + 2;
  flag_ptr[23] &= 255;
  flag_ptr[37] += flag_ptr[20] + flag_ptr[11] + flag_ptr[16] + flag_ptr[31] +
                  flag_ptr[22] + flag_ptr[0] + 194;
  flag_ptr[37] &= 255;
  flag_ptr[16] += flag_ptr[5] + flag_ptr[21] + flag_ptr[39] + flag_ptr[25] +
                  flag_ptr[43] + flag_ptr[8] + 100;
  flag_ptr[16] &= 255;
  flag_ptr[30] ^= flag_ptr[19] + flag_ptr[9] + flag_ptr[25] + flag_ptr[11] +
                      flag_ptr[18] + flag_ptr[23] + 2 &
                  255;
  flag_ptr[35] -= flag_ptr[19] + flag_ptr[17] + flag_ptr[37] + flag_ptr[26] +
                  flag_ptr[10] + flag_ptr[13] + 230;
  flag_ptr[35] &= 255;
  flag_ptr[11] -= flag_ptr[26] + flag_ptr[43] + flag_ptr[14] + flag_ptr[4] +
                  flag_ptr[30] + flag_ptr[8] + 96;
  flag_ptr[11] &= 255;
  flag_ptr[22] += flag_ptr[16] + flag_ptr[36] + flag_ptr[10] + flag_ptr[41] +
                  flag_ptr[11] + flag_ptr[15] + 18;
  flag_ptr[22] &= 255;
  flag_ptr[32] += flag_ptr[38] + flag_ptr[20] + flag_ptr[26] + flag_ptr[35] +
                  flag_ptr[24] + flag_ptr[14] + 217;
  flag_ptr[32] &= 255;
  flag_ptr[15] ^= flag_ptr[5] + flag_ptr[24] + flag_ptr[22] + flag_ptr[34] +
                      flag_ptr[8] + flag_ptr[25] + 210 &
                  255;
  flag_ptr[34] += flag_ptr[12] + flag_ptr[20] + flag_ptr[15] + flag_ptr[38] +
                  flag_ptr[23] + flag_ptr[11] + 48;
  flag_ptr[34] &= 255;
  flag_ptr[36] -= flag_ptr[34] + flag_ptr[10] + flag_ptr[18] + flag_ptr[14] +
                  flag_ptr[30] + flag_ptr[7] + 71;
  flag_ptr[36] &= 255;
  flag_ptr[43] += flag_ptr[35] + flag_ptr[40] + flag_ptr[41] + flag_ptr[36] +
                  flag_ptr[10] + flag_ptr[39] + 136;
  flag_ptr[43] &= 255;
  flag_ptr[28] ^= flag_ptr[0] + flag_ptr[6] + flag_ptr[22] + flag_ptr[7] +
                      flag_ptr[39] + flag_ptr[2] + 151 &
                  255;
  flag_ptr[8] ^= flag_ptr[21] + flag_ptr[43] + flag_ptr[14] + flag_ptr[32] +
                     flag_ptr[26] + flag_ptr[11] + 230 &
                 255;
  flag_ptr[41] -= flag_ptr[28] + flag_ptr[21] + flag_ptr[25] + flag_ptr[31] +
                  flag_ptr[2] + flag_ptr[36] + 37;
  flag_ptr[41] &= 255;
  flag_ptr[17] -= flag_ptr[16] + flag_ptr[19] + flag_ptr[4] + flag_ptr[9] +
                  flag_ptr[36] + flag_ptr[11] + 80;
  flag_ptr[17] &= 255;
  flag_ptr[36] -= flag_ptr[39] + flag_ptr[34] + flag_ptr[20] + flag_ptr[4] +
                  flag_ptr[17] + flag_ptr[26] + 178;
  flag_ptr[36] &= 255;
  flag_ptr[19] -= flag_ptr[36] + flag_ptr[41] + flag_ptr[28] + flag_ptr[22] +
                  flag_ptr[12] + flag_ptr[32] + 163;
  flag_ptr[19] &= 255;
  flag_ptr[12] += flag_ptr[13] + flag_ptr[21] + flag_ptr[20] + flag_ptr[15] +
                  flag_ptr[31] + flag_ptr[16] + 13;
  flag_ptr[12] &= 255;
  flag_ptr[43] ^= flag_ptr[31] + flag_ptr[1] + flag_ptr[33] + flag_ptr[13] +
                      flag_ptr[15] + flag_ptr[3] + 216 &
                  255;
  flag_ptr[33] ^= flag_ptr[43] + flag_ptr[30] + flag_ptr[42] + flag_ptr[0] +
                      flag_ptr[8] + flag_ptr[2] + 121 &
                  255;
  flag_ptr[43] += flag_ptr[41] + flag_ptr[14] + flag_ptr[0] + flag_ptr[35] +
                  flag_ptr[34] + flag_ptr[13] + 16;
  flag_ptr[43] &= 255;
  flag_ptr[11] += flag_ptr[15] + flag_ptr[21] + flag_ptr[35] + flag_ptr[19] +
                  flag_ptr[42] + flag_ptr[24] + 152;
  flag_ptr[11] &= 255;
  flag_ptr[1] -= flag_ptr[0] + flag_ptr[22] + flag_ptr[29] + flag_ptr[31] +
                 flag_ptr[18] + flag_ptr[9] + 50;
  flag_ptr[1] &= 255;
  flag_ptr[2] += flag_ptr[41] + flag_ptr[12] + flag_ptr[4] + flag_ptr[6] +
                 flag_ptr[31] + flag_ptr[28] + 90;
  flag_ptr[2] &= 255;
  flag_ptr[16] -= flag_ptr[15] + flag_ptr[17] + flag_ptr[42] + flag_ptr[22] +
                  flag_ptr[32] + flag_ptr[30] + 64;
  flag_ptr[16] &= 255;
  flag_ptr[7] += flag_ptr[1] + flag_ptr[26] + flag_ptr[15] + flag_ptr[24] +
                 flag_ptr[13] + flag_ptr[31] + 2;
  flag_ptr[7] &= 255;
  flag_ptr[40] ^= flag_ptr[0] + flag_ptr[36] + flag_ptr[43] + flag_ptr[31] +
                      flag_ptr[15] + flag_ptr[27] + 217 &
                  255;
  flag_ptr[1] += flag_ptr[4] + flag_ptr[25] + flag_ptr[41] + flag_ptr[21] +
                 flag_ptr[22] + flag_ptr[10] + 216;
  flag_ptr[1] &= 255;
  flag_ptr[6] += flag_ptr[11] + flag_ptr[38] + flag_ptr[32] + flag_ptr[41] +
                 flag_ptr[24] + flag_ptr[40] + 79;
  flag_ptr[6] &= 255;
  flag_ptr[41] -= flag_ptr[11] + flag_ptr[27] + flag_ptr[37] + flag_ptr[2] +
                  flag_ptr[18] + flag_ptr[35] + 25;
  flag_ptr[41] &= 255;
  flag_ptr[16] -= flag_ptr[13] + flag_ptr[41] + flag_ptr[6] + flag_ptr[15] +
                  flag_ptr[20] + flag_ptr[10] + 21;
  flag_ptr[16] &= 255;
  flag_ptr[5] += flag_ptr[0] + flag_ptr[12] + flag_ptr[27] + flag_ptr[2] +
                 flag_ptr[1] + flag_ptr[35] + 45;
  flag_ptr[5] &= 255;
  flag_ptr[1] ^= flag_ptr[21] + flag_ptr[7] + flag_ptr[37] + flag_ptr[30] +
                     flag_ptr[28] + flag_ptr[32] + 188 &
                 255;
  flag_ptr[1] ^= flag_ptr[17] + flag_ptr[35] + flag_ptr[21] + flag_ptr[3] +
                     flag_ptr[22] + flag_ptr[41] + 5 &
                 255;
  flag_ptr[18] ^= flag_ptr[9] + flag_ptr[25] + flag_ptr[13] + flag_ptr[29] +
                      flag_ptr[0] + flag_ptr[24] + 21 &
                  255;
  flag_ptr[43] += flag_ptr[13] + flag_ptr[2] + flag_ptr[35] + flag_ptr[18] +
                  flag_ptr[32] + flag_ptr[33] + 61;
  flag_ptr[43] &= 255;
  flag_ptr[4] -= flag_ptr[40] + flag_ptr[9] + flag_ptr[23] + flag_ptr[38] +
                 flag_ptr[18] + flag_ptr[6] + 123;
  flag_ptr[4] &= 255;
  flag_ptr[17] += flag_ptr[0] + flag_ptr[35] + flag_ptr[12] + flag_ptr[42] +
                  flag_ptr[14] + flag_ptr[3] + 8;
  flag_ptr[17] &= 255;
  flag_ptr[31] += flag_ptr[40] + flag_ptr[21] + flag_ptr[2] + flag_ptr[43] +
                  flag_ptr[4] + flag_ptr[0] + 116;
  flag_ptr[31] &= 255;
  flag_ptr[22] ^= flag_ptr[42] + flag_ptr[30] + flag_ptr[35] + flag_ptr[29] +
                      flag_ptr[31] + flag_ptr[17] + 146 &
                  255;
  flag_ptr[26] -= flag_ptr[16] + flag_ptr[8] + flag_ptr[35] + flag_ptr[4] +
                  flag_ptr[32] + flag_ptr[22] + 55;
  flag_ptr[26] &= 255;
  flag_ptr[17] += flag_ptr[18] + flag_ptr[4] + flag_ptr[15] + flag_ptr[34] +
                  flag_ptr[16] + flag_ptr[31] + 215;
  flag_ptr[17] &= 255;
  flag_ptr[13] ^= flag_ptr[41] + flag_ptr[12] + flag_ptr[22] + flag_ptr[28] +
                      flag_ptr[42] + flag_ptr[40] + 246 &
                  255;
  flag_ptr[23] += flag_ptr[7] + flag_ptr[30] + flag_ptr[27] + flag_ptr[35] +
                  flag_ptr[43] + flag_ptr[10] + 164;
  flag_ptr[23] &= 255;
  flag_ptr[28] += flag_ptr[40] + flag_ptr[43] + flag_ptr[5] + flag_ptr[21] +
                  flag_ptr[3] + flag_ptr[24] + 231;
  flag_ptr[28] &= 255;
  flag_ptr[42] ^= flag_ptr[12] + flag_ptr[43] + flag_ptr[37] + flag_ptr[6] +
                      flag_ptr[19] + flag_ptr[40] + 94 &
                  255;
  flag_ptr[31] += flag_ptr[8] + flag_ptr[5] + flag_ptr[3] + flag_ptr[13] +
                  flag_ptr[6] + flag_ptr[39] + 14;
  flag_ptr[31] &= 255;
  flag_ptr[1] += flag_ptr[14] + flag_ptr[33] + flag_ptr[4] + flag_ptr[34] +
                 flag_ptr[13] + flag_ptr[18] + 90;
  flag_ptr[1] &= 255;
  flag_ptr[31] ^= flag_ptr[16] + flag_ptr[13] + flag_ptr[28] + flag_ptr[21] +
                      flag_ptr[0] + flag_ptr[27] + 130 &
                  255;
  flag_ptr[19] -= flag_ptr[7] + flag_ptr[41] + flag_ptr[32] + flag_ptr[18] +
                  flag_ptr[1] + flag_ptr[23] + 19;
  flag_ptr[19] &= 255;
  flag_ptr[39] ^= flag_ptr[15] + flag_ptr[14] + flag_ptr[31] + flag_ptr[23] +
                      flag_ptr[27] + flag_ptr[41] + 117 &
                  255;
  flag_ptr[29] += flag_ptr[10] + flag_ptr[1] + flag_ptr[9] + flag_ptr[30] +
                  flag_ptr[18] + flag_ptr[37] + 138;
  flag_ptr[29] &= 255;
  flag_ptr[0] += flag_ptr[25] + flag_ptr[13] + flag_ptr[38] + flag_ptr[31] +
                 flag_ptr[14] + flag_ptr[30] + 248;
  flag_ptr[0] &= 255;
  flag_ptr[31] ^= flag_ptr[11] + flag_ptr[2] + flag_ptr[42] + flag_ptr[1] +
                      flag_ptr[26] + flag_ptr[13] + 252 &
                  255;
  flag_ptr[17] ^= flag_ptr[28] + flag_ptr[14] + flag_ptr[16] + flag_ptr[31] +
                      flag_ptr[41] + flag_ptr[43] + 36 &
                  255;
  flag_ptr[5] ^= flag_ptr[35] + flag_ptr[39] + flag_ptr[40] + flag_ptr[16] +
                     flag_ptr[10] + flag_ptr[13] + 108 &
                 255;
  flag_ptr[18] -= flag_ptr[13] + flag_ptr[0] + flag_ptr[42] + flag_ptr[43] +
                  flag_ptr[12] + flag_ptr[21] + 130;
  flag_ptr[18] &= 255;
  flag_ptr[25] += flag_ptr[29] + flag_ptr[8] + flag_ptr[18] + flag_ptr[33] +
                  flag_ptr[23] + flag_ptr[10] + 43;
  flag_ptr[25] &= 255;
  flag_ptr[8] += flag_ptr[21] + flag_ptr[2] + flag_ptr[30] + flag_ptr[15] +
                 flag_ptr[41] + flag_ptr[31] + 202;
  flag_ptr[8] &= 255;
  flag_ptr[26] -= flag_ptr[6] + flag_ptr[10] + flag_ptr[7] + flag_ptr[2] +
                  flag_ptr[11] + flag_ptr[32] + 127;
  flag_ptr[26] &= 255;
  flag_ptr[33] += flag_ptr[15] + flag_ptr[4] + flag_ptr[12] + flag_ptr[18] +
                  flag_ptr[23] + flag_ptr[16] + 224;
  flag_ptr[33] &= 255;
  flag_ptr[28] ^= flag_ptr[40] + flag_ptr[17] + flag_ptr[20] + flag_ptr[35] +
                      flag_ptr[1] + flag_ptr[6] + 127 &
                  255;
  flag_ptr[36] -= flag_ptr[7] + flag_ptr[3] + flag_ptr[10] + flag_ptr[5] +
                  flag_ptr[13] + flag_ptr[2] + 23;
  flag_ptr[36] &= 255;
  flag_ptr[0] += flag_ptr[37] + flag_ptr[26] + flag_ptr[14] + flag_ptr[22] +
                 flag_ptr[21] + flag_ptr[12] + 221;
  flag_ptr[0] &= 255;
  flag_ptr[6] += flag_ptr[33] + flag_ptr[12] + flag_ptr[41] + flag_ptr[15] +
                 flag_ptr[19] + flag_ptr[11] + 154;
  flag_ptr[6] &= 255;
  flag_ptr[26] += flag_ptr[40] + flag_ptr[6] + flag_ptr[36] + flag_ptr[21] +
                  flag_ptr[19] + flag_ptr[28] + 41;
  flag_ptr[26] &= 255;
  flag_ptr[14] += flag_ptr[35] + flag_ptr[22] + flag_ptr[0] + flag_ptr[1] +
                  flag_ptr[42] + flag_ptr[25] + 206;
  flag_ptr[14] &= 255;
  flag_ptr[3] -= flag_ptr[42] + flag_ptr[17] + flag_ptr[24] + flag_ptr[16] +
                 flag_ptr[41] + flag_ptr[1] + 61;
  flag_ptr[3] &= 255;
  flag_ptr[43] -= flag_ptr[22] + flag_ptr[17] + flag_ptr[6] + flag_ptr[10] +
                  flag_ptr[2] + flag_ptr[5] + 126;
  flag_ptr[43] &= 255;
  flag_ptr[16] += flag_ptr[20] + flag_ptr[35] + flag_ptr[30] + flag_ptr[1] +
                  flag_ptr[8] + flag_ptr[37] + 181;
  flag_ptr[16] &= 255;
  flag_ptr[15] += flag_ptr[24] + flag_ptr[16] + flag_ptr[38] + flag_ptr[22] +
                  flag_ptr[18] + flag_ptr[19] + 18;
  flag_ptr[15] &= 255;
  flag_ptr[16] -= flag_ptr[5] + flag_ptr[15] + flag_ptr[14] + flag_ptr[6] +
                  flag_ptr[17] + flag_ptr[33] + 51;
  flag_ptr[16] &= 255;
  flag_ptr[11] ^= flag_ptr[15] + flag_ptr[36] + flag_ptr[35] + flag_ptr[38] +
                      flag_ptr[21] + flag_ptr[43] + 45 &
                  255;
  flag_ptr[18] += flag_ptr[39] + flag_ptr[9] + flag_ptr[29] + flag_ptr[33] +
                  flag_ptr[32] + flag_ptr[3] + 135;
  flag_ptr[18] &= 255;
  flag_ptr[40] += flag_ptr[37] + flag_ptr[29] + flag_ptr[8] + flag_ptr[19] +
                  flag_ptr[0] + flag_ptr[27] + 172;
  flag_ptr[40] &= 255;
  flag_ptr[15] -= flag_ptr[14] + flag_ptr[16] + flag_ptr[36] + flag_ptr[40] +
                  flag_ptr[10] + flag_ptr[3] + 204;
  flag_ptr[15] &= 255;
  flag_ptr[36] ^= flag_ptr[18] + flag_ptr[42] + flag_ptr[9] + flag_ptr[34] +
                      flag_ptr[12] + flag_ptr[29] + 242 &
                  255;
  flag_ptr[39] -= flag_ptr[12] + flag_ptr[36] + flag_ptr[0] + flag_ptr[41] +
                  flag_ptr[38] + flag_ptr[35] + 102;
  flag_ptr[39] &= 255;
  flag_ptr[18] += flag_ptr[22] + flag_ptr[13] + flag_ptr[43] + flag_ptr[2] +
                  flag_ptr[14] + flag_ptr[4] + 10;
  flag_ptr[18] &= 255;
  flag_ptr[42] += flag_ptr[1] + flag_ptr[29] + flag_ptr[8] + flag_ptr[32] +
                  flag_ptr[23] + flag_ptr[16] + 49;
  flag_ptr[42] &= 255;
  flag_ptr[5] -= flag_ptr[22] + flag_ptr[8] + flag_ptr[12] + flag_ptr[24] +
                 flag_ptr[37] + flag_ptr[31] + 149;
  flag_ptr[5] &= 255;
  flag_ptr[19] += flag_ptr[28] + flag_ptr[30] + flag_ptr[4] + flag_ptr[10] +
                  flag_ptr[15] + flag_ptr[17] + 131;
  flag_ptr[19] &= 255;
  flag_ptr[2] ^= flag_ptr[1] + flag_ptr[40] + flag_ptr[32] + flag_ptr[37] +
                     flag_ptr[21] + flag_ptr[35] + 186 &
                 255;
  flag_ptr[28] ^= flag_ptr[10] + flag_ptr[37] + flag_ptr[8] + flag_ptr[12] +
                      flag_ptr[17] + flag_ptr[30] + 58 &
                  255;
  flag_ptr[19] ^= flag_ptr[16] + flag_ptr[17] + flag_ptr[11] + flag_ptr[12] +
                      flag_ptr[37] + flag_ptr[31] + 52 &
                  255;
  flag_ptr[27] ^= flag_ptr[31] + flag_ptr[7] + flag_ptr[29] + flag_ptr[33] +
                      flag_ptr[25] + flag_ptr[38] + 60 &
                  255;
  flag_ptr[15] += flag_ptr[32] + flag_ptr[31] + flag_ptr[9] + flag_ptr[20] +
                  flag_ptr[36] + flag_ptr[18] + 132;
  flag_ptr[15] &= 255;
  flag_ptr[21] ^= flag_ptr[9] + flag_ptr[5] + flag_ptr[38] + flag_ptr[14] +
                      flag_ptr[43] + flag_ptr[7] + 217 &
                  255;
  flag_ptr[25] ^= flag_ptr[10] + flag_ptr[33] + flag_ptr[24] + flag_ptr[5] +
                      flag_ptr[12] + flag_ptr[38] + 112 &
                  255;
  flag_ptr[7] ^= flag_ptr[5] + flag_ptr[40] + flag_ptr[15] + flag_ptr[22] +
                     flag_ptr[1] + flag_ptr[10] + 209 &
                 255;
  flag_ptr[10] ^= flag_ptr[26] + flag_ptr[29] + flag_ptr[19] + flag_ptr[31] +
                      flag_ptr[39] + flag_ptr[28] + 142 &
                  255;
  flag_ptr[33] += flag_ptr[4] + flag_ptr[41] + flag_ptr[18] + flag_ptr[43] +
                  flag_ptr[28] + flag_ptr[25] + 2;
  flag_ptr[33] &= 255;
  flag_ptr[35] ^= flag_ptr[34] + flag_ptr[36] + flag_ptr[8] + flag_ptr[19] +
                      flag_ptr[3] + flag_ptr[14] + 74 &
                  255;
  flag_ptr[12] += flag_ptr[0] + flag_ptr[13] + flag_ptr[28] + flag_ptr[38] +
                  flag_ptr[43] + flag_ptr[1] + 89;
  flag_ptr[12] &= 255;
  flag_ptr[25] += flag_ptr[13] + flag_ptr[34] + flag_ptr[7] + flag_ptr[39] +
                  flag_ptr[19] + flag_ptr[5] + 96;
  flag_ptr[25] &= 255;
  flag_ptr[23] -= flag_ptr[22] + flag_ptr[15] + flag_ptr[20] + flag_ptr[10] +
                  flag_ptr[37] + flag_ptr[33] + 163;
  flag_ptr[23] &= 255;
  flag_ptr[22] ^= flag_ptr[1] + flag_ptr[5] + flag_ptr[10] + flag_ptr[3] +
                      flag_ptr[12] + flag_ptr[16] + 207 &
                  255;
  flag_ptr[39] += flag_ptr[42] + flag_ptr[37] + flag_ptr[40] + flag_ptr[30] +
                  flag_ptr[3] + flag_ptr[29] + 55;
  flag_ptr[39] &= 255;
  flag_ptr[29] += flag_ptr[39] + flag_ptr[36] + flag_ptr[23] + flag_ptr[31] +
                  flag_ptr[5] + flag_ptr[26] + 105;
  flag_ptr[29] &= 255;
  flag_ptr[13] ^= flag_ptr[0] + flag_ptr[29] + flag_ptr[26] + flag_ptr[14] +
                      flag_ptr[15] + flag_ptr[7] + 31 &
                  255;
  flag_ptr[33] ^= flag_ptr[10] + flag_ptr[22] + flag_ptr[2] + flag_ptr[1] +
                      flag_ptr[30] + flag_ptr[11] + 154 &
                  255;
  flag_ptr[37] ^= flag_ptr[28] + flag_ptr[39] + flag_ptr[41] + flag_ptr[11] +
                      flag_ptr[10] + flag_ptr[9] + 223 &
                  255;
  flag_ptr[23] ^= flag_ptr[30] + flag_ptr[1] + flag_ptr[2] + flag_ptr[25] +
                      flag_ptr[42] + flag_ptr[36] + 233 &
                  255;
  flag_ptr[30] -= flag_ptr[25] + flag_ptr[34] + flag_ptr[36] + flag_ptr[6] +
                  flag_ptr[41] + flag_ptr[11] + 108;
  flag_ptr[30] &= 255;
  flag_ptr[19] ^= flag_ptr[3] + flag_ptr[30] + flag_ptr[17] + flag_ptr[15] +
                      flag_ptr[13] + flag_ptr[18] + 241 &
                  255;
  flag_ptr[38] += flag_ptr[20] + flag_ptr[30] + flag_ptr[31] + flag_ptr[8] +
                  flag_ptr[37] + flag_ptr[33] + 54;
  flag_ptr[38] &= 255;
  flag_ptr[17] ^= flag_ptr[41] + flag_ptr[14] + flag_ptr[43] + flag_ptr[6] +
                      flag_ptr[7] + flag_ptr[28] + 196 &
                  255;
  flag_ptr[40] += flag_ptr[13] + flag_ptr[3] + flag_ptr[43] + flag_ptr[31] +
                  flag_ptr[22] + flag_ptr[25] + 49;
  flag_ptr[40] &= 255;
  flag_ptr[19] ^= flag_ptr[0] + flag_ptr[35] + flag_ptr[14] + flag_ptr[30] +
                      flag_ptr[21] + flag_ptr[33] + 213 &
                  255;
  flag_ptr[11] -= flag_ptr[32] + flag_ptr[8] + flag_ptr[9] + flag_ptr[34] +
                  flag_ptr[39] + flag_ptr[19] + 185;
  flag_ptr[11] &= 255;
  flag_ptr[21] += flag_ptr[39] + flag_ptr[6] + flag_ptr[0] + flag_ptr[33] +
                  flag_ptr[8] + flag_ptr[40] + 179;
  flag_ptr[21] &= 255;
  flag_ptr[34] += flag_ptr[35] + flag_ptr[40] + flag_ptr[13] + flag_ptr[41] +
                  flag_ptr[23] + flag_ptr[25] + 14;
  flag_ptr[34] &= 255;
  flag_ptr[22] += flag_ptr[16] + flag_ptr[18] + flag_ptr[7] + flag_ptr[23] +
                  flag_ptr[1] + flag_ptr[27] + 50;
  flag_ptr[22] &= 255;
  flag_ptr[39] += flag_ptr[18] + flag_ptr[16] + flag_ptr[8] + flag_ptr[19] +
                  flag_ptr[5] + flag_ptr[23] + 36;
  flag_ptr[39] &= 255;

  const unsigned char target[44] = {
      106, 196, 106, 178, 174, 102, 31, 91,  66,  255, 86,  196, 74,  139, 219,
      166, 106, 4,   211, 68,  227, 72, 156, 38,  239, 153, 223, 225, 73,  171,
      51,  4,   234, 50,  207, 82,  18, 111, 180, 212, 81,  189, 73,  76};

  for (int i = 0; i < 44; i++) {
    printf("%u, ", flag_ptr[i]);
  }

  puts("");

  // for (int i = 0; i < 44; i++) {
  //   if (flag_ptr[i] != target[i]) {
  //     printf("Wrong flag!\n");
  //     return 1;
  //   }
  // }

  if (memcmp(flag_ptr, target, 44) == 0) {
    printf("Correct flag!\n");
  } else {
    printf("Wrong flag!\n");
  }

  return 0;
}