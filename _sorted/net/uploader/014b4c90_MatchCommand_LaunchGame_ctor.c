// addr: 0x014b4c90
// name: MatchCommand_LaunchGame_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_LaunchGame_ctor(void * this) */

void * __fastcall MatchCommand_LaunchGame_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MatchCommand_LaunchGame command object by running its common
                       base constructor, installing the MatchCommand_LaunchGame vtable, and clearing
                       command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_LaunchGame::vftable;
  ExceptionList = local_c;
  return this;
}

