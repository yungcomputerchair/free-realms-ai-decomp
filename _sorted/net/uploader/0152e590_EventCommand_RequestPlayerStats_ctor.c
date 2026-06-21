// addr: 0x0152e590
// name: EventCommand_RequestPlayerStats_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestPlayerStats_ctor(void * this) */

void * __fastcall EventCommand_RequestPlayerStats_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_RequestPlayerStats and clears two request identifier
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bac78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_RequestPlayerStats::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

