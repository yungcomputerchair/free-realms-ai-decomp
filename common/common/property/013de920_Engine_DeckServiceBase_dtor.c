// addr: 0x013de920
// name: Engine_DeckServiceBase_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_DeckServiceBase_dtor(void * this) */

void __fastcall Engine_DeckServiceBase_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys Engine::DeckServiceBase, setting its vtable and tearing down
                       strings, collection mapper, archetype validator, collection implementation,
                       deck collection view, and base state. Evidence is explicit
                       Engine::DeckServiceBase::vftable assignment and
                       DeckServiceBase_scalarDeletingDtor caller. */
  puStack_8 = &LAB_0168cc66;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::DeckServiceBase::vftable;
  local_4 = 5;
  if (0xf < *(uint *)((int)this + 0x114)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x100));
  }
  *(undefined4 *)((int)this + 0x114) = 0xf;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined1 *)((int)this + 0x100) = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  Engine_CollectionMapper_ctor((void *)((int)this + 0xf8));
  local_4._0_1_ = 3;
  Engine_ArchetypeValidator_ctor((void *)((int)this + 0xf0));
  local_4._0_1_ = 2;
  CollectionImpl2_DefaultRemove_dtor((void *)((int)this + 0xdc));
  local_4._0_1_ = 1;
  Engine_DeckCollectionView_dtor((void *)((int)this + 0x50));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_014432e0(uVar1);
  local_4 = 0xffffffff;
  FUN_01230d30();
  ExceptionList = local_c;
  return;
}

