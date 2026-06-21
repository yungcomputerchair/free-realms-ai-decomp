// addr: 0x01336430
// name: IntObjectMap_getOrInsert
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IntObjectMap_getOrInsert(void * this, int * key) */

void * __thiscall IntObjectMap_getOrInsert(void *this,int *key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_10 [2];
  undefined1 local_8 [8];
  
                    /* Implements map operator[]/get-or-insert for an int-key rb-tree and returns
                       the value slot, with bounds checks around the sentinel. */
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *key) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 == *(undefined4 **)((int)this + 4)) || (*key < (int)puVar3[3])) {
    local_10[0] = *key;
    local_10[1] = 0;
    puVar3 = (undefined4 *)FUN_01334e20(local_8,this,puVar3,local_10);
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

