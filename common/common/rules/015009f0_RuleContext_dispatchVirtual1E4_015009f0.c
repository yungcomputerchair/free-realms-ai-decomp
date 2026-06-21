// addr: 0x015009f0
// name: RuleContext_dispatchVirtual1E4_015009f0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool RuleContext_dispatchVirtual1E4_015009f0(void) */

bool RuleContext_dispatchVirtual1E4_015009f0(void)

{
  int *piVar1;
  int in_ECX;
  
                    /* Fetches a global/current rules object via 013813e0, invokes its vtable slot
                       0x1e4, and returns true. */
  piVar1 = EvaluationEnvironment_getOriginCard((void *)(in_ECX + 0x84));
  (**(code **)(*piVar1 + 0x1e4))();
  return true;
}

