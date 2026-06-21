// addr: 0x0142a1e0
// name: ValidActionFilter_setEnabled
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidActionFilter_setEnabled(void * this, bool enabled) */

void __thiscall ValidActionFilter_setEnabled(void *this,bool enabled)

{
                    /* Sets the boolean flag at ValidActionFilter offset 0x54. */
  *(bool *)((int)this + 0x54) = enabled;
  return;
}

