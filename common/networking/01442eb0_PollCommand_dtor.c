// addr: 0x01442eb0
// name: PollCommand_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_dtor(void * this) */

void __fastcall PollCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for PollCommand; restores PollCommand vtable and
                       calls NetworkCommand_dtor. */
  puStack_8 = &LAB_01699128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PollCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

