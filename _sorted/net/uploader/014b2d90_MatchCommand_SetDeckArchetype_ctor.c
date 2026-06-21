// addr: 0x014b2d90
// name: MatchCommand_SetDeckArchetype_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_SetDeckArchetype_ctor(void * this) */

void * __fastcall MatchCommand_SetDeckArchetype_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MatchCommand_SetDeckArchetype command object by running its
                       common base constructor, installing the MatchCommand_SetDeckArchetype vtable,
                       and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_SetDeckArchetype::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

