// addr: 0x0131d840
// name: StateObject_setModeFromVectorEmpty
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateObject_setModeFromVectorEmpty(void * this, void * vector) */

void __thiscall StateObject_setModeFromVectorEmpty(void *this,void *vector)

{
                    /* Sets field +0x50 to 2, changes it to 1 when a vector-like argument is empty,
                       then runs a cleanup helper. Exact class and field meaning are not evident. */
  *(undefined4 *)((int)this + 0x50) = 2;
  if ((*(int *)((int)vector + 4) == 0) ||
     (*(int *)((int)vector + 8) - *(int *)((int)vector + 4) >> 2 == 0)) {
    *(undefined4 *)((int)this + 0x50) = 1;
  }
  FUN_0131c820();
  return;
}

