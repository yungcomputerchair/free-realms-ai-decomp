// addr: 0x00792760
// name: FloatKeyTree_findFloorNode
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FloatKeyTree_findFloorNode(void * tree, float * key) */

void * __thiscall FloatKeyTree_findFloorNode(void *this,void *tree,float *key)

{
  float fVar1;
  void *pvVar2;
  void *pvVar3;
  void *extraout_EAX;
  void *pvVar4;
  void *extraout_EAX_00;
  void *pvVar5;
  
                    /* Searches a binary tree keyed by a float at node+4 and returns the matching
                       node or predecessor/floor node for the requested key. */
  if (*(void **)((int)this + 4) != (void *)0x0) {
    fVar1 = *(float *)tree;
    pvVar5 = *(void **)((int)this + 4);
    do {
      if (*(float *)((int)pvVar5 + 4) <= fVar1) {
        if (fVar1 <= *(float *)((int)pvVar5 + 4)) {
          unknown_treeNode_advanceA(pvVar5);
          pvVar4 = extraout_EAX_00;
          while ((pvVar2 = pvVar4, pvVar2 != (void *)0x0 && (*(float *)((int)pvVar2 + 4) == fVar1)))
          {
            pvVar4 = *(void **)((int)pvVar2 + 0xc);
            pvVar5 = pvVar2;
            if (pvVar4 == (void *)0x0) {
              pvVar3 = *(void **)((int)pvVar2 + 8);
              while ((pvVar4 = pvVar3, pvVar4 != (void *)0x0 &&
                     (*(void **)((int)pvVar4 + 0xc) == pvVar2))) {
                pvVar2 = pvVar4;
                pvVar3 = *(void **)((int)pvVar4 + 8);
              }
            }
            else {
              for (pvVar2 = *(void **)((int)pvVar4 + 0x10); pvVar2 != (void *)0x0;
                  pvVar2 = *(void **)((int)pvVar2 + 0x10)) {
                pvVar4 = pvVar2;
              }
            }
          }
          return pvVar5;
        }
        pvVar4 = *(void **)((int)pvVar5 + 0x10);
        if (pvVar4 == (void *)0x0) {
          return pvVar5;
        }
      }
      else {
        pvVar4 = *(void **)((int)pvVar5 + 0xc);
        if (pvVar4 == (void *)0x0) {
          unknown_treeNode_advanceB(pvVar5);
          return extraout_EAX;
        }
      }
      pvVar5 = pvVar4;
    } while (pvVar4 != (void *)0x0);
  }
  return (void *)0x0;
}

