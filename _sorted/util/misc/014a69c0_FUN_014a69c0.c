// addr: 0x014a69c0
// name: FUN_014a69c0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_014a69c0(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor thunk for an unknown query/macro node; calls
                       cleanup and frees this when requested. */
  TradeCommand_SetTradeAllowed_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

