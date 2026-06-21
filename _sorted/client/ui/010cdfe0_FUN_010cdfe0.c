// addr: 0x010cdfe0
// name: FUN_010cdfe0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_010cdfe0(undefined4 param_1)

{
  int iVar1;
  
                    /* Looks up an object and, if found, writes two fixed magic/identifier values at
                       offsets +8 and +0xc. The object class and semantic meaning of the constants
                       are unknown. */
  iVar1 = FUN_004d9207(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0x56471e89;
    *(undefined4 *)(iVar1 + 0xc) = 0x9fe1234a;
  }
  return;
}

