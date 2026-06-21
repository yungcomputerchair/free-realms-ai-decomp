// addr: 0x0138b370
// name: Card_isGameTextSuppressed
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_isGameTextSuppressed(void * this, int effectId_) */

bool __thiscall Card_isGameTextSuppressed(void *this,int effectId_)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int unaff_ESI;
  undefined4 uVar4;
  int iVar5;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Checks whether a card's game text/effect is suppressed by environment
                       suppression rules, suppress-effect keyword data, or card-specific dynamic
                       suppression. Logs Matched/This card is suppressed game text when suppression
                       applies. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01683978;
  local_c = ExceptionList;
  uStack_24 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  bVar1 = PackedId_consumeHighBitFlag_alt((uint *)&effectId_);
  iVar5 = effectId_;
  cVar2 = (**(code **)(**(int **)((int)this + 0x30) + 0x1fc))();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(int **)((int)this + 0x30) + 0x1f8))(this);
    if (cVar2 != '\0') {
      Game_logGeneral(*(void **)((int)this + 0x30),"This card is suppressed game text.",iVar5);
      ExceptionList = pvStack_10;
      return bVar1;
    }
  }
  FUN_012fa910();
  puStack_8 = (undefined1 *)0x0;
  uVar4 = 2;
  cVar2 = (**(code **)(*(int *)this + 4))(2,&stack0xffffffe4);
  if (cVar2 == '\0') {
LAB_0138b49a:
    cVar2 = (**(code **)(*(int *)this + 0x1cc))(puStack_8);
    if (cVar2 == '\0') {
      if (!bVar1) goto LAB_0138b4b3;
      goto LAB_0138b473;
    }
  }
  else {
    FUN_01300db0();
    if (unaff_ESI != 6) {
      FUN_012f5a60("keywordData.isIntegerListValue()","..\\common\\common\\game\\Card.cpp",0x108e);
    }
    bVar3 = ValueData_containsInt(&uStack_24,(int)puStack_8);
    if (!bVar3) goto LAB_0138b49a;
    Game_logGeneral(*(void **)((int)this + 0x30),"Matched",uVar4);
  }
  if (bVar1) {
LAB_0138b4b3:
    FUN_01300cd0();
    ExceptionList = pvStack_18;
    return false;
  }
LAB_0138b473:
  FUN_01300cd0();
  ExceptionList = pvStack_18;
  return true;
}

