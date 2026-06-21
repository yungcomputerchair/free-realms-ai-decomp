// addr: 0x01509f10
// name: CommandObject_DrawCard_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_DrawCard_dtor(void * this) */

void __fastcall CommandObject_DrawCard_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_DrawCard: installs the CommandObject_DrawCard
                       vftable and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b58f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_DrawCard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_DrawCard::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

