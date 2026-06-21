// addr: 0x008089d0
// name: Offset40FloatTree_findFloorNodeA
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Offset40FloatTree_findFloorNodeA(void * tree, float * key) */

void * __thiscall Offset40FloatTree_findFloorNodeA(void *this,void *tree,float *key)

{
  float fVar1;
  void *pvVar2;
  void *pvVar3;
  void *extraout_EAX;
  void *pvVar4;
  void *extraout_EAX_00;
  void *pvVar5;
  
                    /* Searches a tree whose float key is stored at node+0x40, returning a matching
                       node or the predecessor/floor node. */
  if (*(void **)((int)this + 4) != (void *)0x0) {
    fVar1 = *(float *)tree;
    pvVar5 = *(void **)((int)this + 4);
    do {
      if (*(float *)((int)pvVar5 + 0x40) <= fVar1) {
        if (fVar1 <= *(float *)((int)pvVar5 + 0x40)) {
          unknown_treeNode_advanceOffset48(pvVar5);
          pvVar4 = extraout_EAX_00;
          while ((pvVar2 = pvVar4, pvVar2 != (void *)0x0 &&
                 (*(float *)((int)pvVar2 + 0x40) == fVar1))) {
            pvVar4 = *(void **)((int)pvVar2 + 0x48);
            pvVar5 = pvVar2;
            if (pvVar4 == (void *)0x0) {
              pvVar3 = *(void **)((int)pvVar2 + 0x44);
              while ((pvVar4 = pvVar3, pvVar4 != (void *)0x0 &&
                     (*(void **)((int)pvVar4 + 0x48) == pvVar2))) {
                pvVar2 = pvVar4;
                pvVar3 = *(void **)((int)pvVar4 + 0x44);
              }
            }
            else {
              for (pvVar2 = *(void **)((int)pvVar4 + 0x4c); pvVar2 != (void *)0x0;
                  pvVar2 = *(void **)((int)pvVar2 + 0x4c)) {
                pvVar4 = pvVar2;
              }
            }
          }
          return pvVar5;
        }
        pvVar4 = *(void **)((int)pvVar5 + 0x4c);
        if (pvVar4 == (void *)0x0) {
          return pvVar5;
        }
      }
      else {
        pvVar4 = *(void **)((int)pvVar5 + 0x48);
        if (pvVar4 == (void *)0x0) {
          unknown_treeNode_advanceOffset48_third(pvVar5);
          return extraout_EAX;
        }
      }
      pvVar5 = pvVar4;
    } while (pvVar4 != (void *)0x0);
  }
  return (void *)0x0;
}

