// addr: 0x0140fa50
// name: Card_deserializeWithTargetMap
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwcard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall Card_deserializeWithTargetMap(int *param_1,void *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  void *local_20;
  uint uStack_1c;
  uint uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes a Card, reads an integer vector, then for each entry
                       finds/creates a slot and deserializes a GameObjectIdVector. Evidence:
                       cwcard.cpp assertions and calls Card_deserialize,
                       Deserializer_readIntegerVector, GameObjectIdVector_deserialize. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016923c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,&local_20,DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwcard.cpp",0x483);
  }
  Card_deserialize(param_1,param_2);
  uStack_1c = 0;
  uStack_18 = 0;
  pvStack_14 = (void *)0x0;
  puStack_8 = (undefined1 *)0x0;
  bVar3 = Deserializer_readIntegerVector(&stack0x00000000,&local_20);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\rules\\game\\cwcard.cpp",0x48a);
  }
  uVar1 = uStack_18;
  if (uStack_18 < uStack_1c) {
    FUN_00d83c2d();
  }
  uVar6 = uStack_1c;
  if (uStack_18 < uStack_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (uVar6 == uVar1) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (uStack_18 <= uVar6) {
      FUN_00d83c2d();
    }
    uVar5 = IntToObjectTree_findOrCreateSlot(uVar6);
    cVar2 = GameObjectIdVector_deserialize(uVar5);
    if (cVar2 == '\0') {
      FUN_012f5a60("false","..\\common\\rules\\game\\cwcard.cpp",0x493);
    }
    if (uStack_18 <= uVar6) {
      FUN_00d83c2d();
    }
    uVar6 = uVar6 + 4;
  }
  uVar4 = (**(code **)(*param_1 + 0x14))(param_2);
  local_c = (void *)0xffffffff;
  if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  ExceptionList = pvStack_14;
  return uVar4;
}

