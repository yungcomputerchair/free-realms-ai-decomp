// addr: 0x0136d1f0
// name: FUN_0136d1f0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0136d1f0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01680629;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  Game_logGeneral(param_1,"inAdvanceTurn",uVar2);
  if ((char)param_1[0x5f] == '\0') {
    *(undefined1 *)((int)param_1 + 0x17d) = 1;
    Game_logGeneral(param_1,"GameIsSetup = false",uVar2);
    ExceptionList = local_c;
    return 0;
  }
  if ((char)param_1[0x46] == '\0') {
    piVar6 = param_1;
    Game_logGeneral(param_1,"GameStarted = false",uVar2);
    *(undefined1 *)(param_1 + 0x46) = 1;
    *(undefined1 *)((int)param_1 + 0x17d) = 0;
    Game_logGeneral(param_1,"creating StartOfGame",piVar6);
    if (param_1[0x1a] != 0) {
      Game_logGeneral(param_1,"Overwriting turn pointer!",uVar2);
      if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x1a])(1);
      }
      param_1[0x1a] = 0;
    }
    pvVar3 = Mem_Alloc(0xa8);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)GameTurn_ctor();
    }
    local_4 = 0xffffffff;
    param_1[0x1a] = (int)pvVar3;
    set_field_4(pvVar3,(uint)param_1);
    set_field_14((void *)param_1[0x1a],1);
    iVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x38))();
    param_1[0xcb] = iVar4;
    GameTurn_setTurnNumber(iVar4);
    if (*(char *)((int)param_1 + 0x14d) == '\0') {
      pvVar3 = Mem_Alloc(0x24);
      local_4 = 1;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)FUN_0141a120(param_1);
      }
      local_4 = 0xffffffff;
      iVar4 = Game_getMyPlayerID(param_1);
      Game_dispatchCommandToPlayer(param_1,iVar4,pvVar3);
    }
  }
  else {
    Game_logGeneral(param_1,"game is already started.",uVar2);
    if (param_1[0x1a] != 0) {
      FUN_013363c0(param_1 + 0x1a);
    }
    if (*(char *)((int)param_1 + 0x131) != '\0') {
      *(undefined1 *)((int)param_1 + 0x131) = 0;
    }
    pvVar3 = Mem_Alloc(0xa8);
    local_4 = 2;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)GameTurn_ctor();
    }
    local_4 = 0xffffffff;
    set_field_4(pvVar3,(uint)param_1);
    local_18 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    local_10 = 0;
    local_4 = 3;
    (**(code **)(*param_1 + 0x144))(local_1c);
    puVar5 = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar1 = local_14;
      if (local_14 < local_18) {
        FUN_00d83c2d();
      }
      if (puVar5 == puVar1) break;
      if (local_14 <= puVar5) {
        FUN_00d83c2d();
      }
      (**(code **)(*(int *)*puVar5 + 0x20c))(1);
      if (local_14 <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
    piVar6 = param_1 + 0x1a;
    if ((void *)param_1[0x1a] == (void *)0x0) {
      *piVar6 = (int)pvVar3;
      set_field_14(pvVar3,0);
      GameTurn_setTurnNumber(param_1[0xcb]);
    }
    else {
      uVar2 = get_field_14((void *)param_1[0x1a]);
      set_field_14(pvVar3,uVar2 + 1);
      iVar4 = *param_1;
      uVar7 = 0;
      uVar2 = get_field_14((void *)*piVar6);
      (**(code **)(iVar4 + 0x21c))(1,uVar2,uVar7);
      *piVar6 = (int)pvVar3;
      GameTurn_setTurnNumber(param_1[0xcb]);
    }
    local_4 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return 2;
}

