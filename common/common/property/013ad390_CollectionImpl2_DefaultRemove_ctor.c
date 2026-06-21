// addr: 0x013ad390
// name: CollectionImpl2_DefaultRemove_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionImpl2_DefaultRemove_ctor(void * this) */

void * __fastcall CollectionImpl2_DefaultRemove_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for Engine::CollectionImpl<2,Engine::DefaultRemove<2>>. It
                       initializes the Collection base, switches to the CollectionImpl vtable,
                       constructs internal storage, and clears small state bytes. */
  puStack_8 = &LAB_01686a03;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::Collection::vftable;
  local_4 = 0;
  *(undefined ***)this = Engine::CollectionImpl<2,Engine::DefaultRemove<2>_>::vftable;
  FUN_013ac100(uVar1);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x11) = 0x101;
  ExceptionList = local_c;
  return this;
}

