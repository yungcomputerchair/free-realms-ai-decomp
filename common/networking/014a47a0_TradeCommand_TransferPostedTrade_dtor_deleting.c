// addr: 0x014a47a0
// name: TradeCommand_TransferPostedTrade_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_TransferPostedTrade_dtor_deleting(void * this, char
   flags_) */

void * __thiscall TradeCommand_TransferPostedTrade_dtor_deleting(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper for TradeCommand_TransferPostedTrade;
                       calls its destructor and optionally frees this. */
  TradeCommand_TransferPostedTrade_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

