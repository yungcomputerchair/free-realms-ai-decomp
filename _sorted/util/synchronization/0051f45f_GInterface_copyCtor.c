// addr: 0x0051f45f
// name: GInterface_copyCtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GInterface_copyCtor(void * this, void * other) */

void * __thiscall GInterface_copyCtor(void *this,void *other)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* Initializes the GInterface vtable, copies base/vector state from another
                       object, and copies six 32-bit fields from the source tail. It is used by
                       synchronization object copy constructors as their common base copy step. */
  *(undefined ***)this = &PTR_FUN_01770914;
  FUN_005191ba((int)other + 4);
  puVar2 = (undefined4 *)((int)other + 0x14);
  puVar3 = (undefined4 *)((int)this + 0x14);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return this;
}

