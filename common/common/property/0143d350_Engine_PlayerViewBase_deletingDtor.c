// addr: 0x0143d350
// name: Engine_PlayerViewBase_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_PlayerViewBase_deletingDtor(void * this, int flags) */

void * __thiscall Engine_PlayerViewBase_deletingDtor(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::PlayerViewBase. It installs the
                       PlayerViewBase vftable, calls the common view-base destructor, and frees this
                       when requested. */
  puStack_8 = &LAB_01698138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::PlayerViewBase::vftable;
  local_4 = 0xffffffff;
  Engine_SortableView_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

