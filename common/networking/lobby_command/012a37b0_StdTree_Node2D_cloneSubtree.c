// addr: 0x012a37b0
// name: StdTree_Node2D_cloneSubtree
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
StdTree_Node2D_cloneSubtree(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Recursively clones a red-black-tree subtree whose sentinel/color byte is at
                       node offset 0x2d. It copies the current node with 012a3710 and then clones
                       left and right children. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0166b9c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0x2d) == '\0') {
    puVar1 = (undefined4 *)
             FUN_012a3710(local_18,param_3,local_18,param_2 + 3,*(undefined1 *)(param_2 + 0xb));
    if (*(char *)((int)local_18 + 0x2d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    uVar2 = StdTree_Node2D_cloneSubtree(*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = StdTree_Node2D_cloneSubtree(param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return local_18;
}

