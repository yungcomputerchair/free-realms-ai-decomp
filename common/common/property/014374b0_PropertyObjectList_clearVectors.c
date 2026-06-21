// addr: 0x014374b0
// name: PropertyObjectList_clearVectors
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x014374e1) */
/* WARNING: Removing unreachable block (ram,0x01437584) */
/* Setting prototype: void PropertyObjectList_clearVectors(void * this, bool keepPrimaryList) */

void __thiscall PropertyObjectList_clearVectors(void *this,bool keepPrimaryList)

{
  rsize_t rVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  
                    /* Destroys object pointers in the secondary vector at offsets 0x18/0x1c,
                       compacts it, and optionally does the same for the primary vector at offsets
                       0x8/0xc. */
  piVar6 = *(int **)((int)this + 0x18);
  if (*(int **)((int)this + 0x1c) < piVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    piVar2 = *(int **)((int)this + 0x1c);
    if (piVar2 < *(int **)((int)this + 0x18)) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar2) break;
    if (*(int **)((int)this + 0x1c) <= piVar6) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar6)(1);
    }
    if (*(int **)((int)this + 0x1c) <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  }
  pvVar3 = *(void **)((int)this + 0x1c);
  if (pvVar3 < *(void **)((int)this + 0x18)) {
    FUN_00d83c2d();
  }
  pvVar4 = *(void **)((int)this + 0x18);
  if (*(void **)((int)this + 0x1c) < pvVar4) {
    FUN_00d83c2d();
  }
  if (pvVar4 != pvVar3) {
    iVar5 = *(int *)((int)this + 0x1c) - (int)pvVar3 >> 2;
    rVar1 = iVar5 * 4;
    if (0 < iVar5) {
      _memmove_s(pvVar4,rVar1,pvVar3,rVar1);
    }
    *(void **)((int)this + 0x1c) = (void *)(rVar1 + (int)pvVar4);
  }
  if (!keepPrimaryList) {
    piVar6 = *(int **)((int)this + 8);
    if (*(int **)((int)this + 0xc) < piVar6) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar2 = *(int **)((int)this + 0xc);
      if (piVar2 < *(int **)((int)this + 8)) {
        FUN_00d83c2d();
      }
      if (piVar6 == piVar2) break;
      if (*(int **)((int)this + 0xc) <= piVar6) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
      }
      if (*(int **)((int)this + 0xc) <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 1;
    }
    pvVar3 = *(void **)((int)this + 0xc);
    if (pvVar3 < *(void **)((int)this + 8)) {
      FUN_00d83c2d();
    }
    pvVar4 = *(void **)((int)this + 8);
    if (*(void **)((int)this + 0xc) < pvVar4) {
      FUN_00d83c2d();
    }
    if (pvVar4 != pvVar3) {
      iVar5 = *(int *)((int)this + 0xc) - (int)pvVar3 >> 2;
      rVar1 = iVar5 * 4;
      if (0 < iVar5) {
        _memmove_s(pvVar4,rVar1,pvVar3,rVar1);
      }
      *(void **)((int)this + 0xc) = (void *)(rVar1 + (int)pvVar4);
    }
  }
  return;
}

