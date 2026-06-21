// addr: 0x01453c10
// name: IntPointerMap_getOrCreateValue
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IntPointerMap_getOrCreateValue(void * map, int * key) */

void * __thiscall IntPointerMap_getOrCreateValue(void *this,void *map,int *key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
                    /* Looks up an int key in a tree map, inserts a default zero value if absent,
                       asserts the result, and returns the mapped value slot. */
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *(int *)map) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 == *(undefined4 **)((int)this + 4)) || (*(int *)map < (int)puVar3[3])) {
    local_10 = *(undefined4 *)map;
    local_c = 0;
    puVar3 = (undefined4 *)FUN_01453a50(local_8,this,puVar3,&local_10);
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

