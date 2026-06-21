// addr: 0x007e7380
// name: AnimVisibilityController_addReference
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimVisibilityController_addReference(void * this, void * reference) */

void __thiscall AnimVisibilityController_addReference(void *this,void *reference)

{
  undefined4 *puVar1;
  int iVar2;
  int capacity_;
  
                    /* Removes any existing instance of a reference, lazily creates runtime state,
                       then appends the reference to the AnimVisibilityController reference array.
                        */
  AnimVisibilityController_removeReference(this,reference);
  if (*(int *)((int)this + 0x14) == 0) {
    AnimationController_createRuntimeState(this);
  }
  iVar2 = *(int *)((int)this + 0x14);
  capacity_ = *(int *)(iVar2 + 0x34) + 1;
  if (*(int *)(iVar2 + 0x38) < capacity_) {
    AnimVisibilityController_reserveReferenceArray((void *)(iVar2 + 0x2c),capacity_,(void *)0x0);
  }
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x30) + *(int *)(iVar2 + 0x34) * 4);
  *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = reference;
  }
  return;
}

