// addr: 0x01506390
// name: CommandObject_IntroduceCard_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_IntroduceCard_dtor(void * this) */

void __fastcall CommandObject_IntroduceCard_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_IntroduceCard: installs the
                       CommandObject_IntroduceCard vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b4ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_IntroduceCard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_IntroduceCard::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

