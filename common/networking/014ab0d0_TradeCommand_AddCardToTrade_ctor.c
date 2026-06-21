// addr: 0x014ab0d0
// name: TradeCommand_AddCardToTrade_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_AddCardToTrade_ctor(void * this) */

void * __fastcall TradeCommand_AddCardToTrade_ctor(void *this)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TradeCommand_AddCardToTrade, initializing an embedded InstanceID
                       and zeroing related scalar fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5f7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  local_4 = 0;
  *(undefined ***)this = TradeCommand_AddCardToTrade::vftable;
  InstanceID_ctor();
  local_4._0_1_ = 1;
  FUN_01442520();
  local_4 = CONCAT31(local_4._1_3_,1);
  TradeCommand_dtor(local_18);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  ExceptionList = local_c;
  return this;
}

