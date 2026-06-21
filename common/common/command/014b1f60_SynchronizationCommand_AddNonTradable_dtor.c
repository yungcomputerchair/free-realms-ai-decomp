// addr: 0x014b1f60
// name: SynchronizationCommand_AddNonTradable_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_AddNonTradable_dtor(void * this) */

void __fastcall SynchronizationCommand_AddNonTradable_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Complete destructor for SynchronizationCommand_AddNonTradable; restores
                       derived vftable and delegates to ChangeFlags cleanup. */
  puStack_8 = &LAB_016a7268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_AddNonTradable::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_ChangeFlags_dtor(this);
  ExceptionList = local_c;
  return;
}

