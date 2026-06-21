// addr: 0x013d4800
// name: CollectionElementVector_eraseMatchingItemIds
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionElementVector_eraseMatchingItemIds(void * this, void * ids) */

void __thiscall CollectionElementVector_eraseMatchingItemIds(void *this,void *ids)

{
  void *this_00;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *erasePos;
  undefined1 local_8 [4];
  uint local_4;
  
                    /* Removes a collection item element whose ids match the supplied key from the
                       vector at +0x20. It finds the element via CollectionItem_findByIdsInRange and
                       erases it with CollectionElementVector_eraseAt. */
  uVar1 = *(uint *)((int)this + 0x28);
  this_00 = (void *)((int)this + 0x20);
  if (uVar1 < *(uint *)((int)this + 0x24)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x24);
  if (*(uint *)((int)this + 0x28) < uVar2) {
    FUN_00d83c2d();
  }
  local_4 = uVar2;
  erasePos = (void *)CollectionItem_findByIdsInRange(uVar2,uVar1,ids);
  pvVar3 = *(void **)((int)this + 0x28);
  if (pvVar3 < *(void **)((int)this + 0x24)) {
    FUN_00d83c2d();
  }
  if (this_00 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (erasePos != pvVar3) {
    CollectionElementVector_eraseAt(this_00,local_8,this_00,erasePos);
  }
  return;
}

