// addr: 0x013860d0
// name: EvaluationEnvironment_addCommandObjectChecked
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall
EvaluationEnvironment_addCommandObjectChecked(int param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  void *value;
  void *pvVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* RTTI-checks a command object and appends it to the environment command-object
                       vector. */
  puStack_8 = &LAB_01683209;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_3 + 4) = 0;
  *(undefined4 *)((int)param_3 + 8) = 0;
  *(undefined4 *)((int)param_3 + 0xc) = 0;
  local_4 = 0;
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 < *(uint *)(param_1 + 0x20)) {
    FUN_00d83c2d();
    param_2 = extraout_EDX;
  }
  uVar4 = CONCAT44(param_2,local_10);
  uVar3 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x24) < uVar3) {
    FUN_00d83c2d();
    uVar4 = CONCAT44(extraout_EDX_00,local_10);
  }
  while( true ) {
    local_10 = (int)uVar4;
    if (param_1 == -0x1c) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_01,local_10);
    }
    local_10 = (int)uVar4;
    if (uVar3 == uVar1) break;
    if (param_1 == -0x1c) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_02,local_10);
    }
    local_10 = (int)uVar4;
    if (*(uint *)(param_1 + 0x24) <= uVar3) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_03,local_10);
    }
    local_10 = (int)uVar4;
    uVar8 = 0;
    pTVar7 = &CommandObject::RTTI_Type_Descriptor;
    pTVar6 = &PlayElement::RTTI_Type_Descriptor;
    uVar5 = 0;
    pvVar2 = find_play_element_in_maps(*(void **)(param_1 + 4),(int)((ulonglong)uVar4 >> 0x20));
    uVar4 = FUN_00d8d382(pvVar2,uVar5,pTVar6,pTVar7,uVar8);
    local_10 = (int)uVar4;
    if (local_10 != 0) {
      CommandObjectVector_pushBack(param_3,&local_10,value);
      uVar4 = CONCAT44(extraout_EDX_04,local_10);
    }
    local_10 = (int)uVar4;
    if (*(uint *)(param_1 + 0x24) <= uVar3) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_05,local_10);
    }
    uVar3 = uVar3 + 4;
  }
  ExceptionList = local_c;
  return param_3;
}

