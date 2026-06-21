// addr: 0x013a3790
// name: AccountInfo_setProperty3eValue
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountInfo_setProperty3eValue(void * this, int value) */

void __thiscall AccountInfo_setProperty3eValue(void *this,int value)

{
                    /* Stores an integer account/property value at offset 0x54. */
  *(int *)((int)this + 0x54) = value;
  return;
}

