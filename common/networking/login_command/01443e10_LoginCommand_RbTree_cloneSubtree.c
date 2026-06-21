// addr: 0x01443e10
// name: LoginCommand_RbTree_cloneSubtree
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
LoginCommand_RbTree_cloneSubtree(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Recursively clones a red-black-tree-style subtree under a destination parent
                       and returns the cloned node/header link. It is called by the tree
                       copy-assignment helper. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01699350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0x15) == '\0') {
    puVar1 = (undefined4 *)
             FUN_01443ca0(local_18,param_3,local_18,param_2 + 3,*(undefined1 *)(param_2 + 5));
    if (*(char *)((int)local_18 + 0x15) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    uVar2 = LoginCommand_RbTree_cloneSubtree(*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = LoginCommand_RbTree_cloneSubtree(param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return local_18;
}

