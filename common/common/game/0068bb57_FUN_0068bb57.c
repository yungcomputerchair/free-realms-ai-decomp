// addr: 0x0068bb57
// name: FUN_0068bb57
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall FUN_0068bb57(int *param_1,void *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  
                    /* Hierarchy traversal helper with weak evidence: walks child/sibling virtual
                       links collecting ids until a matching predicate succeeds. */
  FUN_00420fb6();
  do {
    iVar2 = (**(code **)(*param_1 + 0x2ac))();
    *param_3 = iVar2;
    if (iVar2 == -1) goto LAB_0068bba5;
    cVar1 = (**(code **)(*param_1 + 0x2a4))();
    if (cVar1 != '\0') {
      return true;
    }
    FUN_0042c155(param_3);
    param_1 = (int *)(**(code **)(*param_1 + 0x2cc))();
  } while (param_1 != (int *)0x0);
  *param_3 = -1;
LAB_0068bba5:
  iVar2 = StdVector_size(param_2);
  return iVar2 != 0;
}

