// addr: 0x01070c80
// name: FUN_01070c80
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01070c80(int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Inserts a 300-byte node constructed from param_2 into a list unless an
                       existing node with the same key at node+8 exists. Lacks class/type evidence.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163f52b;
  local_c = ExceptionList;
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      ExceptionList = &local_c;
      pvVar2 = Mem_Alloc(300);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_01070a40(param_2);
      }
      *piVar3 = param_1[1];
      if (param_1[1] == 0) {
        *param_1 = (int)piVar3;
      }
      else {
        *(int **)(param_1[1] + 4) = piVar3;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = (int)piVar3;
      ExceptionList = local_c;
      return;
    }
    if (*(int *)(iVar1 + 8) == *(int *)(param_2 + 0x24)) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return;
}

