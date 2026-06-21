// addr: 0x01327640
// name: Utility_DisplayActionBuilder_addOptionalBool
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Utility_DisplayActionBuilder_addOptionalBool(void * flagPtr) */

void __thiscall Utility_DisplayActionBuilder_addOptionalBool(void *this,void *flagPtr)

{
                    /* If the pointer's field +4 is nonzero, emits a boolean DisplayAction argument
                       via DisplayActionBuilder_addBoolArg. Exact wrapper class is not identified.
                        */
  if (*(void **)((int)this + 4) != (void *)0x0) {
    DisplayActionBuilder_addBoolArg(*(void **)((int)this + 4),flagPtr._0_1_);
    return;
  }
  return;
}

