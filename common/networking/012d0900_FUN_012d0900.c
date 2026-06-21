// addr: 0x012d0900
// name: FUN_012d0900
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void clear_member4(void * this) */

void __fastcall clear_member4(void *this)

{
                    /* Clears the 32-bit field at offset 4. Only known caller is a NetworkService
                       helper, but this function has no class, strings, or distinctive behavior. */
  *(undefined4 *)((int)this + 4) = 0;
  return;
}

