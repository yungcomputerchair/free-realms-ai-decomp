// addr: 0x014349b0
// name: ValidAttrModFilter_destroyExpressionTreeValue
// subsystem: common/common/game
// source (binary assert): common/common/game/ValidAttrModFilter.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidAttrModFilter_destroyExpressionTreeValue(void * valueData) */

void ValidAttrModFilter_destroyExpressionTreeValue(void *valueData)

{
                    /* Asserts that the supplied value data is an expression-tree value, then
                       destroys/releases it. */
  if (*(int *)((int)valueData + 4) != 5) {
    FUN_012f5a60("valueData->isExpressionTreeValue()",
                 "..\\common\\common\\game\\ValidAttrModFilter.cpp",0x38);
  }
  FUN_013010e0(valueData);
  return;
}

