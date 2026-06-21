// addr: 0x014a6b30
// name: TradeCommand_SetListenStatus_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_SetListenStatus_ctor(void * this) */

void * __fastcall TradeCommand_SetListenStatus_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SetListenStatus trade command and clears its listen flag. Vtable
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4fe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TradeCommand_SetListenStatus::vftable;
  *(undefined1 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

