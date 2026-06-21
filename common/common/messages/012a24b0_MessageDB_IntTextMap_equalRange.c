// addr: 0x012a24b0
// name: MessageDB_IntTextMap_equalRange
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_IntTextMap_equalRange(void * map, void * outRange, int * key)
    */

void __thiscall MessageDB_IntTextMap_equalRange(void *this,void *map,void *outRange,int *key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* Computes lower/upper bound iterators for an integer-keyed message-text map
                       and stores a four-word range result. It is used before erasing matching
                       entries. */
  puVar4 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x2d) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if (*(int *)outRange < (int)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x2d) == '\0');
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar1[1] + 0x2d) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar2[3] < *(int *)outRange) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x2d) == '\0');
  }
  *(undefined4 **)((int)map + 4) = puVar1;
  *(void **)map = this;
  *(void **)((int)map + 8) = this;
  *(undefined4 **)((int)map + 0xc) = puVar4;
  return;
}

