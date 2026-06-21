// addr: 0x009987f0
// name: FUN_009987f0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_009987f0(int param_1,uint *param_2)

{
  int iVar1;
  
                    /* Finds a node by unsigned id in an 8-bucket hash chain, comparing the id
                       against node field +0xd0 and following next at +0xd4. The owning
                       UI/data-source class is not identified. */
  iVar1 = *(int *)(param_1 + 0x14 + (*param_2 & 7) * 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0xd0) == *param_2) break;
    iVar1 = *(int *)(iVar1 + 0xd4);
  }
  return iVar1;
}

