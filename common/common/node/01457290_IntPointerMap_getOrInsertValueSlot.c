// addr: 0x01457290
// name: IntPointerMap_getOrInsertValueSlot
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IntPointerMap_getOrInsertValueSlot(void * this, int * keyPtr) */

void * __thiscall IntPointerMap_getOrInsertValueSlot(void *this,int *keyPtr)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_10 [2];
  undefined1 local_8 [8];
  
                    /* Finds or inserts an int-keyed map entry and returns a pointer to its value
                       slot. The inserted default value is zero, and the return is node+0x10 after
                       end/sentinel checks. */
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *keyPtr) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 == *(undefined4 **)((int)this + 4)) || (*keyPtr < (int)puVar3[3])) {
    local_10[0] = *keyPtr;
    local_10[1] = 0;
    puVar3 = (undefined4 *)FUN_01457090(local_8,this,puVar3,local_10);
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

