// addr: 0x0152f2e0
// name: EventCommand_RequestDuelistStats_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestDuelistStats_ctor(void * this) */

void * __fastcall EventCommand_RequestDuelistStats_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_RequestDuelistStats by running the EventCommand base
                       constructor and assigning the derived vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016baeb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_RequestDuelistStats::vftable;
  ExceptionList = local_c;
  return this;
}

