// addr: 0x012d09e0
// name: ObjectWithField1c_hasValue
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ObjectWithField1c_hasValue(void * this) */

int __fastcall ObjectWithField1c_hasValue(void *this)

{
                    /* Returns whether the pointer/integer field at offset 0x1c is nonzero. */
  return (uint)(*(int *)((int)this + 0x1c) != 0);
}

