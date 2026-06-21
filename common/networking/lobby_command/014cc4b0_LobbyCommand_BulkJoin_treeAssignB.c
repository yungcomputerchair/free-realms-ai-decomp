// addr: 0x014cc4b0
// name: LobbyCommand_BulkJoin_treeAssignB
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_BulkJoin_treeAssignB(void *param_1,void *param_2)

{
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Second instantiation of a BulkJoin-related red-black-tree assignment helper.
                       It clears the destination and uses 014cc220 to copy the source tree when the
                       source differs from the destination. */
  if (param_1 != param_2) {
    FUN_01308260(local_8,param_1,**(undefined4 **)((int)param_1 + 4),param_1,
                 *(undefined4 **)((int)param_1 + 4));
    LobbyCommand_BulkJoin_copyTreeMember(param_1,param_2,unaff_EDI);
  }
  return param_1;
}

