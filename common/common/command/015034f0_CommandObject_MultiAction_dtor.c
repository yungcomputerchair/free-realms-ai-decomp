// addr: 0x015034f0
// name: CommandObject_MultiAction_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_MultiAction_dtor(void * this) */

void __fastcall CommandObject_MultiAction_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_MultiAction: installs the
                       CommandObject_MultiAction vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b4a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_MultiAction::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_MultiAction::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

