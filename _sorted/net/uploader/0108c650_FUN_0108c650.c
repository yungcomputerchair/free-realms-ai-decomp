// addr: 0x0108c650
// name: FUN_0108c650
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0108c650(void * this, int key_, int value_) */

void __thiscall FUN_0108c650(void *this,int key_,int value_)

{
  char cVar1;
  
                    /* Looks up/registers this object in a global manager with a key, and if
                       successful stores a value at offset 8. No class identity is visible. */
  cVar1 = FUN_0108f130(DAT_01cb8458,key_,this);
  if (cVar1 != '\0') {
    *(int *)((int)this + 8) = value_;
  }
  return;
}

