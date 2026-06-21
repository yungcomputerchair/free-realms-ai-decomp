// addr: 0x0150dda0
// name: CommandObject_AlternateMultiAction_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_AlternateMultiAction_dtor(void * this) */

void __fastcall CommandObject_AlternateMultiAction_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_AlternateMultiAction: installs the
                       CommandObject_AlternateMultiAction vftable and chains to the CommandObject
                       base destructor. */
  puStack_8 = &LAB_016b6178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_AlternateMultiAction::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_AlternateMultiAction::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

