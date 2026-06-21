// addr: 0x005e1f88
// name: RbTreeIterator_increment
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeIterator_increment(void * this) */

void __fastcall RbTreeIterator_increment(void *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
                    /* Advances a red-black tree iterator to the in-order successor, raising the
                       shared iterator error on end/invalid use. */
  if (*(int *)this == 0) {
    FUN_00d83c2d();
  }
  iVar2 = *(int *)((int)this + 4);
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar1 = *(int **)(iVar2 + 8);
    if (*(char *)((int)*(int **)(iVar2 + 8) + 0x11) == '\0') {
      do {
        piVar3 = piVar1;
        piVar1 = (int *)*piVar3;
      } while (*(char *)((int)piVar1 + 0x11) == '\0');
      *(int **)((int)this + 4) = piVar3;
    }
    else {
      while ((iVar2 = *(int *)(iVar2 + 4), *(char *)(iVar2 + 0x11) == '\0' &&
             (*(int *)((int)this + 4) == *(int *)(iVar2 + 8)))) {
        *(int *)((int)this + 4) = iVar2;
      }
      *(int *)((int)this + 4) = iVar2;
    }
    return;
  }
  FUN_00d83c2d();
  return;
}

