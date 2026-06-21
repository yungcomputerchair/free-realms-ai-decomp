// addr: 0x014ab010
// name: TradeCommand_AddPostedTrade_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_AddPostedTrade_dtor_deleting(void * this, char flags_) */

void * __thiscall TradeCommand_AddPostedTrade_dtor_deleting(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper for TradeCommand_AddPostedTrade; calls its
                       destructor and optionally frees this. */
  TradeCommand_AddPostedTrade_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

