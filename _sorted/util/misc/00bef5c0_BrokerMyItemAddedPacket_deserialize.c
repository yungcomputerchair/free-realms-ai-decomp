// addr: 0x00bef5c0
// name: BrokerMyItemAddedPacket_deserialize
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall BrokerMyItemAddedPacket_deserialize(int param_1,int param_2)

{
  undefined4 *puVar1;
  
                    /* Deserializes BrokerMyItemAddedPacket fields from a bounded stream, including
                       64-bit/32-bit scalar fields and string-like fields via helper calls. */
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (*(undefined4 **)(param_2 + 0xc) < puVar1 + 2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(undefined4 *)(param_1 + 0x14) = puVar1[1];
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 8;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  FUN_008caaa0(param_2);
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0x24) = **(char **)(param_2 + 8) != '\0';
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  FUN_008e7290(param_2);
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (*(undefined4 **)(param_2 + 0xc) < puVar1 + 2) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = *puVar1;
    *(undefined4 *)(param_1 + 0xd4) = puVar1[1];
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 8;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = **(undefined4 **)(param_2 + 8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  return;
}

