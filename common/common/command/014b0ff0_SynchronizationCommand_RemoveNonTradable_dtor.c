// addr: 0x014b0ff0
// name: SynchronizationCommand_RemoveNonTradable_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RemoveNonTradable_dtor(void * this) */

void __fastcall SynchronizationCommand_RemoveNonTradable_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Complete destructor for SynchronizationCommand_RemoveNonTradable; sets the
                       derived vftable then delegates to ChangeFlags destruction. */
  puStack_8 = &LAB_016a6f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_RemoveNonTradable::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_ChangeFlags_dtor(this);
  ExceptionList = local_c;
  return;
}

