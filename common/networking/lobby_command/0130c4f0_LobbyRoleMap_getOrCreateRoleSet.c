// addr: 0x0130c4f0
// name: LobbyRoleMap_getOrCreateRoleSet
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall LobbyRoleMap_getOrCreateRoleSet(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Looks up an integer role key in a red-black tree/map and inserts a default
                       mapped value when missing, returning the mapped value slot. Evidence:
                       Lobby.cpp callers assert kInvalidRole != role and print
                       General/Player/Observer/Moderator/Staff role sets through repeated calls with
                       keys 1..5. */
  puStack_8 = &LAB_01676e70;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  puVar6 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar6[1] + 0x21) == '\0') {
    puVar2 = (undefined4 *)puVar6[1];
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar6 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  if ((puVar6 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar6[3])) {
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
    local_4 = 0;
    uVar4 = LobbyRoleMapValue_ctor(param_2,local_30);
    local_4._0_1_ = 1;
    piVar5 = (int *)FUN_0130c230(local_38,param_1,puVar6,uVar4);
    param_1 = *piVar5;
    puVar6 = (undefined4 *)piVar5[1];
    local_4 = (uint)local_4._1_3_ << 8;
    LobbyVector_releaseStorage(local_20);
    local_4 = 0xffffffff;
    if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
  }
  local_4 = 0xffffffff;
  if (param_1 == 0) {
    FUN_00d83c2d(uVar1);
  }
  if (puVar6 == *(undefined4 **)(param_1 + 4)) {
    FUN_00d83c2d(uVar1);
  }
  ExceptionList = local_c;
  return puVar6 + 4;
}

