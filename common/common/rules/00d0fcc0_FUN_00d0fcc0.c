// addr: 0x00d0fcc0
// name: FUN_00d0fcc0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_floatMathWrapper(float inputFloat_) */

void __cdecl unknown_floatMathWrapper(float inputFloat_)

{
                    /* Converts a float to double and forwards it to another math helper. The exact
                       operation is unknown from this wrapper alone. */
  FUN_00d843f0((double)inputFloat_);
  return;
}

