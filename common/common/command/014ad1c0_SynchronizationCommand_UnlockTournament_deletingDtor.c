// addr: 0x014ad1c0
// name: SynchronizationCommand_UnlockTournament_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_UnlockTournament_deletingDtor(void * this, char
   flags) */

void * __thiscall SynchronizationCommand_UnlockTournament_deletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for SynchronizationCommand_UnlockTournament; runs base
                       destruction and frees this when requested. */
  puStack_8 = &LAB_016a6668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_UnlockTournament::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_ChangeFlags_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

