// addr: 0x014aabe0
// name: TradeCommand_AddPostedTrade_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_AddPostedTrade_ctor(void * this) */

void * __fastcall TradeCommand_AddPostedTrade_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AddPostedTrade command and initializes its id/status fields,
                       including a default true byte flag. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01442520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TradeCommand_AddPostedTrade::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 1;
  ExceptionList = local_c;
  return this;
}

