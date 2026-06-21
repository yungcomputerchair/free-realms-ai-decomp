// addr: 0x01412470
// name: Card_copyPlayElementRangesAndModifiers
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
Card_copyPlayElementRangesAndModifiers
          (int param_1,int param_2,int param_3,int *param_4,int *param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *src;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_6c;
  void *pvStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  int *local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [16];
  int iStack_24;
  int aiStack_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  piVar2 = param_5;
                    /* Copies Card/play-element range data and attribute modifier tree/ranges from
                       source inputs, using several Game_PlayElementRange copy helpers and Card
                       modifier tree helpers. Exact public method name is unknown. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169294e;
  local_c = ExceptionList;
  src = (undefined4 *)(DAT_01b839d8 ^ (uint)&stack0xffffff84);
  ExceptionList = &local_c;
  if ((param_4 != (int *)0x0) && (param_5 != (int *)0x0)) {
    (**(code **)(*param_5 + 0x60))(param_4);
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar6 = param_1 + 4;
  local_58 = (int *)iVar1;
  piVar4 = (int *)FUN_01411350(&local_6c,&param_2);
  pvStack_68 = (void *)piVar4[1];
  if ((*piVar4 == 0) || (*piVar4 != iVar6)) {
    FUN_00d83c2d();
  }
  if (pvStack_68 == (void *)iVar1) {
    pvStack_68 = (void *)0x0;
    uStack_64 = 0;
    uStack_60 = 0;
    iStack_4 = 0;
    piStack_5c = param_4;
    local_58 = piVar2;
    uStack_54 = param_6;
    FUN_01336520(&piStack_5c);
    puVar5 = (undefined4 *)FUN_01361b30(&param_3,&local_6c);
    iStack_4._0_1_ = 1;
    puVar5 = Game_PlayElementRange_copyFromMember(&iStack_3c,&param_2,puVar5,src);
    iStack_4._0_1_ = 2;
    Game_PlayElementRange_copyConstruct2(&iStack_24,puVar5,src);
    iStack_4._0_1_ = 3;
    FUN_013696d0(&piStack_5c,&iStack_24);
    iStack_4._0_1_ = 2;
    FUN_0135abf0();
    iStack_4._0_1_ = 1;
    FUN_0135abf0();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
LAB_01412740:
    FUN_0135abf0();
    iStack_4 = 0xffffffff;
    if (pvStack_68 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_68);
    }
  }
  else {
    pvStack_68 = (void *)**(int **)(param_1 + 8);
    local_6c = iVar6;
    while( true ) {
      pvVar3 = pvStack_68;
      iVar1 = local_6c;
      if ((local_6c == 0) || (local_6c != iVar6)) {
        FUN_00d83c2d();
      }
      if (pvVar3 == local_58) {
        pvStack_68 = (void *)0x0;
        uStack_64 = 0;
        uStack_60 = 0;
        iStack_4 = 6;
        uStack_54 = param_6;
        piStack_5c = param_4;
        local_58 = param_5;
        FUN_01336520(&piStack_5c);
        iStack_50 = param_3;
        FUN_0135df60(&local_6c);
        iStack_4._0_1_ = 8;
        iStack_3c = param_2;
        param_4 = &iStack_38;
        iStack_38 = iStack_50;
        FUN_0135df60(auStack_4c);
        iStack_4._0_1_ = 0xb;
        iStack_24 = iStack_3c;
        param_4 = aiStack_20;
        aiStack_20[0] = iStack_38;
        FUN_0135df60(auStack_34);
        iStack_4._0_1_ = 0xe;
        FUN_013696d0(&piStack_5c,&iStack_24);
        iStack_4._0_1_ = 0xb;
        FUN_0135abf0();
        iStack_4._0_1_ = 8;
        FUN_0135abf0();
        iStack_4 = CONCAT31(iStack_4._1_3_,6);
        goto LAB_01412740;
      }
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if ((pvVar3 == (void *)*(int *)(iVar1 + 4)) &&
         (FUN_00d83c2d(), pvVar3 == (void *)*(int *)(iVar1 + 4))) {
        FUN_00d83c2d();
      }
      if ((*(int *)((int)pvVar3 + 0xc) == param_2) && (*(int *)((int)pvVar3 + 0x10) == param_3))
      break;
      FUN_0134f4a0();
    }
    uStack_54 = param_6;
    piStack_5c = param_4;
    local_58 = param_5;
    FUN_01336520(&piStack_5c);
  }
  ExceptionList = local_c;
  return 1;
}

