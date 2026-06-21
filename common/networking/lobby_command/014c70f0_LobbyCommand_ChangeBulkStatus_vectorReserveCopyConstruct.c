// addr: 0x014c70f0
// name: LobbyCommand_ChangeBulkStatus_vectorReserveCopyConstruct
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_ChangeBulkStatus_vectorReserveCopyConstruct(int first, int
   last, int dest) */

int LobbyCommand_ChangeBulkStatus_vectorReserveCopyConstruct(int first,int last,int dest)

{
  int iVar1;
  int in_stack_00000010;
  int in_stack_00000014;
  
                    /* Thin wrapper around the ChangeBulkStatus vector range copy-construction
                       helper, used while reserving/reallocating vector storage. Evidence is its
                       call to 014c68d0 and caller 014c7390's reserve-capacity logic. */
  iVar1 = LobbyCommand_ChangeBulkStatus_vectorCopyConstructRange
                    (last,in_stack_00000010,in_stack_00000014);
  return iVar1;
}

