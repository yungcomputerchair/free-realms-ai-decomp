// addr: 0x012ae3f0
// name: CollectionDB_getCollectionById
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall CollectionDB_getCollectionById(void *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *extraout_EAX;
  undefined4 *puVar4;
  void *pvVar5;
  uint *puVar6;
  void *unaff_EDI;
  void *local_34;
  uint *local_30;
  undefined4 *puStack_28;
  undefined1 auStack_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18;
  uint *local_14;
  uint *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Findes a loaded collection whose id matches collectionId, otherwise
                       enumerates all collection names, lazily loads each collection, and returns
                       the matching CollectionData. Evidence: CollectionDB.cpp, calls
                       CollectionDB_getAllCollections and CollectionDB_loadCollection, then compares
                       via CollectionData id getter-like 0139f7a0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166cba8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  puVar4 = *(undefined4 **)((int)param_1 + 4);
  local_30 = (uint *)*puVar4;
  local_34 = param_1;
  while( true ) {
    puVar6 = local_30;
    pvVar5 = local_34;
    if ((local_34 == (void *)0x0) || (local_34 != param_1)) {
      FUN_00d83c2d(uVar2);
    }
    if (puVar6 == puVar4) {
      local_18 = 0;
      local_14 = (uint *)0x0;
      local_10 = (uint *)0x0;
      local_4 = 0;
      CollectionDB_getAllCollections(param_1,local_1c);
      local_30 = local_10;
      if (local_10 < local_14) {
        FUN_00d83c2d();
      }
      puVar6 = local_14;
      if (local_10 < local_14) {
        FUN_00d83c2d();
      }
      puStack_28 = &local_18;
      while( true ) {
        puVar4 = puStack_28;
        if ((puStack_28 == (undefined4 *)0x0) || (puStack_28 != &local_18)) {
          FUN_00d83c2d();
        }
        if (puVar6 == local_30) {
          if (local_14 == (uint *)0x0) {
            ExceptionList = puStack_8;
            return (void *)0x0;
          }
          if (local_14 != local_10) {
            puVar6 = local_14 + 6;
            do {
              if (0xf < *puVar6) {
                    /* WARNING: Subroutine does not return */
                _free((void *)puVar6[-5]);
              }
              *puVar6 = 0xf;
              puVar6[-1] = 0;
              *(undefined1 *)(puVar6 + -5) = 0;
              puVar1 = puVar6 + 1;
              puVar6 = puVar6 + 7;
            } while (puVar1 != local_10);
          }
                    /* WARNING: Subroutine does not return */
          _free(local_14);
        }
        if (puVar4 == (undefined4 *)0x0) {
          FUN_00d83c2d();
        }
        if ((uint *)puVar4[2] <= puVar6) {
          FUN_00d83c2d();
        }
        if (*(int *)((int)param_1 + 0xc) == 0) {
          FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\CollectionDB.cpp",0x51);
        }
        iVar3 = *(int *)((int)param_1 + 4);
        CollectionMap_findByName(param_1,auStack_20,puVar6);
        if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != param_1)) {
          FUN_00d83c2d();
        }
        if (extraout_EAX[1] == iVar3) {
          pvVar5 = (void *)CollectionDB_loadCollection(puVar6);
        }
        else {
          puVar4 = (undefined4 *)
                   CollectionDB_getOrCreateCollectionSlotByName(param_1,puVar6,unaff_EDI);
          pvVar5 = (void *)*puVar4;
        }
        if ((pvVar5 != (void *)0x0) &&
           (iVar3 = PropertyContainer_getField64(pvVar5), iVar3 == param_3)) break;
        if ((uint *)puStack_28[2] <= puVar6) {
          FUN_00d83c2d();
        }
        puVar6 = puVar6 + 7;
      }
      if (local_14 == (uint *)0x0) {
        ExceptionList = puStack_8;
        return pvVar5;
      }
      StdStringRange_destroy(local_14,local_10);
                    /* WARNING: Subroutine does not return */
      _free(local_14);
    }
    if (pvVar5 == (void *)0x0) {
      FUN_00d83c2d(uVar2);
    }
    if (puVar6 == *(undefined4 **)((int)pvVar5 + 4)) {
      FUN_00d83c2d(uVar2);
    }
    pvVar5 = (void *)puVar6[10];
    if ((pvVar5 != (void *)0x0) && (iVar3 = PropertyContainer_getField64(pvVar5), iVar3 == param_2))
    break;
    CollectionDB_TreeIterator_next((int *)&local_34);
  }
  ExceptionList = puStack_8;
  return pvVar5;
}

