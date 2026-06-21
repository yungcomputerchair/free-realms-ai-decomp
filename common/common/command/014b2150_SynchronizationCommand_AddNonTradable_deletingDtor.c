// addr: 0x014b2150
// name: SynchronizationCommand_AddNonTradable_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_AddNonTradable_deletingDtor(void * this, char
   flags) */

void * __thiscall SynchronizationCommand_AddNonTradable_deletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for SynchronizationCommand_AddNonTradable; destroys the
                       ChangeFlags base and optionally releases storage. */
  puStack_8 = &LAB_016a72f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_AddNonTradable::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_ChangeFlags_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

