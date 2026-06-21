// addr: 0x014179e0
// name: ReturnValueMap_dtor
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ReturnValueMap_dtor(void * this) */

void __fastcall ReturnValueMap_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a ReturnValueMap, setting the ReturnValueMap vftable, running its
                       contained map cleanup, then restoring base PersistentComponent/PersistentBase
                       vftables. */
  puStack_8 = &LAB_0169317b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = ReturnValueMap::vftable;
  local_4 = 0;
  FUN_01417960(uVar1);
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

