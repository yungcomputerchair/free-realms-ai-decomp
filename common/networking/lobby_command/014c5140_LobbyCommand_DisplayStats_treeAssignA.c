// addr: 0x014c5140
// name: LobbyCommand_DisplayStats_treeAssignA
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_DisplayStats_treeAssignA(void *param_1,void *param_2)

{
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Assigns one DisplayStats-related red-black-tree member from another, guarding
                       self-assignment, clearing the destination, and copying source nodes. The
                       exact member is not identified from this isolated helper. */
  if (param_1 != param_2) {
    StdTree_eraseRange(param_1,local_8,param_1,**(int **)((int)param_1 + 4),(int)param_1,
                       (int)*(int **)((int)param_1 + 4),(int)unaff_EDI);
    StdTree_Node2D_assignFromTree(param_1,param_2,unaff_EDI);
  }
  return param_1;
}

