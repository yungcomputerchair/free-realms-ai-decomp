// addr: 0x010a4850
// name: MaterialParameterMap_applyOverrides
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MaterialParameterMap_applyOverrides(void * this, void * overrideList) */

void __thiscall MaterialParameterMap_applyOverrides(void *this,void *overrideList)

{
  int iVar1;
  int *array;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  uint unaff_EDI;
  int local_4;
  
                    /* Iterates a list of 12-byte override records, hashes/looks up each key in a
                       mapping table, applies matching entries through FUN_010a44f0, and marks
                       applied records. */
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)((int)overrideList + 0x10)) {
    do {
      iVar1 = *(int *)((int)overrideList + 0xc);
      array = *(int **)(iVar1 + 4 + iVar3);
      find_first_sorted_pair_index((void *)((int)this + 0x7c),array,unaff_EDI);
      if (((*(int **)(*(int *)((int)this + 0x7c) + extraout_EAX * 8) == array) &&
          (iVar2 = *(int *)(*(int *)((int)this + 0x7c) + extraout_EAX * 8 + 4), -1 < iVar2)) &&
         (iVar2 < *(int *)((int)this + 0x10))) {
        FUN_010a44f0(iVar2,array,*(undefined4 *)(iVar1 + iVar3),1);
        *(undefined1 *)(*(int *)((int)overrideList + 0xc) + 8 + iVar3) = 1;
      }
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (local_4 < *(int *)((int)overrideList + 0x10));
  }
  return;
}

