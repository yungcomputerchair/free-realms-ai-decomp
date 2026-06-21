// addr: 0x014b11e0
// name: SynchronizationCommand_RemoveNonTradable_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_RemoveNonTradable_deletingDtor(void * this, char
   flags) */

void * __thiscall SynchronizationCommand_RemoveNonTradable_deletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for SynchronizationCommand_RemoveNonTradable; destroys
                       the ChangeFlags base and optionally frees this. */
  puStack_8 = &LAB_016a6fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_RemoveNonTradable::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_ChangeFlags_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

