// addr: 0x00808920
// name: Offset30FloatTree_findFloorNode
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Offset30FloatTree_findFloorNode(void * tree, float * key) */

void * __thiscall Offset30FloatTree_findFloorNode(void *this,void *tree,float *key)

{
  float fVar1;
  void *pvVar2;
  void *pvVar3;
  void *extraout_EAX;
  void *pvVar4;
  void *extraout_EAX_00;
  void *pvVar5;
  
                    /* Searches a tree whose float key is stored at node+0x30 and returns the
                       matching or floor node. */
  if (*(void **)((int)this + 4) != (void *)0x0) {
    fVar1 = *(float *)tree;
    pvVar5 = *(void **)((int)this + 4);
    do {
      if (*(float *)((int)pvVar5 + 0x30) <= fVar1) {
        if (fVar1 <= *(float *)((int)pvVar5 + 0x30)) {
          unknown_treeNode_advanceOffset38(pvVar5);
          pvVar4 = extraout_EAX_00;
          while ((pvVar2 = pvVar4, pvVar2 != (void *)0x0 &&
                 (*(float *)((int)pvVar2 + 0x30) == fVar1))) {
            pvVar4 = *(void **)((int)pvVar2 + 0x38);
            pvVar5 = pvVar2;
            if (pvVar4 == (void *)0x0) {
              pvVar3 = *(void **)((int)pvVar2 + 0x34);
              while ((pvVar4 = pvVar3, pvVar4 != (void *)0x0 &&
                     (*(void **)((int)pvVar4 + 0x38) == pvVar2))) {
                pvVar2 = pvVar4;
                pvVar3 = *(void **)((int)pvVar4 + 0x34);
              }
            }
            else {
              for (pvVar2 = *(void **)((int)pvVar4 + 0x3c); pvVar2 != (void *)0x0;
                  pvVar2 = *(void **)((int)pvVar2 + 0x3c)) {
                pvVar4 = pvVar2;
              }
            }
          }
          return pvVar5;
        }
        pvVar4 = *(void **)((int)pvVar5 + 0x3c);
        if (pvVar4 == (void *)0x0) {
          return pvVar5;
        }
      }
      else {
        pvVar4 = *(void **)((int)pvVar5 + 0x38);
        if (pvVar4 == (void *)0x0) {
          unknown_treeNode_advanceOffset38_alt(pvVar5);
          return extraout_EAX;
        }
      }
      pvVar5 = pvVar4;
    } while (pvVar4 != (void *)0x0);
  }
  return (void *)0x0;
}

