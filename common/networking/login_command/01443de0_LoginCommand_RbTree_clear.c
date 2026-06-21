// addr: 0x01443de0
// name: LoginCommand_RbTree_clear
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RbTree_clear(void * tree) */

void __fastcall LoginCommand_RbTree_clear(void *tree)

{
                    /* Clears a red-black-tree-style container by destroying the root subtree and
                       resetting the header/root/left/right links and size to empty. No class RTTI
                       is present, so the name is container-behavior based. */
  LoginCommand_RbTree_destroySubtree(*(void **)(*(int *)((int)tree + 4) + 4));
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  return;
}

