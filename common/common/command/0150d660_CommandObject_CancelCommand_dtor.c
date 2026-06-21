// addr: 0x0150d660
// name: CommandObject_CancelCommand_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_CancelCommand_dtor(void * this) */

void __fastcall CommandObject_CancelCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_CancelCommand: installs the
                       CommandObject_CancelCommand vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b5ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_CancelCommand::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_CancelCommand::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

