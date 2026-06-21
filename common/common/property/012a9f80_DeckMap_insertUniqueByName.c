// addr: 0x012a9f80
// name: DeckMap_insertUniqueByName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012a9fc1) */
/* Setting prototype: void DeckMap_insertUniqueByName(void * this, void * out, void * name) */

void __thiscall DeckMap_insertUniqueByName(void *this,void *out,void *name)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  void *local_8;
  undefined4 *local_4;
  
                    /* Searches the deck-name red-black tree for a string key and inserts it only if
                       no equivalent key exists. The result reports the iterator and whether
                       insertion occurred. */
  puVar6 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  bVar10 = true;
  cVar1 = *(char *)((int)puVar6 + 0x2d);
  puVar8 = *(undefined4 **)((int)this + 4);
  local_8 = this;
  while (cVar1 == '\0') {
    uVar2 = puVar6[8];
    if ((uint)puVar6[9] < 0x10) {
      puVar8 = puVar6 + 4;
    }
    else {
      puVar8 = (undefined4 *)puVar6[4];
    }
    uVar3 = *(uint *)((int)name + 0x14);
    uVar5 = uVar3;
    if (uVar2 <= uVar3) {
      uVar5 = uVar2;
    }
    if (*(uint *)((int)name + 0x18) < 0x10) {
      iVar7 = (int)name + 4;
    }
    else {
      iVar7 = *(int *)((int)name + 4);
    }
    uVar5 = FUN_00f93bd0(iVar7,puVar8,uVar5);
    if (uVar5 == 0) {
      if (uVar3 < uVar2) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar3 != uVar2);
      }
    }
    bVar10 = (int)uVar5 < 0;
    if (bVar10) {
      puVar9 = (undefined4 *)*puVar6;
    }
    else {
      puVar9 = (undefined4 *)puVar6[2];
    }
    puVar8 = puVar6;
    puVar6 = puVar9;
    cVar1 = *(char *)((int)puVar9 + 0x2d);
  }
  local_4 = puVar8;
  if (bVar10) {
    if (puVar8 == (undefined4 *)**(int **)((int)local_8 + 4)) {
      bVar10 = true;
      goto LAB_012aa038;
    }
    StringKeyTreeIterator_prev((int *)&local_8);
  }
  puVar6 = local_4;
  if (*(uint *)((int)name + 0x18) < 0x10) {
    iVar7 = (int)name + 4;
  }
  else {
    iVar7 = *(int *)((int)name + 4);
  }
  iVar7 = FUN_00f942a0(0,local_4[8],iVar7,*(undefined4 *)((int)name + 0x14));
  if (-1 < iVar7) {
    *(undefined4 **)((int)out + 4) = puVar6;
    *(undefined1 *)((int)out + 8) = 0;
    *(void **)out = local_8;
    return;
  }
LAB_012aa038:
  puVar6 = (undefined4 *)FUN_012a9b90(&local_8,bVar10,puVar8,name);
  uVar4 = *puVar6;
  *(undefined4 *)((int)out + 4) = puVar6[1];
  *(undefined1 *)((int)out + 8) = 1;
  *(undefined4 *)out = uVar4;
  return;
}

