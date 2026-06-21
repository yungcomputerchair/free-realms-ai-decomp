// addr: 0x014476d0
// name: EventCommand_SendDontPlay_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_SendDontPlay_ctor(void * this) */

void * __fastcall EventCommand_SendDontPlay_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_SendDontPlay via the common event-command base
                       initializer and installs the class vtable. Vtable symbol identifies the
                       class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01699d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_SendDontPlay::vftable;
  ExceptionList = local_c;
  return this;
}

