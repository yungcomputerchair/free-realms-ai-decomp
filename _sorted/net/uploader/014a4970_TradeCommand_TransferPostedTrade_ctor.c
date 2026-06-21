// addr: 0x014a4970
// name: TradeCommand_TransferPostedTrade_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_TransferPostedTrade_ctor(void * this) */

void * __fastcall TradeCommand_TransferPostedTrade_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TransferPostedTrade command using the common trade-command base
                       and clears transfer fields. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a49e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TradeCommand_TransferPostedTrade::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  ExceptionList = local_c;
  return this;
}

