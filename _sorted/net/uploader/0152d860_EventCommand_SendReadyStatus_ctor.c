// addr: 0x0152d860
// name: EventCommand_SendReadyStatus_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_SendReadyStatus_ctor(void * this) */

void * __fastcall EventCommand_SendReadyStatus_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_SendReadyStatus and clears the ready-status byte. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016baa38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_SendReadyStatus::vftable;
  *(undefined1 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

