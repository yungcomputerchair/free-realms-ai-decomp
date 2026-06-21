// addr: 0x0150bc20
// name: CommandObject_CustomChoiceDialog_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_CustomChoiceDialog_dtor(void * this) */

void __fastcall CommandObject_CustomChoiceDialog_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_CustomChoiceDialog: installs the
                       CommandObject_CustomChoiceDialog vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b5c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_CustomChoiceDialog::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_CustomChoiceDialog::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

