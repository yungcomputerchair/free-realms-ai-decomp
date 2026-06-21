// addr: 0x014f9b90
// name: OrderItem_deletingDtorThunk
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void OrderItem_deletingDtorThunk(void) */

void OrderItem_deletingDtorThunk(void)

{
                    /* Tiny thunk that forwards to the OrderItem scalar deleting destructor. It
                       contains no other logic. */
  OrderItem_scalarDeletingDtor();
  return;
}

