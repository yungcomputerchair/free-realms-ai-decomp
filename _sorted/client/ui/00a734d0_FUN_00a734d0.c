// addr: 0x00a734d0
// name: FUN_00a734d0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FUN_00a734d0(void * this, int key_) */

int __thiscall FUN_00a734d0(void *this,int key_)

{
  int *piVar1;
  
                    /* Looks up a key in a 15-bucket hash table, rebuilding/refreshing first if the
                       dirty byte at +600 is set, and returns the stored value or 0xffffffff. Class
                       identity is unknown. */
  if (*(char *)((int)this + 600) != '\0') {
    FUN_00a732e0();
  }
  piVar1 = *(int **)((int)this + ((uint)key_ % 0xf) * 4 + 0x268);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    if (*piVar1 == key_) break;
    piVar1 = (int *)piVar1[2];
  }
  if (piVar1 + 1 == (int *)0x0) {
    return -1;
  }
  return piVar1[1];
}

