// addr: 0x005e8401
// name: StdTreeIntKey_lowerBoundIterator_005e8401
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
StdTreeIntKey_lowerBoundIterator_005e8401(void *param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  
                    /* Builds an rb-tree iterator from the lower_bound node for an int-key tree. */
  pvVar1 = StdTree_lowerBound_IntKey_Node21(param_1,param_3,param_1);
  RbTreeIterator_ctorFromNode(pvVar1,param_1);
  return param_2;
}

