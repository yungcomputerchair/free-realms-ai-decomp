// addr: 0x014b36c0
// name: MatchCommand_SetMatchState_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_SetMatchState_ctor(void * this) */

void * __fastcall MatchCommand_SetMatchState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MatchCommand_SetMatchState command object by running its common
                       base constructor, installing the MatchCommand_SetMatchState vtable, and
                       clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_SetMatchState::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

