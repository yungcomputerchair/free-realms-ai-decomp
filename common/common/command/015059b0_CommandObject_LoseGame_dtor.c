// addr: 0x015059b0
// name: CommandObject_LoseGame_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_LoseGame_dtor(void * this) */

void __fastcall CommandObject_LoseGame_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_LoseGame: installs the CommandObject_LoseGame
                       vftable and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b4e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_LoseGame::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_LoseGame::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

