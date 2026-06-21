// addr: 0x012fcc30
// name: STLMap_intToValueData_equals
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLMap_intToValueData_equals(void * leftMap, void * rightMap) */

bool __cdecl STLMap_intToValueData_equals(void *leftMap,void *rightMap)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  
                    /* Compares two int-to-ValueData maps for equal count and equivalent ordered
                       entries. */
  pvVar2 = leftMap;
  if (*(int *)((int)leftMap + 8) == *(int *)((int)rightMap + 8)) {
    puVar1 = (undefined4 *)((int)leftMap + 4);
    leftMap = (void *)((uint)leftMap & 0xffffff00);
    cVar3 = FUN_012fc210(pvVar2,*(undefined4 *)*puVar1,pvVar2,(undefined4 *)*puVar1,rightMap,
                         **(undefined4 **)((int)rightMap + 4),leftMap,leftMap);
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

