// addr: 0x012db0e0
// name: PropertyTree21_insertOrFindString
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012db121) */
/* Setting prototype: void PropertyTree21_insertOrFindString(void * this, void * outIterator, void *
   key) */

void __thiscall PropertyTree21_insertOrFindString(void *this,void *outIterator,void *key)

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
  
                    /* Walks a PropertyTree21 red-black tree comparing std::string keys, then
                       returns an existing iterator or calls the insert helper to create a new node.
                       Evidence is the string compare/length logic,
                       PropertyTreeIterator39_decrement, and insert helper call. */
  puVar6 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  bVar10 = true;
  cVar1 = *(char *)((int)puVar6 + 0x39);
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
    uVar3 = *(uint *)((int)key + 0x14);
    uVar5 = uVar3;
    if (uVar2 <= uVar3) {
      uVar5 = uVar2;
    }
    if (*(uint *)((int)key + 0x18) < 0x10) {
      iVar7 = (int)key + 4;
    }
    else {
      iVar7 = *(int *)((int)key + 4);
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
    cVar1 = *(char *)((int)puVar9 + 0x39);
  }
  local_4 = puVar8;
  if (bVar10) {
    if (puVar8 == (undefined4 *)**(int **)((int)local_8 + 4)) {
      bVar10 = true;
      goto LAB_012db198;
    }
    PropertyTreeIterator39_decrement((int *)&local_8);
  }
  puVar6 = local_4;
  if (*(uint *)((int)key + 0x18) < 0x10) {
    iVar7 = (int)key + 4;
  }
  else {
    iVar7 = *(int *)((int)key + 4);
  }
  iVar7 = FUN_00f942a0(0,local_4[8],iVar7,*(undefined4 *)((int)key + 0x14));
  if (-1 < iVar7) {
    *(undefined4 **)((int)outIterator + 4) = puVar6;
    *(undefined1 *)((int)outIterator + 8) = 0;
    *(void **)outIterator = local_8;
    return;
  }
LAB_012db198:
  puVar6 = (undefined4 *)FUN_012daa70(&local_8,bVar10,puVar8,key);
  uVar4 = *puVar6;
  *(undefined4 *)((int)outIterator + 4) = puVar6[1];
  *(undefined1 *)((int)outIterator + 8) = 1;
  *(undefined4 *)outIterator = uVar4;
  return;
}

