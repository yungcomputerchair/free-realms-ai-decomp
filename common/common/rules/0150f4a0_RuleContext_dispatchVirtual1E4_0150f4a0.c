// addr: 0x0150f4a0
// name: RuleContext_dispatchVirtual1E4_0150f4a0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool RuleContext_dispatchVirtual1E4_0150f4a0(void) */

bool RuleContext_dispatchVirtual1E4_0150f4a0(void)

{
  int *piVar1;
  int in_ECX;
  
                    /* Identical to 015009f0: gets the current rules object, calls vtable slot
                       0x1e4, and returns true. */
  piVar1 = EvaluationEnvironment_getOriginCard((void *)(in_ECX + 0x84));
  (**(code **)(*piVar1 + 0x1e4))();
  return true;
}

