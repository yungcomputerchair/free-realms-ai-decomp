// addr: 0x01339370
// name: CWGame_getActiveActionsAndCards
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGame_getActiveActionsAndCards(void * game, int phaseId_, int eventId_,
   void * out) */

void __thiscall
CWGame_getActiveActionsAndCards(void *this,void *game,int phaseId_,int eventId_,void *out)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Collects active actions/cards for the current phase/event and logs each
                       active card/action found. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167b908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = (**(code **)(**(int **)((int)this + 0x68) + 0x3c))(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  uVar4 = FUN_013f7eb0();
  Game_logGeneral(this,"CWGame::getActiveActionsAndCards. phase: %d event: %d",uVar3);
  pvStack_18 = (void *)0x0;
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  uStack_4 = 0;
  cVar2 = FUN_01411880(game,uVar3,uVar4,auStack_1c,this);
  pvVar6 = pvStack_18;
  if (cVar2 != '\0') {
    if (pvStack_14 < pvStack_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      pvVar1 = pvStack_14;
      if (pvStack_14 < pvStack_18) {
        FUN_00d83c2d();
      }
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (pvVar6 == pvVar1) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (pvStack_14 <= pvVar6) {
        FUN_00d83c2d();
      }
      if (*(char *)((int)this + 0x22c) != '\0') {
        iVar5 = Card_getPropertyMap();
        if (*(uint *)(iVar5 + 0x18) < 0x10) {
          iVar5 = iVar5 + 4;
        }
        else {
          iVar5 = *(int *)(iVar5 + 4);
        }
        uVar3 = PlayElement_getId(iVar5);
        Game_logGeneral(this,"Card (%d) %s has action and is active",uVar3);
      }
      if (pvStack_14 <= pvVar6) {
        FUN_00d83c2d();
      }
      FUN_01336520(pvVar6);
      if (pvStack_14 <= pvVar6) {
        FUN_00d83c2d();
      }
      pvVar6 = (void *)((int)pvVar6 + 0xc);
    }
  }
  uStack_4 = 0xffffffff;
  if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_18);
  }
  ExceptionList = local_c;
  return;
}

