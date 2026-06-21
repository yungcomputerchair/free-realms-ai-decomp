// addr: 0x013803c0
// name: Archetype_dtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_dtor(void * this) */

void __fastcall Archetype_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys an Archetype object: sets Archetype vtables, releases an owned
                       component at offset 0x10, destroys subobjects, then falls back through
                       PersistentComponent/PersistentBase vtables. */
  puStack_8 = &LAB_016825a2;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = Archetype::vftable;
  *(undefined4 *)((int)this + 4) = Archetype::vftable;
  local_4 = 2;
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1,uVar1);
  }
  local_4._0_1_ = 1;
  FUN_01380350();
  local_4 = (uint)local_4._1_3_ << 8;
  Sortable_dtor((undefined4 *)((int)this + 4));
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

