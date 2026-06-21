// addr: 0x01356060
// name: Game_findByID
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_findByID(int gameid) */

void * __cdecl Game_findByID(int gameid)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up a Game in the global game map by id, returns null for id 0, and
                       asserts that an active result game's getGameID matches the requested id. */
  iVar5 = gameid;
  if (gameid == 0) {
    return (void *)0x0;
  }
  StdTree_lowerBound_IntKey_pairOut(&DAT_01cbdbb8,local_8,&gameid,unaff_EDI);
  iVar4 = DAT_01cbdbbc;
  puVar1 = (undefined *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  if ((puVar1 == (undefined *)0x0) || (puVar1 != &DAT_01cbdbb8)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar4) {
    if (puVar1 == (undefined *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    pvVar3 = *(void **)(iVar2 + 0x10);
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("resultGame","..\\common\\common\\game\\Game.cpp",0x2f3);
    }
    if ((*(char *)((int)pvVar3 + 0x14d) != '\0') && (*(int *)((int)pvVar3 + 0x14) != iVar5)) {
      FUN_012f5a60("resultGame->getGameID() == gameid","..\\common\\common\\game\\Game.cpp",0x2f5);
    }
    return pvVar3;
  }
  return DAT_01cbdbb4;
}

