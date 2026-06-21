// addr: 0x013d4720
// name: CollectionItem_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionItem_dtor(void * this) */

void __fastcall CollectionItem_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for CollectionItem; resets the vtable, destroys two embedded
                       vector-like members, then chains to PersistentComponent/PersistentBase
                       teardown. */
  puStack_8 = &LAB_0168b6b6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = CollectionItem::vftable;
  local_4 = 1;
  FUN_012c2de0(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_012c2de0();
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

