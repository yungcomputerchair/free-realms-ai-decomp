// addr: 0x014181d0
// name: ReturnValueMap_setInteger
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void ReturnValueMap_setInteger(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
                    /* Sets an integer value in a ReturnValueMap for the supplied key. */
  iVar1 = FUN_01417f70(&param_1);
  FUN_01300680(2);
  *(undefined4 *)(iVar1 + 8) = param_2;
  return;
}

