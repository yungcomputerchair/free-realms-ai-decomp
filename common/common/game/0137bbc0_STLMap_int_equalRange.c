// addr: 0x0137bbc0
// name: STLMap_int_equalRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void STLMap_int_equalRange(void * map, int * outRange, int * key) */

void __thiscall STLMap_int_equalRange(void *this,void *map,int *outRange,int *key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* Computes the lower and upper bounds for an int key in an MSVC red-black
                       tree/map and writes the iterator range to outRange. The node color/sentinel
                       byte is at +0x21. */
  puVar4 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if (*outRange < (int)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar1[1] + 0x21) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar2[3] < *outRange) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  *(undefined4 **)((int)map + 4) = puVar1;
  *(void **)map = this;
  *(void **)((int)map + 8) = this;
  *(undefined4 **)((int)map + 0xc) = puVar4;
  return;
}

