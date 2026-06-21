// addr: 0x013d44e0
// name: CollectionElementVector_eraseAt
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionElementVector_eraseAt(void * this, void * resultPair, void *
   value, void * erasePos) */

void __thiscall
CollectionElementVector_eraseAt(void *this,void *resultPair,void *value,void *erasePos)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  void *other;
  undefined4 *puVar4;
  
                    /* Vector erase helper that destroys elements after an erase position, destroys
                       the old tail element, decrements the end pointer, and returns bookkeeping in
                       resultPair. */
  pvVar1 = *(void **)((int)this + 8);
  other = (void *)((int)erasePos + 0x10);
  if (other != pvVar1) {
    iVar3 = (int)erasePos - (int)other;
    do {
      InstanceID_assignFrom((void *)(iVar3 + (int)other),other);
      other = (void *)((int)other + 0x10);
    } while (other != pvVar1);
  }
  puVar2 = *(undefined4 **)((int)this + 8);
  for (puVar4 = puVar2 + -4; puVar4 != puVar2; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(0);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x10;
  *(void **)resultPair = value;
  *(void **)((int)resultPair + 4) = erasePos;
  return;
}

