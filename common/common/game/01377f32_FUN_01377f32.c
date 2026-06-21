// addr: 0x01377f32
// name: FUN_01377f32
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void cleanup_thunk_01377f32(void) */

void cleanup_thunk_01377f32(void)

{
  int unaff_EBP;
  int *unaff_ESI;
  
                    /* Exception-cleanup thunk generated inside a larger function: calls virtual
                       method +0x14 on the saved ESI object with a saved local pointer, then
                       restores ExceptionList. Not enough evidence for a stable C++ method name. */
  (**(code **)(*unaff_ESI + 0x14))(*(undefined4 *)(unaff_EBP + -0xc4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

