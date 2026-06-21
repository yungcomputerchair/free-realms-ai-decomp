// addr: 0x0138e060
// name: FUN_0138e060
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0138e060(int *param_1,void *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  void *element;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 *puVar8;
  void *unaff_retaddr;
  int iStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Small helper/dispatcher using calls: EvaluationEnvironment_getOriginCard;
                       Game_logGeneral; FUN_012fca90; Card_containsAttributeId; FUN_01381430;
                       PlayElement_getId. No class-identifying evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01683a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  local_4 = 0;
  cVar3 = (**(code **)(*param_1 + 4))(param_2,local_18);
  if (((cVar3 == '\0') || (iStack_1c != 2)) ||
     (bVar4 = ValueData_equivalentTo(unaff_retaddr,auStack_20), !bVar4)) {
    cVar3 = (**(code **)(*param_1 + 0x48))();
    if ((cVar3 == '\0') &&
       (bVar4 = Card_containsAttributeId((void *)param_1[0xc],(int)param_1), !bVar4)) {
LAB_0138e288:
      local_c = (void *)0xffffffff;
      FUN_01300cd0();
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x214))(param_2,&stack0xffffffc4);
    puVar8 = *(undefined4 **)(unaff_EBP + 8);
    puStack_2c = puVar8;
    if (puVar8 < *(undefined4 **)(unaff_EBP + 4)) {
      FUN_00d83c2d();
    }
    puStack_24 = *(undefined4 **)(unaff_EBP + 4);
    iStack_28 = unaff_EBP;
    if (*(undefined4 **)(unaff_EBP + 8) < puStack_24) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar2 = puStack_24;
      iVar5 = iStack_28;
      if ((iStack_28 == 0) || (iStack_28 != unaff_EBP)) {
        FUN_00d83c2d();
      }
      if (puVar2 == puVar8) goto LAB_0138e288;
      if (iVar5 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar5 + 8) <= puVar2) {
        FUN_00d83c2d();
      }
      piVar1 = (int *)*puVar2;
      element = EvaluationEnvironment_getOriginCard(param_2);
      set_play_element_id_field(param_2,param_1);
      iVar5 = FUN_01418e00();
      if ((iVar5 != 0) && (*(char *)(param_1[0xc] + 0x22c) != '\0')) {
        iVar5 = FUN_01418e00();
        if (*(uint *)(iVar5 + 0x13c) < 0x10) {
          iVar5 = iVar5 + 0x128;
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x128);
        }
        if ((uint)param_1[0x4f] < 0x10) {
          piVar7 = param_1 + 0x4a;
        }
        else {
          piVar7 = (int *)param_1[0x4a];
        }
        FUN_01418e00();
        uVar6 = PlayElement_getId();
        PlayElement_getId(iVar5,uVar6);
        Game_logGeneral((void *)param_1[0xc],
                        "Checking Dynamic Modifier on card: %s(%d) from card: %s(%d)",piVar7);
      }
      cVar3 = (**(code **)(*piVar1 + 0x44))(param_2,&iStack_30,&local_4);
      set_play_element_id_field(param_2,element);
      if ((((cVar3 != '\0') || ((char)local_4 != '\0')) &&
          ((cVar3 = (**(code **)(*param_1 + 0x230))(piVar1,param_2), cVar3 != '\0' ||
           (iStack_30 < 1)))) && (bVar4 = ValueData_containsInt(unaff_retaddr,iStack_30), bVar4))
      break;
      if (*(undefined4 **)(iStack_28 + 8) <= puStack_24) {
        FUN_00d83c2d();
      }
      puVar8 = puStack_2c;
      puStack_24 = puStack_24 + 1;
    }
  }
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return 1;
}

