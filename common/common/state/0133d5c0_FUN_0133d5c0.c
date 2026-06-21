// addr: 0x0133d5c0
// name: FUN_0133d5c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0133d5c0(int *param_1,int param_2,void *param_3)

{
  int arg_;
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 local_18 [8];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167bf73;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  bVar1 = Game_isPlayerAllowedToAct(param_1,param_2);
  arg_ = (int)param_3;
  if (bVar1) {
    Game_logGeneral(param_1,"game Lost by player was received from a dead player: %d.",param_2);
  }
  else {
    Game_logGeneral(param_1,"GAME LOST BY PLAYER: %d, %d",param_2);
    Game_writeGameLog(param_1,"#GAME LOST BY PLAYER: %d, %d",param_2,arg_);
    if ((char)param_1[0x46] != '\0') {
      pvVar4 = PlayArea_findPlayerElementById(param_1,param_2);
      param_3 = pvVar4;
      local_34 = (void *)GamePlayer_getAccountId(uVar3);
      piVar5 = IntDefaultMap_getOrInsert(param_1 + 0xa7,(int *)&local_34);
      *piVar5 = arg_;
      if ((char)param_1[0x46] != '\0') {
        if (pvVar4 == (void *)0x0) {
          *(undefined1 *)(param_1 + 0x76) = 1;
        }
        else {
          FUN_012fa910();
          local_4 = 0;
          FUN_01300680(2);
          local_10 = 1;
          piVar5 = (int *)unknown_getField30(pvVar4);
          (**(code **)(*piVar5 + 0x10))(0x199,local_18);
          if (arg_ == 2) {
            local_34 = Mem_Alloc(0x14);
            local_4._0_1_ = 1;
            if (local_34 == (void *)0x0) {
              pvVar4 = (void *)0x0;
            }
            else {
              pvVar4 = (void *)FUN_012f9eb0();
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_012f8c70(0x45);
            DisplayActionBuilder_addIntArg(pvVar4,param_1[5]);
            DisplayActionBuilder_addIntArg(pvVar4,param_2);
            DisplayActionBuilder_addIntArg(pvVar4,0);
            (**(code **)(*param_1 + 0x154))(pvVar4);
            pvVar4 = param_3;
          }
          local_34 = (void *)((uint)local_34 & 0xffffff00);
          if ((((param_1[0xd3] == 1) || (arg_ == 3)) || (arg_ == 1)) || ((arg_ == 2 || (arg_ == 0)))
             ) {
            Game_logGeneral(param_1,"MatchStructure: %d",param_1[0xd3]);
            puVar6 = (undefined4 *)FUN_01269090(auStack_28);
            puVar7 = (undefined4 *)FUN_01269060(auStack_20);
            PointerVector_findValue(&uStack_30,*puVar7,puVar7[1],*puVar6,puVar6[1],&param_3);
            uVar8 = FUN_01269090(auStack_20);
            cVar2 = FUN_01268ea0(uVar8);
            if (cVar2 != '\0') {
              FUN_01331280(auStack_20,uStack_30,uStack_2c);
            }
            if (param_1[0x4f] == param_2) {
              bVar1 = Game_getFlag_14d(param_1);
              if (!bVar1) {
                *(undefined1 *)((int)param_1 + 0x14e) = 1;
              }
            }
            local_34 = (void *)CONCAT31(local_34._1_3_,1);
            pvVar4 = param_3;
          }
          Game_gameWonFromLoss(param_1,(int)pvVar4,arg_,SUB41(local_34,0));
          local_4 = 0xffffffff;
          FUN_01300cd0();
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

