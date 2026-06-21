// addr: 0x014b3f50
// name: MatchCommand_SetBulkMatchState_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_SetBulkMatchState_ctor(void * this) */

void * __fastcall MatchCommand_SetBulkMatchState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MatchCommand_SetBulkMatchState command object by running its
                       common base constructor, installing the MatchCommand_SetBulkMatchState
                       vtable, and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a792e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MatchCommand_ctor(this);
  *(undefined ***)this = MatchCommand_SetBulkMatchState::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

