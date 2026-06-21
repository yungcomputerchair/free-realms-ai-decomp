// addr: 0x01535a70
// name: EventCommand_ForceIntoEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_ForceIntoEvent_ctor(void * this) */

void * __fastcall EventCommand_ForceIntoEvent_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_ForceIntoEvent, clears an event/player field, and
                       defaults the force flag true. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bbed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_ForceIntoEvent::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 1;
  ExceptionList = local_c;
  return this;
}

