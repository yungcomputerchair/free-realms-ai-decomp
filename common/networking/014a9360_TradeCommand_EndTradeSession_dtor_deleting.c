// addr: 0x014a9360
// name: TradeCommand_EndTradeSession_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_EndTradeSession_dtor_deleting(void * this, char flags_) */

void * __thiscall TradeCommand_EndTradeSession_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for TradeCommand_EndTradeSession; calls
                       TradeCommand_dtor and optionally frees this. */
  puStack_8 = &LAB_016a5828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_EndTradeSession::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

