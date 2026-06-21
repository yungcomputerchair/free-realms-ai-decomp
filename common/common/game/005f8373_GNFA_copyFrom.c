// addr: 0x005f8373
// name: GNFA_copyFrom
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GNFA_copyFrom(void * this, void * source, int acceptingOverride) */

bool __thiscall GNFA_copyFrom(void *this,void *source,int acceptingOverride)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* Deep-copies a GNFA node graph from source into an empty destination,
                       preserving node ids/accepting values and rebuilding transition target
                       pointers through a temporary old-to-new map. If an acceptingOverride is
                       supplied, accepting nodes are rewritten to that value. */
  pvVar2 = source;
  if (*(int *)this == 0) {
    if (*(int *)source == 0) {
      bVar3 = false;
    }
    else {
      local_8 = this;
      RbTree_initHeader(local_2c);
      ParserAst_collectReachableNodes(*(undefined4 *)pvVar2,local_2c);
      FUN_005e797a();
      CheckedTreeIterator_ctor_nodeFlag21A(local_28,local_2c);
      local_20 = local_18;
      local_1c = local_14;
      CheckedTreeIterator_ctor_nodeFlag21A(*local_28,local_2c);
      local_18 = local_10;
      local_14 = local_c;
      while (bVar3 = CheckedTreeIterator_equals_nodeFlag21A(&local_18,&local_20), !bVar3) {
        pvVar4 = Mem_Alloc(0x28);
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          *(undefined4 *)((int)pvVar4 + 0xc) = 0;
          *(undefined4 *)((int)pvVar4 + 0x10) = 0;
          *(undefined4 *)((int)pvVar4 + 0x14) = 0;
          *(undefined4 *)((int)pvVar4 + 0x1c) = 0;
          *(undefined4 *)((int)pvVar4 + 0x20) = 0;
          *(undefined4 *)((int)pvVar4 + 0x24) = 0;
        }
        uVar5 = RbTreeIterator_getValue();
        puVar9 = (undefined4 *)FUN_005f43b0(uVar5);
        *puVar9 = pvVar4;
        RbTreeIterator_increment(&local_18);
      }
      CheckedTreeIterator_ctor_nodeFlag21A(*local_28,local_2c);
      local_18 = local_10;
      local_14 = local_c;
      bVar3 = CheckedTreeIterator_equals_nodeFlag21A(&local_18,&local_20);
      while (!bVar3) {
        uVar10 = 0;
        piVar6 = (int *)RbTreeIterator_getValue();
        puVar9 = (undefined4 *)*piVar6;
        local_c = puVar9;
        piVar6 = (int *)FUN_005f43b0(&local_c);
        puVar1 = (undefined4 *)*piVar6;
        puVar1[1] = puVar9[1];
        *puVar1 = *puVar9;
        FUN_005f1e5c(puVar9 + 2);
        puVar9 = puVar9 + 6;
        iVar7 = StdVectorDword_size(puVar9);
        if (iVar7 != 0) {
          do {
            iVar7 = StdVectorDword_at_005db38b(puVar9,uVar10);
            piVar6 = (int *)FUN_005f43b0(iVar7);
            local_c = (undefined4 *)*piVar6;
            StdVectorDword_pushBack(puVar1 + 6,(uint)&local_c);
            uVar10 = uVar10 + 1;
            uVar8 = StdVectorDword_size(puVar9);
          } while (uVar10 < uVar8);
        }
        RbTreeIterator_increment(&local_18);
        bVar3 = CheckedTreeIterator_equals_nodeFlag21A(&local_18,&local_20);
        pvVar2 = source;
      }
      uVar10 = 0;
      puVar9 = (undefined4 *)FUN_005f43b0(pvVar2);
      *local_8 = *puVar9;
      pvVar4 = (void *)((int)pvVar2 + 4);
      iVar7 = StdVectorDword_size(pvVar4);
      if (iVar7 != 0) {
        do {
          iVar7 = StdVectorDword_at_005db38b(pvVar4,uVar10);
          piVar6 = (int *)FUN_005f43b0(iVar7);
          source = (void *)*piVar6;
          if ((acceptingOverride != 0) && (*(int *)((int)source + 4) != 0)) {
            *(int *)((int)source + 4) = acceptingOverride;
          }
          StdVectorDword_pushBack(local_8 + 1,(uint)&source);
          uVar10 = uVar10 + 1;
          uVar8 = StdVectorDword_size(pvVar4);
        } while (uVar10 < uVar8);
      }
      iVar7 = acceptingOverride;
      if (acceptingOverride == 0) {
        iVar7 = *(int *)((int)pvVar2 + 0x14);
      }
      local_8[5] = iVar7;
      FUN_005f30af();
      CheckedTreeNode21A_destroyAndFree(local_2c);
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

