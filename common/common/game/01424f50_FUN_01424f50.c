// addr: 0x01424f50
// name: FUN_01424f50
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void sub_01424f50(void) */

void sub_01424f50(void)

{
                    /* Tiny forwarding thunk called by Player_drawCards; it invokes FUN_005f1e5c
                       with the original calling context. */
  FUN_005f1e5c();
  return;
}

