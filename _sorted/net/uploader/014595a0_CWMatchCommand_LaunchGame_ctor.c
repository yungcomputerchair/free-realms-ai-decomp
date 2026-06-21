// addr: 0x014595a0
// name: CWMatchCommand_LaunchGame_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWMatchCommand_LaunchGame_ctor(void * this) */

void * __fastcall CWMatchCommand_LaunchGame_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWMatchCommand_LaunchGame, invoking its base constructor as
                       needed, assigning CWMatchCommand_LaunchGame::vftable, and initializing
                       default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_LaunchGame_ctor(this);
  *(undefined ***)this = CWMatchCommand_LaunchGame::vftable;
  ExceptionList = local_c;
  return this;
}

