// addr: 0x014aba90
// name: TradeCommand_AcceptTradeRequest_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_AcceptTradeRequest_ctor(void * this) */

void * __fastcall TradeCommand_AcceptTradeRequest_ctor(void *this)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Constructs TradeCommand_AcceptTradeRequest and zeroes two scalar fields after
                       TradeCommand base setup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6100;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  local_4 = 0;
  *(undefined ***)this = TradeCommand_AcceptTradeRequest::vftable;
  FUN_01442520();
  local_4 = local_4 & 0xffffff00;
  TradeCommand_dtor(local_18);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

