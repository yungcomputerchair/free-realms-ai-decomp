// addr: 0x01503110
// name: CommandObject_MultiPlayer_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_MultiPlayer_dtor(void * this) */

void __fastcall CommandObject_MultiPlayer_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_MultiPlayer: installs the
                       CommandObject_MultiPlayer vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b49c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_MultiPlayer::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_MultiPlayer::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

