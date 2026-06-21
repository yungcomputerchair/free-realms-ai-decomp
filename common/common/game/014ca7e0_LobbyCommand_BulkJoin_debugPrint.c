// addr: 0x014ca7e0
// name: LobbyCommand_BulkJoin_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_BulkJoin_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_BulkJoin_debugPrint(void *this,void *out)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  void *local_3f0;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a bulk-join lobby command, including group id and account/role
                       entries nested in its tree/vector payload. */
  local_4 = DAT_01b839d8 ^ (uint)&local_3fc;
  local_3f0 = out;
  FUN_01241650("Bulk Join Lobby Command\n",0x18);
  AccountCommand_dump(this,out);
  _sprintf(local_3ec,"Group ID: %d\n",*(undefined4 *)((int)this + 0x14));
  pcVar5 = local_3ec;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar5 - (int)(local_3ec + 1));
  local_3f8 = **(int **)((int)this + 0xc);
  local_3fc = (int)this + 8;
  local_3f4 = local_3fc;
  while( true ) {
    iVar4 = local_3f8;
    iVar6 = local_3fc;
    iVar2 = *(int *)(local_3f4 + 4);
    if ((local_3fc == 0) || (local_3fc != local_3f4)) {
      FUN_00d83c2d();
    }
    if (iVar4 == iVar2) break;
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    if (iVar4 == *(int *)(iVar6 + 4)) {
      FUN_00d83c2d();
    }
    puVar7 = *(undefined4 **)(iVar4 + 0x14);
    if (*(undefined4 **)(iVar4 + 0x18) < puVar7) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (iVar4 == *(int *)(iVar6 + 4)) {
        FUN_00d83c2d();
      }
      puVar3 = *(undefined4 **)(iVar4 + 0x18);
      if (puVar3 < *(undefined4 **)(iVar4 + 0x14)) {
        FUN_00d83c2d();
      }
      if (iVar4 == -0x10) {
        FUN_00d83c2d();
      }
      if (puVar7 == puVar3) break;
      if (iVar4 == *(int *)(local_3fc + 4)) {
        FUN_00d83c2d();
      }
      if (iVar4 == -0x10) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar4 + 0x18) <= puVar7) {
        FUN_00d83c2d();
      }
      _sprintf(local_3ec,"AccountID: %d, role: %d\n",*puVar7);
      pcVar5 = local_3ec;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_01241650(local_3ec,(int)pcVar5 - (int)(local_3ec + 1));
      if (*(undefined4 **)(iVar4 + 0x18) <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
      iVar6 = local_3fc;
    }
    FUN_01303940();
  }
  return;
}

