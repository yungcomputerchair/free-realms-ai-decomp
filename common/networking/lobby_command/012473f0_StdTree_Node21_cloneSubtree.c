// addr: 0x012473f0
// name: StdTree_Node21_cloneSubtree
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
StdTree_Node21_cloneSubtree(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Recursively clones a red-black-tree subtree whose sentinel/color byte is at
                       node offset 0x21. It allocates/copies each node through 01247270 and recurses
                       over left and right children. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01655ad0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0x21) == '\0') {
    puVar1 = (undefined4 *)
             FUN_01247270(local_18,param_3,local_18,param_2 + 3,*(undefined1 *)(param_2 + 8));
    if (*(char *)((int)local_18 + 0x21) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    uVar2 = StdTree_Node21_cloneSubtree(*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = StdTree_Node21_cloneSubtree(param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return local_18;
}

