// addr: 0x013ce1a0
// name: ComponentFactory_findOrInsertFactorySlot
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ** ComponentFactory_findOrInsertFactorySlot(void * this, int * typeId) */

void ** __thiscall ComponentFactory_findOrInsertFactorySlot(void *this,int *typeId)

{
  uint *extraout_EAX;
  uint uVar1;
  uint uVar2;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
                    /* Finds or inserts the factory entry for a component type and returns the
                       node's factory slot at +0xc. It lower-bounds the type and inserts via
                       FUN_013cdbf0 when absent. */
  FUN_013ccca0(&local_14,typeId);
  uVar2 = local_14;
  local_8 = *(uint *)((int)this + 8);
  if ((local_14 == 0) || (local_14 != (int)this + 4U)) {
    FUN_00d83c2d();
  }
  uVar1 = local_10;
  if (local_10 == local_8) {
    local_14 = *typeId;
    local_10 = 0;
    ComponentFactory_findOrInsertFactorySlot_impl(this,&local_c,&local_14);
    uVar2 = *extraout_EAX;
    uVar1 = extraout_EAX[1];
  }
  if (uVar2 == 0) {
    FUN_00d83c2d();
  }
  if (uVar1 == *(uint *)(uVar2 + 4)) {
    FUN_00d83c2d();
  }
  return (void **)(uVar1 + 0xc);
}

