// addr: 0x00c37da0
// name: FUN_00c37da0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00c37da0(int param_1,int param_2)

{
  int iVar1;
  
                    /* Searches a linked chain rooted at this+0xc094 for an entry whose large
                       embedded id field matches the input, returning field +0x44 from the matching
                       entry or 0. The data-source class is not identified. */
  iVar1 = *(int *)(param_1 + 0xc094);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x2806c) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x28070);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x44);
}

