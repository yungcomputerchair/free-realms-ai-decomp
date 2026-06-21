// addr: 0x0130a130
// name: FUN_0130a130
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyAggregate_collectChildValues(void * this, void * outVector) */

void __thiscall PropertyAggregate_collectChildValues(void *this,void *outVector)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_10 [12];
  
                    /* Walks nested tree entries and appends each child vector element into the
                       output vector. */
  piVar1 = *(int **)((int)this + 0x24);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (this == (void *)0xffffffe0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (this == (void *)0xffffffe0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)this + 0x24)) {
      FUN_00d83c2d();
    }
    puVar3 = (undefined4 *)piVar2[6];
    if (puVar3 < (undefined4 *)piVar2[5]) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)this + 0x24)) {
      FUN_00d83c2d();
    }
    puVar7 = (undefined4 *)piVar2[5];
    if ((undefined4 *)piVar2[6] < puVar7) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (puVar7 == puVar3) break;
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)piVar2[6] <= puVar7) {
        FUN_00d83c2d();
      }
      uVar4 = *(uint *)((int)outVector + 4);
      if ((uVar4 == 0) ||
         ((uint)((int)(*(int *)((int)outVector + 0xc) - uVar4) >> 2) <=
          (uint)((int)(*(int *)((int)outVector + 8) - uVar4) >> 2))) {
        uVar6 = *(uint *)((int)outVector + 8);
        if (uVar6 < uVar4) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_10,outVector,uVar6,puVar7);
      }
      else {
        puVar5 = *(undefined4 **)((int)outVector + 8);
        *puVar5 = *puVar7;
        *(undefined4 **)((int)outVector + 8) = puVar5 + 1;
      }
      if ((undefined4 *)piVar2[6] <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
    }
    FUN_01303940();
  }
  return;
}

