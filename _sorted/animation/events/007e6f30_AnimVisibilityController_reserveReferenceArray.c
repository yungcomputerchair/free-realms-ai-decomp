// addr: 0x007e6f30
// name: AnimVisibilityController_reserveReferenceArray
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimVisibilityController_reserveReferenceArray(void * this, int
   capacity_, void * allocatorTag) */

void __thiscall
AnimVisibilityController_reserveReferenceArray(void *this,int capacity_,void *allocatorTag)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
                    /* Reserves/reallocates the controller reference pointer array, copies existing
                       entries, and releases the old storage. */
  puVar1 = (undefined4 *)(**(code **)(*(int *)this + 4))(capacity_,&allocatorTag,allocatorTag);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      iVar2 = 0;
      puVar3 = puVar1;
      if (0 < *(int *)((int)this + 8)) {
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)(*(int *)((int)this + 4) + iVar2 * 4);
          }
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < *(int *)((int)this + 8));
      }
      (**(code **)(*(int *)this + 8))
                (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0xc));
    }
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 *)((int)this + 0xc) = unaff_ESI;
  }
  return;
}

