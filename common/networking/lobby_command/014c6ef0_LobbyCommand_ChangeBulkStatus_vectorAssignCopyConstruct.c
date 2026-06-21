// addr: 0x014c6ef0
// name: LobbyCommand_ChangeBulkStatus_vectorAssignCopyConstruct
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_ChangeBulkStatus_vectorAssignCopyConstruct(int first, int
   last, int dest) */

int LobbyCommand_ChangeBulkStatus_vectorAssignCopyConstruct(int first,int last,int dest)

{
  int iVar1;
  
                    /* Thin EH-state wrapper around the ChangeBulkStatus vector range
                       copy-construction helper, used by vector assignment after allocating
                       destination storage. Evidence is its only real call to 014c68d0 and caller
                       014c7740's vector assignment logic. */
  iVar1 = LobbyCommand_ChangeBulkStatus_vectorCopyConstructRange(first,last,dest);
  return iVar1;
}

