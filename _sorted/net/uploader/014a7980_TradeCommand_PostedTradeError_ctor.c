// addr: 0x014a7980
// name: TradeCommand_PostedTradeError_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_PostedTradeError_ctor(void * this) */

void * __fastcall TradeCommand_PostedTradeError_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PostedTradeError command and initializes its error code/flag
                       fields. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TradeCommand_PostedTradeError::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

