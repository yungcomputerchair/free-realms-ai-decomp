// addr: 0x010c7400
// name: FUN_010c7400
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined * __thiscall FUN_010c7400(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
                    /* Looks up an id through a nested 32-bucket hash table and returns a pointer
                       from a secondary table, falling back to a global default pointer on misses or
                       invalid indices. Exact class is unknown. */
  puVar1 = *(uint **)(*(int *)(param_1 + 0x10) + 0x24 + (param_2 & 0x1f) * 4);
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      return PTR_PTR_01b2cddc;
    }
    if (*puVar1 == param_2) break;
    puVar1 = (uint *)puVar1[2];
  }
  if (puVar1 + 1 == (uint *)0x0) {
    return PTR_PTR_01b2cddc;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + puVar1[1] * 4);
  if (iVar2 == 0) {
    return PTR_PTR_01b2cddc;
  }
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 < 0) {
    return PTR_PTR_01b2cddc;
  }
  return (undefined *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 0x18) + iVar2 * 4) + 0xc);
}

