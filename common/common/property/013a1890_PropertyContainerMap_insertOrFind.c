// addr: 0x013a1890
// name: PropertyContainerMap_insertOrFind
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyContainerMap_insertOrFind(void * tree, int * outPair, int * key)
    */

void __thiscall PropertyContainerMap_insertOrFind(void *this,void *tree,int *outPair,int *key)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *local_8;
  undefined4 *local_4;
  
                    /* Performs red-black tree lower-bound lookup for a property container key and
                       inserts a new node if the key is absent. The output includes the tree/node
                       pair and a byte indicating whether insertion occurred. */
  puVar3 = *(undefined4 **)((int)this + 4);
  bVar4 = true;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      bVar4 = *outPair < (int)puVar3[3];
      if (bVar4) {
        puVar2 = (undefined4 *)*puVar3;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
      }
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  local_8 = this;
  local_4 = puVar3;
  if (bVar4) {
    if (puVar3 == (undefined4 *)**(int **)((int)this + 4)) {
      bVar4 = true;
      goto LAB_013a18ec;
    }
    FUN_0139fc50();
  }
  if (*outPair <= (int)local_4[3]) {
    *(void **)tree = local_8;
    *(undefined4 **)((int)tree + 4) = local_4;
    *(undefined1 *)((int)tree + 8) = 0;
    return;
  }
LAB_013a18ec:
  puVar3 = (undefined4 *)FUN_013a1450(&local_8,bVar4,puVar3,outPair);
  uVar1 = puVar3[1];
  *(undefined4 *)tree = *puVar3;
  *(undefined4 *)((int)tree + 4) = uVar1;
  *(undefined1 *)((int)tree + 8) = 1;
  return;
}

