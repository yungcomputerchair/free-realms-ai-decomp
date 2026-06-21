// addr: 0x01361040
// name: Game_collectTrackedCards
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall Game_collectTrackedCards(void *param_1,undefined4 param_2,void *param_3)

{
  void **item;
  void *pvVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_18;
  void *local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a vector of Card pointers by walking a Game vector and RTTI-casting
                       PlayElements to Card. */
  puStack_8 = &LAB_0167ed79;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_3 + 4) = 0;
  *(undefined4 *)((int)param_3 + 8) = 0;
  *(undefined4 *)((int)param_3 + 0xc) = 0;
  local_4 = 0;
  uVar2 = *(uint *)((int)param_1 + 0x2e0);
  local_14 = param_1;
  local_10 = uVar2;
  if (uVar2 < *(uint *)((int)param_1 + 0x2dc)) {
    FUN_00d83c2d();
    param_2 = extraout_EDX;
  }
  uVar4 = CONCAT44(param_2,local_18);
  uVar3 = *(uint *)((int)param_1 + 0x2dc);
  pvVar1 = param_1;
  if (*(uint *)((int)param_1 + 0x2e0) < uVar3) {
    FUN_00d83c2d();
    uVar4 = CONCAT44(extraout_EDX_00,local_18);
  }
  while( true ) {
    local_18 = (undefined4)uVar4;
    if (param_1 == (void *)0xfffffd28) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_01,local_18);
    }
    local_18 = (undefined4)uVar4;
    if (uVar3 == uVar2) break;
    if (param_1 == (void *)0xfffffd28) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_02,local_18);
    }
    local_18 = (undefined4)uVar4;
    if (*(uint *)((int)param_1 + 0x2e0) <= uVar3) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_03,local_18);
    }
    local_18 = (undefined4)uVar4;
    pvVar1 = find_play_element_in_maps(pvVar1,(int)((ulonglong)uVar4 >> 0x20));
    uVar4 = FUN_00d8d382(pvVar1,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    local_18 = (undefined4)uVar4;
    if (pvVar1 != (void *)0x0) {
      PointerVector_pushBack(param_3,&local_18,item);
      uVar4 = CONCAT44(extraout_EDX_04,local_18);
    }
    local_18 = (undefined4)uVar4;
    if (*(uint *)((int)param_1 + 0x2e0) <= uVar3) {
      FUN_00d83c2d();
      uVar4 = CONCAT44(extraout_EDX_05,local_18);
    }
    uVar3 = uVar3 + 4;
    pvVar1 = local_14;
    uVar2 = local_10;
  }
  ExceptionList = local_c;
  return param_3;
}

