// addr: 0x013d0db0
// name: TradeCommand_AcceptPostedTrade_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_AcceptPostedTrade_dtor_deleting(void * this, char flags_)
    */

void * __thiscall TradeCommand_AcceptPostedTrade_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for TradeCommand_AcceptPostedTrade; restores
                       derived vtable, calls TradeCommand base destructor, and optionally frees
                       this. Evidence: explicit vtable name and deleting destructor shape. */
  puStack_8 = &LAB_0168af38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_AcceptPostedTrade::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

