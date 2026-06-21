// addr: 0x00a9b480
// name: FUN_00a9b480
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a9b480(int param_1,int param_2)

{
                    /* Deserializes five consecutive 32-bit fields into offsets +8 through +0x18 of
                       an unknown record using standard stream overflow handling. Caller is unnamed,
                       so class semantics are not recoverable here. */
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 8) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = **(undefined4 **)(param_2 + 8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  return;
}

