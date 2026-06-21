// addr: 0x012ad710
// name: CollectionDB_processType3Collections
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_processType3Collections(void * this) */

void __fastcall CollectionDB_processType3Collections(void *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *local_24;
  undefined4 *local_20;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Walks collection database tree entries and processes entries whose
                       CollectionData type is 3 through helper 012ad520. */
  puStack_8 = &LAB_0166c9c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  puVar1 = *(undefined4 **)((int)this + 4);
  local_20 = (undefined4 *)*puVar1;
  local_24 = this;
  while( true ) {
    puVar3 = local_20;
    pvVar2 = local_24;
    if ((local_24 == (void *)0x0) || (local_24 != this)) {
      FUN_00d83c2d();
    }
    piVar4 = local_14;
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar3[10] != 0) {
      if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
        FUN_00d83c2d();
      }
      iVar5 = CollectionData_getCollectionType((void *)puVar3[10]);
      if (iVar5 == 3) {
        if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
          FUN_00d83c2d();
        }
        FUN_012ad520(puVar3 + 10);
      }
    }
    CollectionDB_TreeIterator_next((int *)&local_24);
  }
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  piVar6 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar4) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= piVar6) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar6)(1);
    }
    if (local_14 <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  }
  local_4 = 0xffffffff;
  if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}

