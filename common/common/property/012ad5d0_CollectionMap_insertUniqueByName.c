// addr: 0x012ad5d0
// name: CollectionMap_insertUniqueByName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012ad611) */
/* Setting prototype: void CollectionMap_insertUniqueByName(void * this, void * out, void * name) */

void __thiscall CollectionMap_insertUniqueByName(void *this,void *out,void *name)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *extraout_EAX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Searches the collection-name red-black tree and inserts the key only if no
                       equivalent key is already present. The output includes the iterator and an
                       inserted flag. */
  puVar2 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar2 + 0x2d);
  local_c = true;
  puVar8 = *(undefined4 **)((int)this + 4);
  while (local_8 = this, cVar1 == '\0') {
    uVar3 = puVar2[8];
    if ((uint)puVar2[9] < 0x10) {
      puVar8 = puVar2 + 4;
    }
    else {
      puVar8 = (undefined4 *)puVar2[4];
    }
    uVar4 = *(uint *)((int)name + 0x14);
    uVar6 = uVar4;
    if (uVar3 <= uVar4) {
      uVar6 = uVar3;
    }
    if (*(uint *)((int)name + 0x18) < 0x10) {
      iVar7 = (int)name + 4;
    }
    else {
      iVar7 = *(int *)((int)name + 4);
    }
    uVar6 = FUN_00f93bd0(iVar7,puVar8,uVar6);
    if (uVar6 == 0) {
      if (uVar4 < uVar3) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar4 != uVar3);
      }
    }
    local_c = (int)uVar6 < 0;
    if (local_c) {
      puVar9 = (undefined4 *)*puVar2;
    }
    else {
      puVar9 = (undefined4 *)puVar2[2];
    }
    puVar8 = puVar2;
    puVar2 = puVar9;
    this = local_8;
    cVar1 = *(char *)((int)puVar9 + 0x2d);
  }
  local_4 = puVar8;
  if (local_c) {
    if (puVar8 == (undefined4 *)**(int **)((int)this + 4)) {
      local_c = true;
      goto LAB_012ad688;
    }
    CollectionDB_TreeIterator_prev((int *)&local_8);
  }
  puVar2 = local_4;
  if (*(uint *)((int)name + 0x18) < 0x10) {
    iVar7 = (int)name + 4;
  }
  else {
    iVar7 = *(int *)((int)name + 4);
  }
  iVar7 = FUN_00f942a0(0,local_4[8],iVar7,*(undefined4 *)((int)name + 0x14));
  if (-1 < iVar7) {
    *(undefined4 **)((int)out + 4) = puVar2;
    *(undefined1 *)((int)out + 8) = 0;
    *(void **)out = local_8;
    return;
  }
LAB_012ad688:
  CollectionPropertyTree_insertNode(this,&local_8,local_c,puVar8,name);
  uVar5 = *extraout_EAX;
  *(undefined4 *)((int)out + 4) = extraout_EAX[1];
  *(undefined1 *)((int)out + 8) = 1;
  *(undefined4 *)out = uVar5;
  return;
}

