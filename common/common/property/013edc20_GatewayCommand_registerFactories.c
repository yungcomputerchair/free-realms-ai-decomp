// addr: 0x013edc20
// name: GatewayCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GatewayCommand_registerFactories(void) */

void GatewayCommand_registerFactories(void)

{
                    /* Registers gateway networking command factories for GatewayCommand and
                       GatewayCommand_GetConnectionServer. The callees register constructor thunks
                       whose ctors set those vftables. */
  GatewayCommand_registerFactory();
  GatewayCommand_GetConnectionServer_registerFactory();
  return;
}

