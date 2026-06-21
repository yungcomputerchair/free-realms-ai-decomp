// addr: 0x014ac190
// name: TradeCommand_AcceptTrade_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_AcceptTrade_ctor(void * this) */

void * __fastcall TradeCommand_AcceptTrade_ctor(void *this)

{
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Constructs TradeCommand_AcceptTrade and initializes its accept flag true
                       after TradeCommand base setup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6250;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *(undefined ***)this = TradeCommand_AcceptTrade::vftable;
  FUN_01442520();
  local_4 = local_4 & 0xffffff00;
  TradeCommand_dtor(local_18);
  *(undefined1 *)((int)this + 0xc) = 1;
  ExceptionList = local_c;
  return this;
}

