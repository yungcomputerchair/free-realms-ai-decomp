// addr: 0x01343460
// name: PlayElement_ensureSuppressEffectList
// subsystem: common/common/game
// source (binary assert): common/common/game/PlayElement.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_ensureSuppressEffectList(void * this) */

void __fastcall PlayElement_ensureSuppressEffectList(void *this)

{
  char cVar1;
  void *unaff_ESI;
  uint uStack_20;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Validates any existing suppress-effect keyword data is an integer-list value,
                       creates an integer-list value, and stores it back under keyword 0xa2. Called
                       from PlayElement_addSuppressEffect. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167c8a8;
  local_c = ExceptionList;
  uStack_20 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  cVar1 = (**(code **)(*(int *)this + 4))(0xa2,local_18);
  if (cVar1 != '\0') {
    FUN_01300db0();
    if (unaff_ESI != (void *)0x6) {
      FUN_012f5a60("keywordData.isIntegerListValue()","..\\common\\common\\game\\PlayElement.cpp",
                   0x1c8);
    }
  }
  FUN_01300680(6);
  FUN_0042c155(&local_4);
  (**(code **)(*(int *)this + 0x10))(0xa2,&uStack_20);
  uStack_14 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = unaff_ESI;
  return;
}

