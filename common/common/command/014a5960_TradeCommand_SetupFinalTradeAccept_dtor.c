// addr: 0x014a5960
// name: TradeCommand_SetupFinalTradeAccept_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_SetupFinalTradeAccept_dtor(void * this) */

void __fastcall TradeCommand_SetupFinalTradeAccept_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for TradeCommand_SetupFinalTradeAccept; installs its vtable,
                       destroys two base/member components, then chains to the trade command base
                       destructor. */
  puStack_8 = &LAB_016a4d3e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_SetupFinalTradeAccept::vftable;
  local_4 = 1;
  FUN_012c2de0(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_012c2de0();
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

