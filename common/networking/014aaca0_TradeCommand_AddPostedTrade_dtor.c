// addr: 0x014aaca0
// name: TradeCommand_AddPostedTrade_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AddPostedTrade_dtor(void * this) */

void __fastcall TradeCommand_AddPostedTrade_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for TradeCommand_AddPostedTrade; releases an owned
                       object when its ownership flag is set, then calls TradeCommand_dtor. */
  puStack_8 = &LAB_016a5e78;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_AddPostedTrade::vftable;
  local_4 = 0;
  if ((*(char *)((int)this + 0x10) == '\x01') &&
     (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 0xc))(1,uVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

