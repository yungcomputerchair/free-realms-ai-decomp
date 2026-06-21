// addr: 0x013ae2f0
// name: CollectionImpl2_DefaultRemove_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionImpl2_DefaultRemove_dtor(void * this) */

void __fastcall CollectionImpl2_DefaultRemove_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::CollectionImpl<2,Engine::DefaultRemove<2>>. It
                       installs the derived vtable, destroys the implementation storage via
                       FUN_013ac020, then restores the Collection base vtable. */
  puStack_8 = &LAB_01686af3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::CollectionImpl<2,Engine::DefaultRemove<2>_>::vftable;
  local_4 = 0;
  FUN_013ac020(uVar1);
  *(undefined ***)this = Engine::Collection::vftable;
  ExceptionList = local_c;
  return;
}

