// addr: 0x014c3ca0
// name: LobbyCommand_JoinLeague_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_JoinLeague_dtor(void * this) */

void __fastcall LobbyCommand_JoinLeague_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_JoinLeague. It installs the JoinLeague vftable
                       and delegates member/base cleanup to FUN_013b2e80. */
  puStack_8 = &LAB_016aa818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_JoinLeague::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_Join_dtor(this);
  ExceptionList = local_c;
  return;
}

