// addr: 0x013ef450
// name: Exception_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_dtor(void * this) */

void __fastcall Exception_dtor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys an Exception object by switching to Exception vftable, freeing its
                       three small-string members if heap-backed, then restoring base vftables. This
                       is the destructor counterpart to Exception_ctor. */
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_0168f111;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Exception::vftable;
  local_4 = 2;
  if (0xf < *(uint *)((int)this + 0x58)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x44));
  }
  *(undefined4 *)((int)this + 0x58) = 0xf;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x38)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = pvVar1;
  return;
}

