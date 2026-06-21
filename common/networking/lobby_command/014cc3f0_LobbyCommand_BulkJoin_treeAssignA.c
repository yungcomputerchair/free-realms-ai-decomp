// addr: 0x014cc3f0
// name: LobbyCommand_BulkJoin_treeAssignA
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_BulkJoin_treeAssignA(void *param_1,void *param_2)

{
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Assigns a BulkJoin-related red-black-tree member, skipping work on
                       self-assignment and otherwise clearing/copying through the BulkJoin tree copy
                       helper. Exact member identity is not exposed in this helper. */
  if (param_1 != param_2) {
    FUN_01308260(local_8,param_1,**(undefined4 **)((int)param_1 + 4),param_1,
                 *(undefined4 **)((int)param_1 + 4));
    LobbyCommand_BulkJoin_copyTreeMember(param_1,param_2,unaff_EDI);
  }
  return param_1;
}

