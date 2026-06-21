// addr: 0x01308130
// name: LobbyRoleMapValue_ctor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
LobbyRoleMapValue_ctor(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies a key/value word into the destination and constructs/copies the
                       role-set vector payload. Used by LobbyRoleMap_getOrCreateRoleSet when
                       inserting a new role bucket. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  FUN_005f15f0(param_3);
  ExceptionList = local_c;
  return param_1;
}

