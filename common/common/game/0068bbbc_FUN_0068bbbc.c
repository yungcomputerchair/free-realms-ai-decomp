// addr: 0x0068bbbc
// name: FUN_0068bbbc
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall FUN_0068bbbc(int *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = param_1;
                    /* Hierarchy traversal helper with weak evidence: walks child/sibling virtual
                       links collecting ids and returns whether any were collected. */
  FUN_00420fb6();
  local_8 = (int *)(**(code **)(*param_1 + 0x2c8))();
  while( true ) {
    if (local_8 == (int *)0xffffffff) break;
    FUN_0042c155(&local_8);
    piVar1 = (int *)(**(code **)(*param_1 + 0x2cc))();
    local_8 = (int *)(**(code **)(*piVar1 + 0x2c8))();
  }
  iVar2 = StdVector_size(param_2);
  return iVar2 != 0;
}

