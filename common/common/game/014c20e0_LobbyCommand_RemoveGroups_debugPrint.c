// addr: 0x014c20e0
// name: LobbyCommand_RemoveGroups_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_RemoveGroups_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_RemoveGroups_debugPrint(void *this,void *out)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  void *local_3f0;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a Remove Groups lobby command, including common lobby command
                       data and each group id in its vector. */
  local_4 = DAT_01b839d8 ^ (uint)&local_3f0;
  local_3f0 = out;
  FUN_01241650("Remove Groups Lobby Command\n",0x1c);
  AccountCommand_dump(this,out);
  puVar4 = *(undefined4 **)((int)this + 0xc);
  if (*(undefined4 **)((int)this + 0x10) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar2 = *(undefined4 **)((int)this + 0x10);
    if (puVar2 < *(undefined4 **)((int)this + 0xc)) {
      FUN_00d83c2d();
    }
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar2) break;
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x10) <= puVar4) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec,"GroupID: %d\n",*puVar4);
    pcVar3 = local_3ec;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
    if (*(undefined4 **)((int)this + 0x10) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

