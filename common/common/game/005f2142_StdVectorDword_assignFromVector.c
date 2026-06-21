// addr: 0x005f2142
// name: StdVectorDword_assignFromVector
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall StdVectorDword_assignFromVector(void *param_1,void *param_2)

{
  void *begin;
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_EAX;
  int extraout_EAX_00;
  
                    /* Assigns one dword vector into another, reusing existing capacity when
                       possible or reallocating and inserting a default/copy range when needed.
                       Evidence is vector size/capacity checks and copy/insert range helpers. */
  if (param_1 != param_2) {
    iVar2 = StdVectorDword_size(param_2);
    if (iVar2 == 0) {
      IndexedTree_destroyNode_005e894c(param_1);
    }
    else {
      uVar3 = StdVectorDword_size(param_2);
      uVar4 = StdVectorDword_size(param_1);
      if (uVar4 < uVar3) {
        uVar3 = StdVectorDword_size(param_2);
        uVar4 = StdVectorDword_capacityFromEnd(param_1);
        if (uVar4 < uVar3) {
          if (*(void **)((int)param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)param_1 + 4));
          }
          iVar2 = StdVectorDword_size(param_2);
          cVar1 = FUN_005ee52b(iVar2);
          if (cVar1 == '\0') {
            return param_1;
          }
          ParserVector_insertDefaultRange
                    (*(void **)((int)param_2 + 4),*(void **)((int)param_2 + 8),
                     *(void **)((int)param_1 + 4),param_1);
          iVar2 = extraout_EAX_00;
        }
        else {
          iVar2 = *(int *)((int)param_2 + 4);
          iVar5 = StdVectorDword_size(param_1);
          begin = (void *)(iVar2 + iVar5 * 4);
          FUN_005e5f10(iVar2,begin,*(undefined4 *)((int)param_1 + 4));
          ParserVector_insertDefaultRange
                    (begin,*(void **)((int)param_2 + 8),*(void **)((int)param_1 + 8),param_1);
          iVar2 = extraout_EAX;
        }
      }
      else {
        FUN_005e5f10(*(undefined4 *)((int)param_2 + 4),*(undefined4 *)((int)param_2 + 8),
                     *(undefined4 *)((int)param_1 + 4));
        iVar2 = StdVectorDword_size(param_2);
        iVar2 = *(int *)((int)param_1 + 4) + iVar2 * 4;
      }
      *(int *)((int)param_1 + 8) = iVar2;
    }
  }
  return param_1;
}

