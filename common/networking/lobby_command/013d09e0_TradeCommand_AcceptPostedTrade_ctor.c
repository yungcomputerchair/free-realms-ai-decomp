// addr: 0x013d09e0
// name: TradeCommand_AcceptPostedTrade_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_AcceptPostedTrade_ctor(void * this) */

void * __fastcall TradeCommand_AcceptPostedTrade_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TradeCommand_AcceptPostedTrade by installing its vtable and
                       clearing two member fields after base setup. Evidence is
                       TradeCommand_AcceptPostedTrade::vftable and send/create callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ae48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TradeCommand_AcceptPostedTrade::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

