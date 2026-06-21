// addr: 0x01307e80
// name: StdTree_Node21_clear
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_Node21_clear(void * param_1) */

void __fastcall StdTree_Node21_clear(void *param_1)

{
                    /* Clears all nodes from a node+0x21 tree and resets the header links and count
                       to empty. Evidence: destroys the header's root with 01307a00, sets
                       root/left/right header links to self, and zeroes the count. */
  FUN_01307a00(*(undefined4 *)(*(int *)((int)param_1 + 4) + 4));
  *(int *)(*(int *)((int)param_1 + 4) + 4) = *(int *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
  *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
  return;
}

