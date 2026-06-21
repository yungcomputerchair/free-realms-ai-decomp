// addr: 0x01442df0
// name: PollCommand_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PollCommand_ctor(void * this) */

void * __fastcall PollCommand_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the PollCommand base by calling NetworkCommand_ctor and installing
                       the PollCommand vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016990f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = PollCommand::vftable;
  ExceptionList = local_c;
  return this;
}

