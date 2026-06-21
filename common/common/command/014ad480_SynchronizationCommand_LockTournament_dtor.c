// addr: 0x014ad480
// name: SynchronizationCommand_LockTournament_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_LockTournament_dtor(void * this) */

void __fastcall SynchronizationCommand_LockTournament_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Complete destructor for SynchronizationCommand_LockTournament; restores
                       derived vftable then destroys the ChangeFlags base. */
  puStack_8 = &LAB_016a66c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_LockTournament::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_ChangeFlags_dtor(this);
  ExceptionList = local_c;
  return;
}

