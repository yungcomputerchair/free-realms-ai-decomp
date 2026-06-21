// addr: 0x01501d70
// name: CommandObject_PlayCard_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_PlayCard_dtor(void * this) */

void __fastcall CommandObject_PlayCard_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_PlayCard: installs the CommandObject_PlayCard
                       vftable and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b4718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_PlayCard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_PlayCard::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

