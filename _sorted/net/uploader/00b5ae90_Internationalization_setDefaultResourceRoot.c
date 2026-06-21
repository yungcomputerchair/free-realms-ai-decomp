// addr: 0x00b5ae90
// name: Internationalization_setDefaultResourceRoot
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Internationalization_setDefaultResourceRoot(void) */

void Internationalization_setDefaultResourceRoot(void)

{
                    /* Sets the internationalization resource root to the literal Resources/ by
                       forwarding it to the underlying resource path setter. */
  FUN_00b5aa40("Resources/");
  return;
}

