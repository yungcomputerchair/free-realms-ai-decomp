// addr: 0x00506366
// name: FUN_00506366
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_00506366(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  
                    /* Tree/map insertion helper variant: if key absent, inserts/links a node and
                       writes an iterator pair result. No first-party class evidence. */
  cVar1 = FUN_004d2e4f(&param_5);
  if (cVar1 == '\0') {
    uVar2 = FUN_004f02e4(param_6,*(undefined4 *)(param_1 + 8),param_4);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  param_2[1] = param_4;
  *param_2 = param_3;
  return;
}

