// addr: 0x0129c3c0
// name: IntKeyMap_insertIfAbsent
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntKeyMap_insertIfAbsent(void * map, void * result, int * key) */

void __thiscall IntKeyMap_insertIfAbsent(void *this,void *map,void *result,int *key)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *local_8;
  undefined4 *local_4;
  
                    /* Implements std::map-like insert-if-absent for an integer key. It lower-bounds
                       through a red-black tree, returns an existing iterator when the key is
                       present, or inserts via FUN_0129b2f0 and marks result.inserted. */
  puVar3 = *(undefined4 **)((int)this + 4);
  bVar4 = true;
  if (*(char *)((int)puVar3[1] + 0x1d) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      bVar4 = *(int *)result < (int)puVar3[3];
      if (bVar4) {
        puVar2 = (undefined4 *)*puVar3;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
      }
    } while (*(char *)((int)puVar2 + 0x1d) == '\0');
  }
  local_8 = this;
  local_4 = puVar3;
  if (bVar4) {
    if (puVar3 == (undefined4 *)**(int **)((int)this + 4)) {
      bVar4 = true;
      goto LAB_0129c41c;
    }
    FUN_01299630();
  }
  if (*(int *)result <= (int)local_4[3]) {
    *(void **)map = local_8;
    *(undefined4 **)((int)map + 4) = local_4;
    *(undefined1 *)((int)map + 8) = 0;
    return;
  }
LAB_0129c41c:
  puVar3 = (undefined4 *)FUN_0129b2f0(&local_8,bVar4,puVar3,result);
  uVar1 = puVar3[1];
  *(undefined4 *)map = *puVar3;
  *(undefined4 *)((int)map + 4) = uVar1;
  *(undefined1 *)((int)map + 8) = 1;
  return;
}

