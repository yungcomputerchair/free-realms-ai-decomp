// addr: 0x013d0540
// name: TradeCommand_CancelPostedTrade_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_CancelPostedTrade_ctor(void * this) */

void * __fastcall TradeCommand_CancelPostedTrade_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TradeCommand_CancelPostedTrade object by running the base setup
                       and installing TradeCommand_CancelPostedTrade::vftable, then zeroing its
                       payload field. Evidence is the vtable assignment and callers named
                       TradeCommand_CancelPostedTrade_send/create paths. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ad28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TradeCommand_CancelPostedTrade::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

