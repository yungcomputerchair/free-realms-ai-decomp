// addr: 0x01308520
// name: StdVectorOwner44_cleanupReturn
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdVectorOwner44_cleanupReturn(void * param_1, void * param_2) */

void * __thiscall StdVectorOwner44_cleanupReturn(void *this,void *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-cleanup style helper that destroys/cleans a vector-like member at
                       offset +0x44 and returns the second argument. Evidence: it calls the generic
                       vector cleanup helper 005f15f0 on param_1+0x44 and is used from
                       LobbyCommandSetDraft stack cleanup paths. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01676759;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f15f0((int)this + 0x44);
  ExceptionList = local_c;
  return param_1;
}

