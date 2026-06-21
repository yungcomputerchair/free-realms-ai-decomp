// addr: 0x014a67c0
// name: TradeCommand_SetTradeAllowed_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_SetTradeAllowed_dtor(void * this) */

void __fastcall TradeCommand_SetTradeAllowed_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_SetTradeAllowed; destroys an
                       embedded member and calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a4f23;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_SetTradeAllowed::vftable;
  local_4 = 0;
  FUN_0129d560(uVar1);
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

