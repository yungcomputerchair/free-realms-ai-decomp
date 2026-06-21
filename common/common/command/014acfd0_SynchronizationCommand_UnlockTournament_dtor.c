// addr: 0x014acfd0
// name: SynchronizationCommand_UnlockTournament_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_UnlockTournament_dtor(void * this) */

void __fastcall SynchronizationCommand_UnlockTournament_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Complete destructor for SynchronizationCommand_UnlockTournament; restores its
                       vftable and delegates destruction to the ChangeFlags base. */
  puStack_8 = &LAB_016a65d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_UnlockTournament::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_ChangeFlags_dtor(this);
  ExceptionList = local_c;
  return;
}

