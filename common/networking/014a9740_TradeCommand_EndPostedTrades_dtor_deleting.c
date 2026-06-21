// addr: 0x014a9740
// name: TradeCommand_EndPostedTrades_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_EndPostedTrades_dtor_deleting(void * this, char flags_) */

void * __thiscall TradeCommand_EndPostedTrades_dtor_deleting(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for TradeCommand_EndPostedTrades; calls
                       TradeCommand_dtor and optionally frees this. */
  puStack_8 = &LAB_016a5948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TradeCommand_EndPostedTrades::vftable;
  local_4 = 0xffffffff;
  TradeCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

