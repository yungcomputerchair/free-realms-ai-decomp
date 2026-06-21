// addr: 0x00bae770
// name: FUN_00bae770
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_00bae770(int param_1,uint param_2)

{
  int iVar1;
  
                    /* Looks up an entry by uint key in a 10-bucket hash chain using key modulo 10
                       and returns the matching node or 0. No class evidence, so left unnamed. */
  iVar1 = *(int *)(param_1 + 0x1ff0 + (param_2 % 10) * 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0x38) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x3c);
  }
  return iVar1;
}

