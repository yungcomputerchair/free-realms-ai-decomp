// addr: 0x00808bc0
// name: FloatKeyTree_findFloorOrEqual
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FloatKeyTree_findFloorOrEqual(int param_1,float *param_2)

{
  float fVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *extraout_EAX;
  
                    /* Searches a binary tree of float-keyed nodes and returns an equal-key node
                       group member or the floor/predecessor node for the requested key. */
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    fVar1 = *param_2;
    pvVar4 = *(void **)(param_1 + 4);
    do {
      if (*(float *)((int)pvVar4 + 0x10) <= fVar1) {
        if (fVar1 <= *(float *)((int)pvVar4 + 0x10)) {
          TreeNode_findTraversalNeighbor(pvVar4);
          pvVar5 = extraout_EAX;
          while ((pvVar2 = pvVar5, pvVar2 != (void *)0x0 &&
                 (*(float *)((int)pvVar2 + 0x10) == fVar1))) {
            pvVar5 = *(void **)((int)pvVar2 + 0x18);
            pvVar4 = pvVar2;
            if (pvVar5 == (void *)0x0) {
              pvVar3 = *(void **)((int)pvVar2 + 0x14);
              while ((pvVar5 = pvVar3, pvVar5 != (void *)0x0 &&
                     (*(void **)((int)pvVar5 + 0x18) == pvVar2))) {
                pvVar2 = pvVar5;
                pvVar3 = *(void **)((int)pvVar5 + 0x14);
              }
            }
            else {
              for (pvVar2 = *(void **)((int)pvVar5 + 0x1c); pvVar2 != (void *)0x0;
                  pvVar2 = *(void **)((int)pvVar2 + 0x1c)) {
                pvVar5 = pvVar2;
              }
            }
          }
          return pvVar4;
        }
        pvVar5 = *(void **)((int)pvVar4 + 0x1c);
        if (pvVar5 == (void *)0x0) {
          return pvVar4;
        }
      }
      else {
        pvVar5 = *(void **)((int)pvVar4 + 0x18);
        if (pvVar5 == (void *)0x0) {
          pvVar4 = (void *)FUN_00806c60(pvVar4);
          return pvVar4;
        }
      }
      pvVar4 = pvVar5;
    } while (pvVar5 != (void *)0x0);
  }
  return (void *)0x0;
}

