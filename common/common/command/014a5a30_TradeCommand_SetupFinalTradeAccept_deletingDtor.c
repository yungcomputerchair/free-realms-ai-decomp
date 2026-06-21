// addr: 0x014a5a30
// name: TradeCommand_SetupFinalTradeAccept_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_SetupFinalTradeAccept_deletingDtor(void * this, char
   flags) */

void * __thiscall TradeCommand_SetupFinalTradeAccept_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for TradeCommand_SetupFinalTradeAccept; invokes the
                       complete destructor then frees this if requested. */
  TradeCommand_SetupFinalTradeAccept_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

