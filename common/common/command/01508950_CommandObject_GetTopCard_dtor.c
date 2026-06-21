// addr: 0x01508950
// name: CommandObject_GetTopCard_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_GetTopCard_dtor(void * this) */

void __fastcall CommandObject_GetTopCard_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_GetTopCard: installs the
                       CommandObject_GetTopCard vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b54d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_GetTopCard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_GetTopCard::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

