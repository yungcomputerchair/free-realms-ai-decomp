// addr: 0x014c54c0
// name: LobbyCommand_DisplayStats_treeAssignB
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_DisplayStats_treeAssignB(void *param_1,void *param_2)

{
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Assigns another DisplayStats-related red-black-tree member by clearing the
                       destination and copying source nodes. The helper is identical in shape to
                       014c5140 but appears as a separate instantiation. */
  if (param_1 != param_2) {
    StdTree_eraseRange(param_1,local_8,param_1,**(int **)((int)param_1 + 4),(int)param_1,
                       (int)*(int **)((int)param_1 + 4),(int)unaff_EDI);
    StdTree_Node2D_assignFromTree(param_1,param_2,unaff_EDI);
  }
  return param_1;
}

