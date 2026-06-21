// addr: 0x0144a8c0
// name: EventCommand_RequestEventSessionsOnDay_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestEventSessionsOnDay_ctor(void * this) */

void * __fastcall EventCommand_RequestEventSessionsOnDay_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs RequestEventSessionsOnDay command, initializing base event command
                       and clearing three request fields. Vtable directly identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169a788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_RequestEventSessionsOnDay::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

