// addr: 0x014d7cd0
// name: GameCommand_SetupGame_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_SetupGame_debugPrint(void * this, void * out) */

void __thiscall GameCommand_SetupGame_debugPrint(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *local_3f8;
  void *local_3f4;
  char local_3f0 [1004];
  uint local_4;
  
                    /* Debug-prints a setup-game command, including server ids, player order data,
                       ordered account ids, version, match, duration, game/play types, league, and
                       match structure. */
  local_4 = DAT_01b839d8 ^ (uint)&local_3f8;
  local_3f4 = this;
  FUN_01241650("Setup Game Game Command\n",0x18);
  GameCommand_dump(this,out);
  _sprintf(local_3f0,"Game Server ID: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"Server ID: %d\n",*(undefined4 *)((int)this + 0x28));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"Player Count: %d\n",*(undefined4 *)((int)this + 0x2c));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  FUN_01241650(&DAT_01770548,1);
  FUN_01241650("Player Order Data:",0x12);
  local_3f8 = *(undefined4 **)((int)this + 0x38);
  if (local_3f8 < *(undefined4 **)((int)this + 0x34)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)((int)this + 0x34);
  pvVar3 = this;
  if (*(undefined4 **)((int)this + 0x38) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffd0) {
      FUN_00d83c2d();
      pvVar3 = local_3f4;
    }
    if (puVar4 == local_3f8) break;
    if (this == (void *)0xffffffd0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x38) <= puVar4) {
      FUN_00d83c2d();
    }
    _sprintf(local_3f0," %d",*puVar4);
    pcVar2 = local_3f0;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
    if (*(undefined4 **)((int)this + 0x38) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
    pvVar3 = local_3f4;
  }
  FUN_01241650(&DAT_01770548,1);
  FUN_01241650("Ordered Account IDs:",0x14);
  local_3f8 = *(undefined4 **)((int)pvVar3 + 0x48);
  if (local_3f8 < *(undefined4 **)((int)pvVar3 + 0x44)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)((int)pvVar3 + 0x44);
  if (*(undefined4 **)((int)pvVar3 + 0x48) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar3 == (void *)0xffffffc0) {
      FUN_00d83c2d();
    }
    if (puVar4 == local_3f8) break;
    if (pvVar3 == (void *)0xffffffc0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)pvVar3 + 0x48) <= puVar4) {
      FUN_00d83c2d();
    }
    _sprintf(local_3f0," %d",*puVar4);
    pcVar2 = local_3f0;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
    if (*(undefined4 **)((int)pvVar3 + 0x48) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  FUN_01241650(&DAT_01770548,1);
  _sprintf(local_3f0,"GameVersion: 1.%d\n",*(undefined4 *)((int)pvVar3 + 0x50));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"Match ID: %d\n",*(undefined4 *)((int)pvVar3 + 0x54));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"Duration: %d\n",*(undefined4 *)((int)pvVar3 + 0x58));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"GameType: %d\n",*(undefined4 *)((int)pvVar3 + 0x5c));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"PlayType: %d\n",*(undefined4 *)((int)pvVar3 + 0x60));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"ExtraFormatFlag: %d\n",*(undefined4 *)((int)pvVar3 + 100));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"GameNum: %d\n",*(undefined4 *)((int)pvVar3 + 0x68));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"LeagueID: %d\n",*(undefined4 *)((int)pvVar3 + 0x78));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"MatchStructure: %d\n",*(undefined4 *)((int)pvVar3 + 0x7c));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  return;
}

