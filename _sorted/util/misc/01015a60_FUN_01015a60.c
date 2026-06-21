// addr: 0x01015a60
// name: FUN_01015a60
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01015a60(int *param_1,int param_2)

{
                    /* Assigns a new owned pointer after deleting the previous pointed-to object if
                       present. No class evidence, so left unnamed. */
  if (*param_1 != 0) {
    FUN_010156a0(*param_1);
    *param_1 = 0;
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}

