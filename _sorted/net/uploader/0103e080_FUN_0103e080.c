// addr: 0x0103e080
// name: FUN_0103e080
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0103e080(void * owner, int first_, int second_) */

void __thiscall FUN_0103e080(void *this,void *owner,int first_,int second_)

{
  undefined4 *puVar1;
  
                    /* Ensures the auxiliary structure at owner+0x28 exists and stores a pair of
                       values into its first two dwords. */
  FUN_0103df50(this);
  puVar1 = *(undefined4 **)((int)this + 0x28);
  *puVar1 = owner;
  puVar1[1] = first_;
  return;
}

