// addr: 0x014a5a90
// name: TradeCommand_SetupFinalTradeAccept_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_SetupFinalTradeAccept_ctor(void * this) */

void * __fastcall TradeCommand_SetupFinalTradeAccept_ctor(void *this)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TradeCommand_SetupFinalTradeAccept, installing its vtable and
                       zeroing two groups of scalar fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4d86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  *(undefined ***)this = TradeCommand_SetupFinalTradeAccept::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_4._1_3_ = 0;
  local_4._0_1_ = 2;
  FUN_01442520();
  local_4 = CONCAT31(local_4._1_3_,2);
  TradeCommand_dtor(local_18);
  ExceptionList = local_c;
  return this;
}

