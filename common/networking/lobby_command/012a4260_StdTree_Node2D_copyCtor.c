// addr: 0x012a4260
// name: StdTree_Node2D_copyCtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall StdTree_Node2D_copyCtor(void *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Initializes an empty tree header with a +0x2d sentinel node, then copies
                       another tree through the 012a3f30 helper. This is a tree copy-constructor
                       style helper. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0166ba80;
  local_10 = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar2 = FUN_012a2190();
  *(int *)((int)param_1 + 4) = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(int *)(*(int *)((int)param_1 + 4) + 4) = *(int *)((int)param_1 + 4);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
  *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 8) = 0;
  local_8 = 0;
  StdTree_Node2D_assignFromTree(param_1,param_2,pvVar1);
  ExceptionList = local_10;
  return param_1;
}

