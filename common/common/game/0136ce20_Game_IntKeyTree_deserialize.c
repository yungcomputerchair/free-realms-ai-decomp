// addr: 0x0136ce20
// name: Game_IntKeyTree_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Game_IntKeyTree_deserialize(void * tree) */

uint __thiscall Game_IntKeyTree_deserialize(void *this,void *tree)

{
  undefined4 uVar1;
  char cVar2;
  int *key;
  uint uVar3;
  uint extraout_EAX;
  int iVar4;
  int local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined1 local_5c [12];
  undefined4 local_50;
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a count-prefixed integer-keyed tree by reading key/value
                       objects, constructing temporary nodes, and inserting them uniquely. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016805de;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff88);
  ExceptionList = &local_c;
  local_64 = this;
  FUN_013c2690(&local_68);
  iVar4 = 0;
  if (0 < local_68) {
    local_60 = &local_38;
    do {
      local_3c = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_4 = 2;
      cVar2 = FUN_01401a70(*(undefined4 *)this,&local_3c);
      uVar1 = local_3c;
      if (cVar2 == '\0') {
        local_4 = 0xffffffff;
        EmbeddedVector_clearAt08_alt(&local_38);
        ExceptionList = local_c;
        return extraout_EAX & 0xffffff00;
      }
      local_50 = local_38;
      FUN_0135e190(local_34);
      local_4._0_1_ = 5;
      local_20[0] = local_50;
      local_24 = uVar1;
      FUN_0135e190(local_4c);
      local_4._0_1_ = 8;
      Game_IntKeyTree_insertUnique(tree,(int)local_5c,&local_24,key);
      local_4._0_1_ = 5;
      EmbeddedVector_clearAt08_alt(local_20);
      local_4 = CONCAT31(local_4._1_3_,2);
      EmbeddedVector_clearAt08_alt(&local_50);
      local_4 = 0xffffffff;
      EmbeddedVector_clearAt08_alt(&local_38);
      iVar4 = iVar4 + 1;
      this = local_64;
    } while (iVar4 < local_68);
  }
  uVar3 = FUN_013c26d0();
  ExceptionList = local_c;
  return uVar3;
}

