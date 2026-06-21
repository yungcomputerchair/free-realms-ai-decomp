// addr: 0x0103c070
// name: FUN_0103c070
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall FUN_0103c070(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a registry/factory by allocating and constructing many related
                       command/component objects of sizes 0x44-0x8c. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01638e7b;
  local_c = ExceptionList;
  if (param_1[0x24] != 0) {
    ExceptionList = &local_c;
    piVar2 = (int *)(**(code **)(*(int *)param_1[0x24] + 0x10))
                              (param_2,DAT_01b839d8 ^ (uint)&stack0xffffffe8);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar3 = (**(code **)(*param_1 + 0x7c))();
      (**(code **)(iVar1 + 0xc))(uVar3);
    }
    ExceptionList = unaff_EBX;
    return piVar2;
  }
  switch(param_2) {
  case 1:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x48);
    local_4 = 0;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryItem_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  default:
    return (int *)0x0;
  case 3:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x44);
    local_4 = 5;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryExperience_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x48);
    local_4 = 2;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryQuestAdd_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x48);
    local_4 = 1;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryProfileAdd_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x48);
    local_4 = 4;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryAbilityLine_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 10:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x48);
    local_4 = 8;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryCollectionAdd_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x54);
    local_4 = 9;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryCollectionEntryAdd_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x44);
    local_4 = 10;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryToken_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xd:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x4c);
    local_4 = 0xb;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryPetTrickExperience_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xe:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x48);
    local_4 = 3;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryRecipe_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xf:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x5c);
    local_4 = 0xc;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryZoneFlag_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0x11:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x8c);
    local_4 = 0xd;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryCharacterFlag_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0x12:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x44);
    local_4 = 0xe;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryWheelSpin_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0x13:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x44);
    local_4 = 0x10;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryTrophy_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0x14:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x44);
    local_4 = 0xf;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryClientExitUrl_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0x16:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x44);
    local_4 = 6;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryFactoryExperience_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0x17:
    ExceptionList = &local_c;
    pvVar4 = Mem_Alloc(0x48);
    local_4 = 7;
    if (pvVar4 != (void *)0x0) {
      piVar2 = (int *)RewardBundleEntryChest_ctor();
      ExceptionList = local_c;
      return piVar2;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}

