// addr: 0x014b3240
// name: MatchCommand_SetTimer_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_SetTimer_ctor(void * this) */

void * __fastcall MatchCommand_SetTimer_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MatchCommand_SetTimer command object by running its common base
                       constructor, installing the MatchCommand_SetTimer vtable, and clearing
                       command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_SetTimer::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

