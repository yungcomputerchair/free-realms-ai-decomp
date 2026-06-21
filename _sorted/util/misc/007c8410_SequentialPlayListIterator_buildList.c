// addr: 0x007c8410
// name: SequentialPlayListIterator_buildList
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall SequentialPlayListIterator_buildList(int param_1)

{
  int iVar1;
  int local_4;
  
                    /* Iterates playlist entries and adds each to the iterator list in order via
                       FUN_007c8140. */
  if (*(int *)(param_1 + 8) != 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18))
    {
      local_4 = iVar1;
      FUN_007c8140(&local_4);
    }
  }
  return;
}

