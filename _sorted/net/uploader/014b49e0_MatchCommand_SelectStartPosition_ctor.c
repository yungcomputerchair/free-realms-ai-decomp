// addr: 0x014b49e0
// name: MatchCommand_SelectStartPosition_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_SelectStartPosition_ctor(void * this) */

void * __fastcall MatchCommand_SelectStartPosition_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MatchCommand_SelectStartPosition command object by running its
                       common base constructor, installing the MatchCommand_SelectStartPosition
                       vtable, and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7b43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_SelectStartPosition::vftable;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

