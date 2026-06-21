// addr: 0x012d8ef0
// name: PropertyIntMap_findOrCreateSlot
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * PropertyIntMap_findOrCreateSlot(void * tree, int * key) */

int * __thiscall PropertyIntMap_findOrCreateSlot(void *this,void *tree,int *key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
                    /* Finds an integer key in a red-black tree and inserts a node with zero payload
                       when absent, returning the payload slot. The structure and checks match the
                       ActionDB tree slot helper but for another property-owned map. */
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *(int *)tree) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 == *(undefined4 **)((int)this + 4)) || (*(int *)tree < (int)puVar3[3])) {
    local_10 = *(undefined4 *)tree;
    local_c = 0;
    puVar3 = (undefined4 *)PropertyIntMap_insertNode(local_8,this,puVar3,&local_10);
    this = (void *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
  }
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (puVar3 == *(undefined4 **)((int)this + 4)) {
    FUN_00d83c2d();
  }
  return puVar3 + 4;
}

