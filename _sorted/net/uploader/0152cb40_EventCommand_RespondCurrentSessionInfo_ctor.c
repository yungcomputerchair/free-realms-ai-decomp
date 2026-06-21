// addr: 0x0152cb40
// name: EventCommand_RespondCurrentSessionInfo_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RespondCurrentSessionInfo_ctor(void * this) */

void * __fastcall EventCommand_RespondCurrentSessionInfo_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_RespondCurrentSessionInfo and clears its
                       session/player fields and boolean flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_RespondCurrentSessionInfo::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

