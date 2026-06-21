// addr: 0x013edd10
// name: ECommCommand_registerFactoriesAll
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ECommCommand_registerFactoriesAll(void) */

void ECommCommand_registerFactoriesAll(void)

{
                    /* Registers EComm command factories for the base command, order history, and
                       redeem item grant command. Evidence is the three named
                       ECommCommand_*_registerFactory callees. */
  ECommCommand_registerFactory();
  ECommCommand_OrderHistory_registerFactory();
  ECommCommand_RedeemItemGrant_registerFactory();
  return;
}

