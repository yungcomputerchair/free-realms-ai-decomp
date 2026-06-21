// addr: 0x006ac8e8
// name: StdTreeIntKey_lowerBoundIterator_006ac8e8
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
StdTreeIntKey_lowerBoundIterator_006ac8e8(void *param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  
                    /* Builds an rb-tree iterator from an int-key lower_bound node. */
  pvVar1 = StdTree_lowerBound_IntKey_Node21_006abb27(param_1,param_3,param_1);
  RbTreeIterator_ctorFromNode_006a(pvVar1,param_1);
  return param_2;
}

