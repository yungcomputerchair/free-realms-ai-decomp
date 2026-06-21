// addr: 0x0150d1a0
// name: CommandObject_ChainedAction_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_ChainedAction_dtor(void * this) */

void __fastcall CommandObject_ChainedAction_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_ChainedAction: installs the
                       CommandObject_ChainedAction vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b5f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_ChainedAction::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_ChainedAction::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

