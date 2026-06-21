// addr: 0x01315050
// name: FUN_01315050
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01315050(int param_1)

{
  void *pvVar1;
  int *key;
  int iVar2;
  int *extraout_EAX;
  int *extraout_EAX_00;
  undefined4 uVar3;
  void *handle;
  undefined4 uVar4;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined1 local_70 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [4];
  void *local_64;
  undefined4 local_54;
  uint local_50;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4c [4];
  void *local_48;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30 [9];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Small helper/dispatcher using calls: FUN_012d08f0; FUN_01407c10;
                       StdRbTreeInt_find; FUN_01407760; assign; FUN_012d08e0. No class-identifying
                       evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01677a68;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff6c);
  ExceptionList = &local_c;
  if ((*(char *)(param_1 + 0x4bc) != '\0') && (iVar2 = StateMachine_getCurrentState(), iVar2 != 0))
  {
    local_7c = 0;
    DisplayActionManager_ensureSingleton();
    local_80 = FUN_012d08f0();
    StdRbTreeInt_find((void *)(param_1 + 0x230),local_70,&local_80,key);
    pvVar1 = (void *)*extraout_EAX;
    local_74 = *(int *)(param_1 + 0x234);
    iVar2 = extraout_EAX[1];
    if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)(param_1 + 0x230))) {
      FUN_00d83c2d();
    }
    if (iVar2 != local_74) {
      if (pvVar1 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar2 == *(int *)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      if (*(int *)(iVar2 + 0x10) == 1) {
        local_7c = 1;
      }
    }
    StdRbTreeInt_find((void *)(param_1 + 0x29c),local_70,&local_80,key);
    pvVar1 = (void *)*extraout_EAX_00;
    local_74 = *(int *)(param_1 + 0x2a0);
    iVar2 = extraout_EAX_00[1];
    if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)(param_1 + 0x29c))) {
      FUN_00d83c2d();
    }
    uVar4 = local_7c;
    if (iVar2 != local_74) {
      if (pvVar1 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar2 == *(int *)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      uVar4 = local_7c;
      if (*(int *)(iVar2 + 0x10) == 1) {
        uVar4 = 0xffffffff;
      }
    }
    AccountCommand_SetChallengeStatus_ctor(local_30);
    local_4 = 0;
    DisplayActionManager_ensureSingleton();
    iVar2 = FUN_012d08e0();
    if (iVar2 != 0) {
      uVar3 = FUN_013a3480();
      FUN_01407c10(uVar3);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = (void *)((uint)local_64 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_68,"ChallengeId",0xb);
    local_4._0_1_ = 1;
    FUN_01407760(local_68,*(undefined4 *)(param_1 + 0x41c));
    local_4._0_1_ = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      _free(local_64);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = (void *)((uint)local_64 & 0xffffff00);
    local_34 = 0xf;
    local_38 = 0;
    local_48 = (void *)((uint)local_48 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_4c,"GameResult",10);
    local_4._0_1_ = 2;
    FUN_01407760(local_4c,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = (void *)((uint)local_48 & 0xffffff00);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4 = 0xffffffff;
    AccountCommand_SetChallengeStatus_dtor(local_30);
  }
  FUN_01348e90();
  ExceptionList = local_c;
  return;
}

