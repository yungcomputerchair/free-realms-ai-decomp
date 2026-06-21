// addr: 0x01531440
// name: EventCommand_RespondEventSessionInfo_cloneSecondIntVectorMap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionInfo_cloneSecondIntVectorMap(void * this,
   void * unused, void * source_tree) */

void __thiscall
EventCommand_RespondEventSessionInfo_cloneSecondIntVectorMap
          (void *this,void *unused,void *source_tree)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  void **ppvVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  void **local_24;
  void *local_20;
  void *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears the destination tree at offset 0x1c, then clones each source key and
                       its integer vector values into the destination. */
  puStack_8 = &LAB_016bb638;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_012446b0(*(undefined4 *)(*(int *)((int)this + 0x1c) + 4));
  *(int *)(*(int *)((int)this + 0x1c) + 4) = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(int *)(*(int *)((int)this + 0x1c) + 8) = *(int *)((int)this + 0x1c);
  local_18 = source_tree;
  local_20 = *(void **)source_tree;
  local_24 = &unused;
  while( true ) {
    pvVar9 = local_20;
    ppvVar5 = local_24;
    if ((local_24 == (void **)0x0) || (local_24 != &unused)) {
      FUN_00d83c2d(uVar6);
    }
    if (pvVar9 == local_18) break;
    if (ppvVar5 == (void **)0x0) {
      FUN_00d83c2d(uVar6);
    }
    if (pvVar9 == ppvVar5[1]) {
      FUN_00d83c2d(uVar6);
    }
    puVar1 = *(undefined4 **)((int)pvVar9 + 0x18);
    if (puVar1 < *(undefined4 **)((int)pvVar9 + 0x14)) {
      FUN_00d83c2d();
    }
    if (pvVar9 == ppvVar5[1]) {
      FUN_00d83c2d();
    }
    puVar8 = *(undefined4 **)((int)pvVar9 + 0x14);
    if (*(undefined4 **)((int)pvVar9 + 0x18) < puVar8) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (pvVar9 == (void *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (puVar8 == puVar1) break;
      if (pvVar9 == (void *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)((int)pvVar9 + 0x18) <= puVar8) {
        FUN_00d83c2d();
      }
      pvVar9 = local_20;
      if (local_20 == local_24[1]) {
        FUN_00d83c2d();
      }
      iVar7 = IntKeyBufferMap_findOrInsert((int)pvVar9 + 0xc);
      uVar2 = *(uint *)(iVar7 + 4);
      if ((uVar2 == 0) ||
         ((uint)((int)(*(int *)(iVar7 + 0xc) - uVar2) >> 2) <=
          (uint)((int)(*(int *)(iVar7 + 8) - uVar2) >> 2))) {
        uVar4 = *(uint *)(iVar7 + 8);
        if (uVar4 < uVar2) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_14,iVar7,uVar4,puVar8);
        pvVar9 = local_20;
      }
      else {
        puVar3 = *(undefined4 **)(iVar7 + 8);
        *puVar3 = *puVar8;
        *(undefined4 **)(iVar7 + 8) = puVar3 + 1;
      }
      if (*(undefined4 **)((int)pvVar9 + 0x18) <= puVar8) {
        FUN_00d83c2d();
      }
      puVar8 = puVar8 + 1;
    }
    RbTreeIterator_incrementLargeNode(&local_24);
  }
  local_4 = 0xffffffff;
  StdRbTree_destroyAndFree(&unused);
  ExceptionList = puStack_8;
  return;
}

