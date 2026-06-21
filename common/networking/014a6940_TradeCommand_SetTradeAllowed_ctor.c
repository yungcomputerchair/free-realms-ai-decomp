// addr: 0x014a6940
// name: TradeCommand_SetTradeAllowed_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_SetTradeAllowed_ctor(void * this) */

void * __fastcall TradeCommand_SetTradeAllowed_ctor(void *this)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TradeCommand_SetTradeAllowed, initializing an embedded member
                       before installing TradeCommand base state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4f5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *(undefined ***)this = TradeCommand_SetTradeAllowed::vftable;
  FUN_0129d6c0();
  local_4._0_1_ = 1;
  FUN_01442520();
  local_4 = CONCAT31(local_4._1_3_,1);
  TradeCommand_dtor(local_18);
  ExceptionList = local_c;
  return this;
}

