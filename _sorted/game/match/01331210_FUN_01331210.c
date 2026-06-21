// addr: 0x01331210
// name: FUN_01331210
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 virtualBatchDispatch(void * thisObj, int itemVector_) */

undefined4 __thiscall virtualBatchDispatch(void *this,void *thisObj,int itemVector_)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
                    /* Invokes one virtual setup/clear method on an object, then iterates a vector
                       of 4-byte items and dispatches another virtual method for each item. Exact
                       class is not evident. */
  uVar2 = (**(code **)(*(int *)this + 0x25c))();
  puVar3 = *(undefined4 **)((int)thisObj + 4);
  if (*(undefined4 **)((int)thisObj + 8) < puVar3) {
    uVar2 = FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = *(undefined4 **)((int)thisObj + 8);
    if (puVar1 < *(undefined4 **)((int)thisObj + 4)) {
      uVar2 = FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (*(undefined4 **)((int)thisObj + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    uVar2 = (**(code **)(*(int *)this + 600))(*puVar3);
    if (*(undefined4 **)((int)thisObj + 8) <= puVar3) {
      uVar2 = FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

