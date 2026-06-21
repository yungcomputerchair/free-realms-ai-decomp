// addr: 0x01355f50
// name: ValueDataArg_initEmptyString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueDataArg_initEmptyString(void * value) */

void __fastcall ValueDataArg_initEmptyString(void *value)

{
                    /* Initializes a small value/argument object to zero with an empty small-string
                       member using capacity 0xf and length 0. */
  *(undefined4 *)value = 0;
  *(undefined4 *)((int)value + 4) = 0;
  *(undefined4 *)((int)value + 0x20) = 0xf;
  *(undefined4 *)((int)value + 0x1c) = 0;
  *(undefined1 *)((int)value + 0xc) = 0;
  return;
}

