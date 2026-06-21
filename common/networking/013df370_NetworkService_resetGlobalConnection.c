// addr: 0x013df370
// name: NetworkService_resetGlobalConnection
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkService_resetGlobalConnection(void) */

void NetworkService_resetGlobalConnection(void)

{
  void *pvVar1;
  
                    /* Ensures the NetworkService singleton exists, tears down its current
                       connection state, deletes a pending object if present, and invokes a final
                       no-op/default callback. Evidence: calls NetworkService_getSingleton twice and
                       NetworkService disconnect helper. */
  pvVar1 = NetworkService_getSingleton();
  NetworkService_logout(pvVar1);
  pvVar1 = NetworkService_getSingleton();
  VirtualObject_deleteIfNotNull(pvVar1);
  noop();
  return;
}

