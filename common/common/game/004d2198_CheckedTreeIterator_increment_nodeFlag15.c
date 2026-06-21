// addr: 0x004d2198
// name: CheckedTreeIterator_increment_nodeFlag15
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CheckedTreeIterator_increment_nodeFlag15(void * it) */

void __fastcall CheckedTreeIterator_increment_nodeFlag15(void *it)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* Advances a checked red-black-tree iterator to the next node, using
                       sentinel/color flag byte +0x15. It asserts on invalid owner/end states. */
  if (*(int *)it == 0) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)((int)it + 4);
  if (*(char *)((int)piVar2 + 0x15) == '\0') {
    iVar1 = *piVar2;
    if (*(char *)(*piVar2 + 0x15) == '\0') {
      do {
        iVar3 = iVar1;
        iVar1 = *(int *)(iVar3 + 8);
      } while (*(char *)(iVar1 + 0x15) == '\0');
      *(int *)((int)it + 4) = iVar3;
    }
    else {
      while ((piVar2 = (int *)piVar2[1], *(char *)((int)piVar2 + 0x15) == '\0' &&
             (*(int *)((int)it + 4) == *piVar2))) {
        *(int **)((int)it + 4) = piVar2;
      }
      if (*(char *)(*(int *)((int)it + 4) + 0x15) != '\0') goto LAB_004d21ba;
      *(int **)((int)it + 4) = piVar2;
    }
  }
  else {
    iVar1 = piVar2[2];
    *(int *)((int)it + 4) = iVar1;
    if (*(char *)(iVar1 + 0x15) != '\0') {
LAB_004d21ba:
      FUN_00d83c2d();
      return;
    }
  }
  return;
}

