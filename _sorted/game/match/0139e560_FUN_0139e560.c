// addr: 0x0139e560
// name: FUN_0139e560
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void dispatchToNestedChildren34_alt(int object_, undefined4 arg_) */

void __thiscall dispatchToNestedChildren34_alt(void *this,int object_,undefined4 arg_)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* Dispatches virtual method +0x34 on every child object stored in each nested
                       vector of the container at object+0x10. */
  piVar1 = *(int **)((int)this + 0x10);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (this == (void *)0xfffffff4) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (this == (void *)0xfffffff4) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)this + 0x10)) {
      FUN_00d83c2d();
    }
    puVar3 = (undefined4 *)piVar2[6];
    if (puVar3 < (undefined4 *)piVar2[5]) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)this + 0x10)) {
      FUN_00d83c2d();
    }
    puVar4 = (undefined4 *)piVar2[5];
    if ((undefined4 *)piVar2[6] < puVar4) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (puVar4 == puVar3) break;
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)piVar2[6] <= puVar4) {
        FUN_00d83c2d();
      }
      (**(code **)(*(int *)*puVar4 + 0x34))(object_);
      if ((undefined4 *)piVar2[6] <= puVar4) {
        FUN_00d83c2d();
      }
      puVar4 = puVar4 + 1;
    }
    FUN_01340aa0();
  }
  return;
}

