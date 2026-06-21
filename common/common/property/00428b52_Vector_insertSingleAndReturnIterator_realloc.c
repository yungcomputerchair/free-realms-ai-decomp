// addr: 0x00428b52
// name: Vector_insertSingleAndReturnIterator_realloc
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall
Vector_insertSingleAndReturnIterator_realloc
          (void *param_1,void *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  void *unaff_EDI;
  void *outPair;
  void *local_c;
  void *pvStack_8;
  
  local_c = param_1;
  pvStack_8 = param_1;
                    /* Generic STL-vector helper used when inserting one element,
                       constructing/copying around the insertion point and returning an
                       iterator/result wrapper. Evidence is widespread vector insert callers and the
                       call pattern around allocation and element construction. */
  iVar1 = StdVector_size(param_1);
  if (iVar1 == 0) {
    outPair = (void *)0x0;
  }
  else {
    FUN_00416f56(*(undefined4 *)((int)param_1 + 4),param_1);
    outPair = (void *)FUN_0040b9fa(&local_c);
  }
  StdVectorDword_insertFillRange(param_3,param_4,1,param_5);
  FUN_00416f56(*(undefined4 *)((int)param_1 + 4),param_1);
  Pair_copyAfterConstructingValue(&param_3,param_2,outPair,unaff_EDI);
  return param_2;
}

