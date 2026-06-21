// addr: 0x007a9440
// name: AnimationTree_parseBranchRecursive
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
AnimationTree_parseBranchRecursive(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an animation-tree branch from XML data, inserts it into a
                       hash/list, recursively processes child "AnimationTreeBranch" elements, and
                       registers the branch id. Evidence is the referenced "AnimationTreeBranch"
                       string and recursive call. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155d17b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x28);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar2 = FUN_00d517f0(&DAT_017eda5c);
    puVar3 = (undefined4 *)FUN_007a5ed0(*param_3,uVar2,param_4);
  }
  local_4 = 0xffffffff;
  uVar4 = puVar3[4];
  puVar3[2] = *(undefined4 *)(param_1 + 0x40b8);
  if (*(int *)(param_1 + 0x40b8) == 0) {
    *(undefined4 **)(param_1 + 0x40b4) = puVar3;
  }
  else {
    *(undefined4 **)(*(int *)(param_1 + 0x40b8) + 0xc) = puVar3;
  }
  *(undefined4 **)(param_1 + 0x40b8) = puVar3;
  puVar3[1] = uVar4;
  uVar4 = uVar4 & 0x1f;
  *puVar3 = *(undefined4 *)(param_1 + 0x40c0 + uVar4 * 4);
  *(undefined4 **)(param_1 + 0x40c0 + uVar4 * 4) = puVar3;
  *(int *)(param_1 + 0x40bc) = *(int *)(param_1 + 0x40bc) + 1;
  *param_3 = *param_3 + 1;
  iVar5 = FUN_00d50af0("AnimationTreeBranch");
  while (iVar5 != 0) {
    AnimationTree_parseBranchRecursive(iVar5,param_3,puVar3[4]);
    iVar5 = FUN_00d50b60("AnimationTreeBranch");
  }
  FUN_007a8390(param_2,puVar3[4]);
  ExceptionList = local_c;
  return;
}

