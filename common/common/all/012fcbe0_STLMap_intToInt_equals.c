// addr: 0x012fcbe0
// name: STLMap_intToInt_equals
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLMap_intToInt_equals(void * leftMap, void * rightMap) */

bool __cdecl STLMap_intToInt_equals(void *leftMap,void *rightMap)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  
                    /* Compares two int-to-int maps for equal element count and equal ordered
                       contents. */
  pvVar2 = leftMap;
  if (*(int *)((int)leftMap + 8) == *(int *)((int)rightMap + 8)) {
    puVar1 = (undefined4 *)((int)leftMap + 4);
    leftMap = (void *)((uint)leftMap & 0xffffff00);
    cVar3 = FUN_012fc1b0(pvVar2,*(undefined4 *)*puVar1,pvVar2,(undefined4 *)*puVar1,rightMap,
                         **(undefined4 **)((int)rightMap + 4),leftMap,leftMap);
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

