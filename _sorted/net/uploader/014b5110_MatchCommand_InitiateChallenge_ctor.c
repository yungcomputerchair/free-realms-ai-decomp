// addr: 0x014b5110
// name: MatchCommand_InitiateChallenge_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_InitiateChallenge_ctor(void * this) */

void * __fastcall MatchCommand_InitiateChallenge_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MatchCommand_InitiateChallenge command object by running its
                       common base constructor, installing the MatchCommand_InitiateChallenge
                       vtable, and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7d38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_InitiateChallenge::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

