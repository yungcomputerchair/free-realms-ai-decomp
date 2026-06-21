// addr: 0x014d9ee0
// name: FUN_014d9ee0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElementVector_collectIds(void * this, void * elements) */

void __thiscall PlayElementVector_collectIds(void *this,void *elements)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_10;
  uint local_c;
  undefined1 local_8 [8];
  
                    /* Appends the id of each PlayElement in the input vector into the vector at
                       this+0x24. */
  uVar4 = *(uint *)((int)elements + 8);
  local_c = uVar4;
  if (uVar4 < *(uint *)((int)elements + 4)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)elements + 4);
  if (*(uint *)((int)elements + 8) < uVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (elements == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (uVar3 == uVar4) break;
    if (elements == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)elements + 8) <= uVar3) {
      FUN_00d83c2d();
    }
    local_10 = PlayElement_getId();
    uVar4 = *(uint *)((int)this + 0x28);
    if ((uVar4 == 0) ||
       ((uint)((int)(*(int *)((int)this + 0x30) - uVar4) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x2c) - uVar4) >> 2))) {
      uVar2 = *(uint *)((int)this + 0x2c);
      if (uVar2 < uVar4) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_8,(int)this + 0x24,uVar2,&local_10);
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 0x2c);
      *puVar1 = local_10;
      *(undefined4 **)((int)this + 0x2c) = puVar1 + 1;
    }
    if (*(uint *)((int)elements + 8) <= uVar3) {
      FUN_00d83c2d();
    }
    uVar3 = uVar3 + 4;
    uVar4 = local_c;
  }
  return;
}

