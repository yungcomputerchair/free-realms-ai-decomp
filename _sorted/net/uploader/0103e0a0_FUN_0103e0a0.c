// addr: 0x0103e0a0
// name: FUN_0103e0a0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0103e0a0(void * owner, int value_) */

void __thiscall FUN_0103e0a0(void *this,void *owner,int value_)

{
                    /* Ensures the auxiliary structure at owner+0x28 exists and stores a value at
                       offset 8. */
  FUN_0103df50(this);
  *(void **)(*(int *)((int)this + 0x28) + 8) = owner;
  return;
}

