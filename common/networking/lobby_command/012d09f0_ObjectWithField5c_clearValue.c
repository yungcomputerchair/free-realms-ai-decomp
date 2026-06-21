// addr: 0x012d09f0
// name: ObjectWithField5c_clearValue
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ObjectWithField5c_clearValue(void * this) */

void __fastcall ObjectWithField5c_clearValue(void *this)

{
                    /* Clears the 32-bit field at offset 0x5c. */
  *(undefined4 *)((int)this + 0x5c) = 0;
  return;
}

