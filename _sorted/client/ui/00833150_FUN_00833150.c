// addr: 0x00833150
// name: FUN_00833150
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00833150(void *param_1,uint param_2)

{
  int iVar1;
  uint local_4;
  
                    /* Ensures a 16-bucket hash/list contains the given property/id, inserting a new
                       node and notifying through FUN_0082f2b0 when absent. Exact
                       property-data-source class is unknown. */
  iVar1 = *(int *)((int)param_1 + (param_2 & 0xf) * 4 + 0x3fc);
  while( true ) {
    if (iVar1 == 0) {
      local_4 = param_2;
      FUN_00832ed0(&local_4,&param_2);
      UiEditor_updateSelectedControlPropertyList(param_1);
      return;
    }
    if (*(uint *)(iVar1 + 0xc) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  return;
}

